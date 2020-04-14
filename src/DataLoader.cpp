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
static bool        g_batch_size;        // Batch size
static spdlog::level::level_enum g_logging_level; // Logging level

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
    // Initialize HEPnOS
    hepnos::DataStore datastore;
    try {
        datastore = hepnos::DataStore::connect(g_connection_file, g_use_async);
    } catch(const hepnos::Exception& ex) {
        spdlog::critical("Could not connect to HEPnOS service: {}", ex.what());
        MPI_Abort(MPI_COMM_WORLD, 1);
    }
    // Rank 0 create the input dataset if it does not exist
    if(g_rank == 0) {
        create_output_dataset(datastore);
    }
    MPI_Barrier(MPI_COMM_WORLD);
    // Get the dataset in which to write the data
    hepnos::DataSet dataset = datastore.root()[g_output_dataset];
    // We need a scope to prevent MPI_Finalize to be called before the destructor of WorkQueue
    {
        // Initialize the work queue
        WorkQueue work_queue(MPI_COMM_WORLD);
        // Rank 0 read the list of files
        if(g_rank == 0) {
            read_input_file(work_queue);
        }
        // Everyone marks the work queue as read-only from now on
        work_queue.readonly();
        // Initialize write batch
        hepnos::WriteBatch write_batch;
        if(g_use_batching) {
            if(g_use_async) {
                auto async = hepnos::AsyncEngine(datastore, g_num_async_threads);
                write_batch = hepnos::WriteBatch(async, g_batch_size);
            } else {
                write_batch = hepnos::WriteBatch(datastore, g_batch_size);
            }
        }
        write_batch.activateStatistics();
        // Process HDF5 files
        try {
            while(true) {
                std::string filename = work_queue.pull();
                spdlog::info("Processing file {}", filename);
                process_hdf5_file(dataset, filename, write_batch);
            }
        } catch(WorkQueue::EmptyQueueException& ex) {}
        spdlog::info("Work completed!");
        hepnos::WriteBatchStatistics stats;
        write_batch.collectStatistics(stats);
        spdlog::info("WriteBatch statistics: {}", stats);
    }
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
        TCLAP::ValueArg<std::string> loggingLevel("l", "logging", "Logging output type (info, debug, critical)", false, "info",
                                                  "trace,debug,info,warning,error,critical,off");

        cmd.add(clientFile);
        cmd.add(fileName);
        cmd.add(dataSetName);
        cmd.add(useAsync);
        cmd.add(asyncThreads);
        cmd.add(batchSize);
        cmd.add(loggingLevel);
        cmd.parse(argc, argv);

        g_input_filename    = fileName.getValue();
        g_output_dataset    = dataSetName.getValue();
        g_use_async         = useAsync.getValue();
        g_num_async_threads = asyncThreads.getValue();
        g_batch_size        = batchSize.getValue();
        g_use_batching      = g_batch_size > 0;
        g_logging_level     = spdlog::level::from_str(loggingLevel.getValue());

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
static void process_table(hepnos::SubRun& sr, hid_t hdf_file, hepnos::WriteBatch& wb)
{
    std::vector<unsigned> runs;
    std::vector<unsigned> events;
    std::vector<unsigned> subruns;
    std::vector<T> table;

    std::tie(runs, subruns, events, table) = T::from_hdf5(hdf_file);

    auto batch_begin = events.cbegin();
    auto checkeve = [](uint64_t i, uint64_t j) { return (i != j); };
    auto batch_end = std::adjacent_find(batch_begin, events.cend(), checkeve);

    while (batch_begin != events.cend()) {
        if (batch_end != events.cend())
            batch_end = batch_end + 1;
        auto ev = sr.createEvent(wb, *batch_begin);
        size_t b_idx = batch_begin - events.cbegin();
        size_t e_idx = batch_end - events.cbegin();
        ev.store(wb, "a", table, b_idx, e_idx);
        batch_begin = batch_end;
        batch_end = std::adjacent_find(batch_begin, events.cend(), checkeve);
    }
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

    hid_t hdf_file = H5Fopen(filename.c_str(), H5F_ACC_RDONLY, H5P_DEFAULT);
    auto r = dataset.createRun(parse_num_from_filename(filename, std::regex("(_r000)([0-9]{5})")));
    auto sr = r.createSubRun(parse_num_from_filename(filename, std::regex("(_s)([0-9]{2})")));

    process_table<hep::rec_hdr>(sr, hdf_file, writeBatch);
    process_table<hep::rec_slc>(sr, hdf_file, writeBatch);
    process_table<hep::rec_vtx>(sr, hdf_file, writeBatch);
    process_table<hep::rec_vtx_elastic_fuzzyk>(sr, hdf_file, writeBatch);
    process_table<hep::rec_vtx_elastic_fuzzyk_png>(sr, hdf_file, writeBatch);
    process_table<hep::rec_vtx_elastic_fuzzyk_png_shwlid>(sr, hdf_file, writeBatch);
    process_table<hep::rec_vtx_elastic_fuzzyk_png_cvnpart>(sr, hdf_file, writeBatch);
    process_table<hep::rec_sel_contain>(sr, hdf_file, writeBatch);
    process_table<hep::rec_sel_cvn2017>(sr, hdf_file, writeBatch);
    process_table<hep::rec_sel_cvnProd3Train>(sr, hdf_file, writeBatch);
    process_table<hep::rec_sel_remid>(sr, hdf_file, writeBatch);
    process_table<hep::rec_spill>(sr, hdf_file, writeBatch);
    process_table<hep::rec_trk_cosmic>(sr, hdf_file, writeBatch);
    process_table<hep::rec_trk_kalman>(sr, hdf_file, writeBatch);
    process_table<hep::rec_trk_kalman_tracks>(sr, hdf_file, writeBatch);
    process_table<hep::rec_energy_numu>(sr, hdf_file, writeBatch);

    if(!g_use_async) {
        writeBatch.flush();
    }

    H5Fclose(hdf_file);
}

