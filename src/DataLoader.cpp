#include <mpi.h>
#include <iostream>
#include <sstream>
#include <regex>
#include <fstream>
#include <string>
#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>
#include <tclap/CmdLine.h>
#include <hepnos.hpp>

#include "WorkQueue.hpp"

#include "dataformat/rec_hdr.hpp"
#include "dataformat/rec_slc.hpp"
#include "dataformat/rec_vtx.hpp"
#include "dataformat/rec_vtx_elastic_fuzzyk.hpp"
#include "dataformat/rec_vtx_elastic_fuzzyk_png.hpp"
#include "dataformat/rec_vtx_elastic_fuzzyk_png_shwlid.hpp"
#include "dataformat/rec_vtx_elastic_fuzzyk_png_cvnpart.hpp"
#include "dataformat/rec_energy_numu.hpp"
#include "dataformat/rec_sel_contain.hpp"
#include "dataformat/rec_sel_cvn2017.hpp"
#include "dataformat/rec_sel_cvnProd3Train.hpp"
#include "dataformat/rec_sel_remid.hpp"
#include "dataformat/rec_spill.hpp"
#include "dataformat/rec_trk_cosmic.hpp"
#include "dataformat/rec_trk_kalman.hpp"
#include "dataformat/rec_trk_kalman_tracks.hpp"

static int         g_rank;              // Rank of this process
static int         g_size;              // Size of MPI_COMM_WORKD
static std::string g_connection_file;   // Name of HEPnOS YAML client file
static std::string g_input_filename;    // Input file name
static std::string g_output_dataset;    // Output HEPnOS dataset
static bool        g_use_async;         // Whether to use an AsyncEngine
static int         g_num_async_threads; // How many threads for the AsyncEngine
static bool        g_use_batching;      // Whether to use batching
static size_t      g_batch_size;        // Batch size
static std::string g_product_label;     // Product label
static spdlog::level::level_enum g_logging_level; // Logging level

static uint64_t g_total_events = 0;
static uint64_t g_total_products = 0;

static void parse_arguments(int argc, char** argv);
static void read_input_file(WorkQueue& work_queue);
static void create_output_dataset(const hepnos::DataStore& datastore);
static void process_hdf5_file(hepnos::DataSet& dataset, const std::string& filename, hepnos::WriteBatch& wb);

int main(int argc, char** argv) {
    
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &g_rank);
    MPI_Comm_size(MPI_COMM_WORLD, &g_size);

    std::stringstream str_format;
    str_format << "[" << std::setw(6) << std::setfill('0') << g_rank << "|" << g_size
               << "] [%H:%M:%S.%F] [%n] [%^%l%$] %v";
    spdlog::set_pattern(str_format.str());
    // Parse command line arguments
    parse_arguments(argc, argv);
    // Set logging level
    spdlog::set_level(g_logging_level);

    spdlog::debug("connection file: {}", g_connection_file);
    spdlog::debug("input file: {}", g_input_filename);
    spdlog::debug("output dataset: {}", g_output_dataset);
    spdlog::debug("use async: {}", g_use_async);
    spdlog::debug("async threads: {}", g_num_async_threads);
    spdlog::debug("use batching: {}", g_use_batching);
    spdlog::debug("batch size: {}", g_batch_size);
    spdlog::debug("product label: {}", g_product_label);

    // Initialize HEPnOS
    hepnos::DataStore datastore;
    try {
        spdlog::info("Connecting to HEPnOS using file {}", g_connection_file);
        datastore = hepnos::DataStore::connect(g_connection_file, g_use_async);
    } catch(const hepnos::Exception& ex) {
        spdlog::critical("Could not connect to HEPnOS service: {}", ex.what());
        MPI_Abort(MPI_COMM_WORLD, 1);
    }
    // Rank 0 create the input dataset if it does not exist
    if(g_rank == 0) {
        spdlog::info("Creating output dataset {}", g_output_dataset);
        create_output_dataset(datastore);
        spdlog::info("Done creating the output dataset");
    }
    MPI_Barrier(MPI_COMM_WORLD);
    // Get the dataset in which to write the data
    hepnos::DataSet dataset = datastore.root()[g_output_dataset];
    // We need a scope to prevent MPI_Finalize to be called before the destructor of WorkQueue
    {
        // Initialize the work queue
        spdlog::info("Initializing work queue");
        WorkQueue work_queue(MPI_COMM_WORLD);
        // Rank 0 read the list of files
        if(g_rank == 0) {
            spdlog::info("Reading input file list");
            read_input_file(work_queue);
            spdlog::info("Done reading input file list");
        }
        // Everyone marks the work queue as read-only from now on
        work_queue.readonly();
        // Initialize write batch
        hepnos::WriteBatch write_batch;
        hepnos::AsyncEngine async;
        if(g_use_batching) {
            spdlog::debug("Initializing WriteBatch");
            if(g_use_async) {
                spdlog::debug("WriteBatch will use an AsyncEngine with {} threads", g_num_async_threads);
                async = hepnos::AsyncEngine(datastore, g_num_async_threads);
                write_batch = hepnos::WriteBatch(async, g_batch_size);
            } else {
                spdlog::debug("WriteBatch will not use any AsyncEngine");
                write_batch = hepnos::WriteBatch(datastore, g_batch_size);
            }
        }
        write_batch.activateStatistics();
        // Process HDF5 files
        try {
            while(true) {
                std::string filename = work_queue.pull();
                process_hdf5_file(dataset, filename, write_batch);
            }
        } catch(WorkQueue::EmptyQueueException& ex) {}
        spdlog::info("Work completed!");
        spdlog::info("Waiting for WriteBatch to flush...");
        write_batch.flush();
        hepnos::WriteBatchStatistics stats;
        write_batch.collectStatistics(stats);
        spdlog::info("WriteBatch statistics: {}", stats);
    }
    spdlog::info("All done, exiting!");
    spdlog::info("Created {} events and {} products", g_total_events, g_total_products);
    MPI_Finalize();
}

static void parse_arguments(int argc, char** argv) {
    try {

        TCLAP::CmdLine cmd("Loads HDF5 files into HEPnOS", ' ', "0.1");
        TCLAP::ValueArg<std::string> clientFile("c", "connection", "YAML connection file for HEPnOS", true, "", "string");
        TCLAP::ValueArg<std::string> fileName("i", "input", "Input file containing list of HDF5 files", true, "", "string");
        TCLAP::ValueArg<std::string> dataSetName("o", "output", "DataSet in which to store the data", true, "", "string");
        TCLAP::SwitchArg useAsync("a", "async", "Use asynchronous operations", false);
        TCLAP::ValueArg<int> asyncThreads("t", "threads", "Number of threads for asynchronous operations", false, 1, "int");
        TCLAP::ValueArg<int> batchSize("b", "batchsize", "Batch size for operations", false, 0, "int");
        TCLAP::ValueArg<std::string> loggingLevel("v", "verbose", "Logging output type (info, debug, critical)", false, "info",
                                                  "trace,debug,info,warning,error,critical,off");
        TCLAP::ValueArg<std::string> productLabel("l", "label", "Label to use when storing products", true, "", "string");

        cmd.add(clientFile);
        cmd.add(fileName);
        cmd.add(dataSetName);
        cmd.add(useAsync);
        cmd.add(asyncThreads);
        cmd.add(batchSize);
        cmd.add(loggingLevel);
        cmd.add(productLabel);
        cmd.parse(argc, argv);

        g_connection_file   = clientFile.getValue();
        g_input_filename    = fileName.getValue();
        g_output_dataset    = dataSetName.getValue();
        g_use_async         = useAsync.getValue();
        g_num_async_threads = asyncThreads.getValue();
        g_batch_size        = batchSize.getValue();
        g_use_batching      = g_batch_size > 0;
        g_logging_level     = spdlog::level::from_str(loggingLevel.getValue());
        g_product_label     = productLabel.getValue();
    } catch(TCLAP::ArgException &e) {
        if(g_rank == 0) {
            spdlog::critical("{} for command-line argument {}", e.error(), e.argId());
            MPI_Abort(MPI_COMM_WORLD, 1);
        }
    } 
}

static void read_input_file(WorkQueue& work_queue) {
    std::ifstream infile(g_input_filename);
    if(!infile.good()) {
        spdlog::critical("Coulf not open file {}", g_input_filename);
        MPI_Abort(MPI_COMM_WORLD, 1);
    }
    std::string line;
    while(std::getline(infile, line)) {
        work_queue.push(line);
    }
}

static void create_output_dataset(const hepnos::DataStore& datastore) {
    std::vector<std::string> ds_names;
    std::stringstream ss(g_output_dataset);
    std::string token;
    while(std::getline(ss, token, '/')) {
        ds_names.push_back(token);
    }
    // create datasets
    hepnos::DataSet current = datastore.root();
    for(auto& ds_name : ds_names) {
        auto it = current.find(ds_name);
        if(it == current.end()) {
            current = current.createDataSet(ds_name);
        } else {
            current = *it;
        }
    }
}


template <typename T>
static void process_table(hepnos::SubRun& sr,
       std::unordered_map<hepnos::EventNumber,hepnos::Event>& createdEvents,
       hid_t hdf_file, hepnos::WriteBatch& wb)
{
    spdlog::debug("Processing table {}", hepnos::demangle<T>());
    std::vector<unsigned> runs;
    std::vector<unsigned> events;
    std::vector<unsigned> subruns;
    std::vector<T> table;

    spdlog::debug("Reading HDF5 file...");
    std::tie(runs, subruns, events, table) = T::from_hdf5(hdf_file);
    spdlog::debug("Done HDF5 reading file");

    auto batch_begin = events.cbegin();
    auto checkeve = [](uint64_t i, uint64_t j) { return (i != j); };
    auto batch_end = std::adjacent_find(batch_begin, events.cend(), checkeve);

    while (batch_begin != events.cend()) {
        if (batch_end != events.cend())
            batch_end = batch_end + 1;
        hepnos::Event ev;
        auto it = createdEvents.find(*batch_begin);
        if(it == createdEvents.end()) {
            ev = sr.createEvent(wb, *batch_begin);
            g_total_events += 1;
            createdEvents[*batch_begin] = ev;
        } else {
            ev = it->second;
        }
        size_t b_idx = batch_begin - events.cbegin();
        size_t e_idx = batch_end - events.cbegin();
        g_total_products += 1;
        ev.store(wb, g_product_label, table, b_idx, e_idx);
        batch_begin = batch_end;
        batch_end = std::adjacent_find(batch_begin, events.cend(), checkeve);
    }
    spdlog::debug("Done processing table {}", hepnos::demangle<T>());
}

static uint64_t parse_num_from_filename(const std::string& filename, const std::regex& r) {
    std::smatch match;
    if (std::regex_search(filename, match, r)) {
        std::string rs = match[0];
        return std::stoi(rs.erase(0, 2));
    }
    return -1;
}

static void process_hdf5_file(hepnos::DataSet& dataset,
        const std::string& filename, hepnos::WriteBatch& writeBatch) {

    spdlog::info("Starting file {}", filename);

    hid_t hdf_file = H5Fopen(filename.c_str(), H5F_ACC_RDONLY, H5P_DEFAULT);

    hepnos::RunNumber runNumber = parse_num_from_filename(filename, std::regex("(_r000)([0-9]{5})"));
    hepnos::SubRunNumber subrunNumber = parse_num_from_filename(filename, std::regex("(_s)([0-9]{2})"));
    spdlog::debug("Creating run {} and subrun {}", runNumber, subrunNumber);

    auto r = dataset.createRun(runNumber);
    auto sr = r.createSubRun(subrunNumber);

    std::unordered_map<hepnos::EventNumber,hepnos::Event> createdEvents;

    spdlog::debug("Done creating/accessing run/subrun");

    process_table<hep::rec_hdr>(sr, createdEvents, hdf_file, writeBatch);
    process_table<hep::rec_slc>(sr, createdEvents, hdf_file, writeBatch);
    process_table<hep::rec_vtx>(sr, createdEvents, hdf_file, writeBatch);
    process_table<hep::rec_vtx_elastic_fuzzyk>(sr, createdEvents, hdf_file, writeBatch);
    process_table<hep::rec_vtx_elastic_fuzzyk_png>(sr, createdEvents, hdf_file, writeBatch);
    process_table<hep::rec_vtx_elastic_fuzzyk_png_shwlid>(sr, createdEvents, hdf_file, writeBatch);
    process_table<hep::rec_vtx_elastic_fuzzyk_png_cvnpart>(sr, createdEvents, hdf_file, writeBatch);
    process_table<hep::rec_sel_contain>(sr, createdEvents, hdf_file, writeBatch);
    process_table<hep::rec_sel_cvn2017>(sr, createdEvents, hdf_file, writeBatch);
    process_table<hep::rec_sel_cvnProd3Train>(sr, createdEvents, hdf_file, writeBatch);
    process_table<hep::rec_sel_remid>(sr, createdEvents, hdf_file, writeBatch);
    process_table<hep::rec_spill>(sr, createdEvents, hdf_file, writeBatch);
    process_table<hep::rec_trk_cosmic>(sr, createdEvents, hdf_file, writeBatch);
    process_table<hep::rec_trk_kalman>(sr, createdEvents, hdf_file, writeBatch);
    process_table<hep::rec_trk_kalman_tracks>(sr, createdEvents, hdf_file, writeBatch);
    process_table<hep::rec_energy_numu>(sr, createdEvents, hdf_file, writeBatch);

    if(!g_use_async) {
        spdlog::info("Flushing data from WriteBatch...");
        writeBatch.flush();
        spdlog::info("Done flushing");
    }

    H5Fclose(hdf_file);
    spdlog::info("Done with file {}", filename);
}

