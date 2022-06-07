#include <mpi.h>
#include <iostream>
#include <sstream>
#include <regex>
#include <fstream>
#include <string>
#include <unordered_map>
#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>
#include <tclap/CmdLine.h>
#include <hepnos.hpp>

#define HEPNOS_ENABLE_HDF5
#ifdef ONLY_TEST_CLASSES
#include "_test_.hpp"
#include "_test_macro_.hpp"
#else
#include "hepnos-nova-classes/_all_.hpp"
#include "hepnos-nova-classes/_macro_.hpp"
#endif

#include "WorkQueue.hpp"

static int         g_rank;              // Rank of this process
static int         g_size;              // Size of MPI_COMM_WORKD
static std::string g_connection_file;   // Name of HEPnOS YAML client file
static std::string g_protocol;          // Protocol to use for Mercury
static std::string g_margo_file;        // Margo config file
static std::string g_input_filename;    // Input file name
static std::string g_output_dataset;    // Output HEPnOS dataset
static bool        g_use_async;         // Whether to use an AsyncEngine
static int         g_num_async_threads; // How many threads for the AsyncEngine
static bool        g_use_batching;      // Whether to use batching
static size_t      g_batch_size;        // Batch size
static std::string g_product_label;     // Product label
static bool        g_simulate;          // Simulate output
static spdlog::level::level_enum g_logging_level; // Logging level
static std::vector<std::string>  g_product_names; // Product names
static int         g_timeout;           // Timeout
static hepnos::RunNumber g_run_offset;  // Offset to add to all event numbers when storing

static uint64_t g_total_events = 0;
static uint64_t g_total_products = 0;

static std::unordered_map<std::string,
    std::function<void(hepnos::SubRun&,
                       std::unordered_map<hepnos::EventNumber,hepnos::Event>&,
                       hid_t, hepnos::WriteBatch&)>
    > g_load_product_fn;
static void process_table(hepnos::SubRun& sr,
       std::unordered_map<hepnos::EventNumber,hepnos::Event>& createdEvents,
       hid_t hdf_file, hepnos::WriteBatch& wb);

static void parse_arguments(int argc, char** argv);
static int read_input_file(WorkQueue& work_queue);
static void create_output_dataset(const hepnos::DataStore& datastore);
static void process_hdf5_file(hepnos::DataSet& dataset, const std::string& filename, hepnos::WriteBatch& wb);
static void prepare_product_loading_functions();


int main(int argc, char** argv) {

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &g_rank);
    MPI_Comm_size(MPI_COMM_WORLD, &g_size);

    int num_files_processed = 0;
    int total_files_processed = 0;
    int total_files = 0;
    std::stringstream str_format;
    str_format << "[" << std::setw(6) << std::setfill('0') << g_rank << "|" << g_size
               << "] [%H:%M:%S.%F] [%n] [%^%l%$] %v";
    spdlog::set_pattern(str_format.str());
    // Parse command line arguments
    parse_arguments(argc, argv);
    // Set logging level
    spdlog::set_level(g_logging_level);

    spdlog::debug("protocol: {}", g_protocol);
    spdlog::debug("connection file: {}", g_connection_file);
    spdlog::debug("margo config file: {}", g_margo_file);
    spdlog::debug("input file: {}", g_input_filename);
    spdlog::debug("output dataset: {}", g_output_dataset);
    spdlog::debug("use async: {}", g_use_async);
    spdlog::debug("async threads: {}", g_num_async_threads);
    spdlog::debug("use batching: {}", g_use_batching);
    spdlog::debug("batch size: {}", g_batch_size);
    spdlog::debug("product label: {}", g_product_label);
    spdlog::debug("run offset: {}", g_run_offset);

    prepare_product_loading_functions();

    if(g_rank == 0) {
        for(auto& p : g_product_names) {
            if(g_load_product_fn.count(p) == 0) {
                spdlog::critical("Unknown product name {}", p);
                MPI_Abort(MPI_COMM_WORLD, -1);
                exit(-1);
            }
        }
    }
    MPI_Barrier(MPI_COMM_WORLD);

    // Initialize HEPnOS
    hepnos::DataStore datastore;
    try {
        spdlog::info("Connecting to HEPnOS using file {}", g_connection_file);
        datastore = hepnos::DataStore::connect(g_protocol, g_connection_file, g_margo_file);
    } catch(const hepnos::Exception& ex) {
        spdlog::critical("Could not connect to HEPnOS service: {}", ex.what());
        MPI_Abort(MPI_COMM_WORLD, 1);
    }
    // Rank 0 create the input dataset if it does not exist
    if(g_rank == 0 && not g_simulate) {
        spdlog::info("Creating output dataset {}", g_output_dataset);
        create_output_dataset(datastore);
        spdlog::info("Done creating the output dataset");
    }
    MPI_Barrier(MPI_COMM_WORLD);
    // Get the dataset in which to write the data
    hepnos::DataSet dataset;
    if(not g_simulate) dataset = datastore.root()[g_output_dataset];
    // We need a scope to prevent MPI_Finalize to be called before the destructor of WorkQueue
    double start_time = MPI_Wtime();
    {
        // Initialize the work queue
        spdlog::info("Initializing work queue");
        WorkQueue work_queue(MPI_COMM_WORLD);
        spdlog::debug("Queue initialized");
        // Rank 0 read the list of files
        if(g_rank == 0) {
            spdlog::info("Reading input file list");
            total_files = read_input_file(work_queue);
            spdlog::info("Done reading input file list");
        }
        // Everyone marks the work queue as read-only from now on
        work_queue.readonly();
        MPI_Barrier(MPI_COMM_WORLD);
        // Initialize write batch
        hepnos::WriteBatch write_batch;
        hepnos::AsyncEngine async;
        if(g_use_batching && not g_simulate) {
            spdlog::debug("Initializing WriteBatch");
            if(g_use_async) {
                spdlog::debug("WriteBatch will use an AsyncEngine with {} threads", g_num_async_threads);
                async = hepnos::AsyncEngine(datastore, g_num_async_threads);
                write_batch = hepnos::WriteBatch(async, g_batch_size);
            } else {
                spdlog::debug("WriteBatch will not use any AsyncEngine");
                write_batch = hepnos::WriteBatch(datastore, g_batch_size);
            }
            write_batch.activateStatistics();
        }
        // Process HDF5 files
        try {
            while(true) {
                double t = MPI_Wtime();
                if(g_timeout > 0 && (t - start_time) > g_timeout)
                    work_queue.clear();
                std::string filename = work_queue.pull();
                process_hdf5_file(dataset, filename, write_batch);
                num_files_processed += 1;
            }
        } catch(WorkQueue::EmptyQueueException& ex) {}
        spdlog::info("Work completed!");
        if(not g_simulate) {
            spdlog::info("Waiting for WriteBatch to flush...");
            write_batch.flush();
            hepnos::WriteBatchStatistics stats;
            write_batch.collectStatistics(stats);
            spdlog::info("WriteBatch statistics: {}", stats);
        }
    }
    double end_time = MPI_Wtime();
    MPI_Reduce(&num_files_processed, &total_files_processed, 1, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);
    spdlog::info("All done, exiting!");
    spdlog::info("Created {} events and {} products", g_total_events, g_total_products);
    if(g_rank == 0) {
        std::cout << "TIME: " << (end_time-start_time) << " FILES: " << total_files_processed << "/" << total_files << std::endl;
        std::cout << "ESTIMATED TOTAL TIME: " << (end_time-start_time)*total_files/(double)total_files_processed << std::endl;
    }
    MPI_Finalize();
}

static void parse_arguments(int argc, char** argv) {
    try {

        TCLAP::CmdLine cmd("Loads HDF5 files into HEPnOS", ' ', "0.5");
        TCLAP::ValueArg<std::string> protocol("p","protocol", "Mercury protocol", true, "", "string");
        TCLAP::ValueArg<std::string> clientFile("c", "connection", "JSON connection file for HEPnOS", true, "", "string");
        TCLAP::ValueArg<std::string> margoFile("m", "margo-config", "JSON configuration for margo", false, "", "string");
        TCLAP::ValueArg<std::string> fileName("i", "input", "Input file containing list of HDF5 files", true, "", "string");
        TCLAP::ValueArg<std::string> dataSetName("o", "output", "DataSet in which to store the data", true, "", "string");
        TCLAP::SwitchArg useAsync("a", "async", "Use asynchronous operations", false);
        TCLAP::ValueArg<int> asyncThreads("t", "threads", "Number of threads for asynchronous operations", false, 1, "int");
        TCLAP::ValueArg<int> batchSize("b", "batchsize", "Batch size for operations", false, 0, "int");
        TCLAP::ValueArg<std::string> loggingLevel("v", "verbose", "Logging output type (info, debug, critical)", false, "info",
                                                  "trace,debug,info,warning,error,critical,off");
        TCLAP::ValueArg<std::string> productLabel("l", "label", "Label to use when storing products", true, "", "string");
        TCLAP::SwitchArg simulate("s", "simulate", "Only read HDF5 files, simulate writes", false);
        TCLAP::MultiArg<std::string> productNames("n", "product-names",
            "Name of the products to load", false, "string");
        TCLAP::ValueArg<int> timeout("", "timeout", "Run for only the specified time (sec)", false, -1, "int");
        TCLAP::ValueArg<hepnos::RunNumber> runOffset("", "run-offset", "Add this offset to run numbers", false, 0, "int");

        cmd.add(protocol);
        cmd.add(clientFile);
        cmd.add(margoFile);
        cmd.add(fileName);
        cmd.add(dataSetName);
        cmd.add(useAsync);
        cmd.add(asyncThreads);
        cmd.add(batchSize);
        cmd.add(loggingLevel);
        cmd.add(productLabel);
        cmd.add(simulate);
        cmd.add(productNames);
        cmd.add(timeout);
        cmd.add(runOffset);
        cmd.parse(argc, argv);

        g_protocol          = protocol.getValue();
        g_connection_file   = clientFile.getValue();
        g_margo_file        = margoFile.getValue();
        g_input_filename    = fileName.getValue();
        g_output_dataset    = dataSetName.getValue();
        g_use_async         = useAsync.getValue();
        g_num_async_threads = asyncThreads.getValue();
        g_batch_size        = batchSize.getValue();
        g_use_batching      = g_batch_size > 0;
        g_logging_level     = spdlog::level::from_str(loggingLevel.getValue());
        g_product_label     = productLabel.getValue();
        g_simulate          = simulate.getValue();
        g_product_names     = productNames.getValue();
        g_timeout           = timeout.getValue();
        g_run_offset        = runOffset.getValue();

    } catch(TCLAP::ArgException &e) {
        if(g_rank == 0) {
            spdlog::critical("{} for command-line argument {}", e.error(), e.argId());
            MPI_Abort(MPI_COMM_WORLD, 1);
        }
    }
}

static int read_input_file(WorkQueue& work_queue) {
    std::ifstream infile(g_input_filename);
    if(!infile.good()) {
        spdlog::critical("Coulf not open file {}", g_input_filename);
        MPI_Abort(MPI_COMM_WORLD, 1);
    }
    int num_files = 0;
    std::string line;
    while(std::getline(infile, line)) {
        work_queue.push(line);
        num_files += 1;
    }
    return num_files;
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
    std::vector<unsigned> events;
    std::vector<unsigned> subruns;
    std::vector<T> table;

    spdlog::debug("Reading HDF5 file...");
    std::tie(std::ignore, subruns, events, table) = T::from_hdf5(hdf_file);
    spdlog::debug("Done HDF5 reading file");

    auto batch_begin = events.cbegin();
    auto checkeve = [](uint64_t i, uint64_t j) { return (i != j); };
    auto batch_end = std::adjacent_find(batch_begin, events.cend(), checkeve);

    size_t subrun_events = 0;

    while (batch_begin != events.cend()) {
        if (batch_end != events.cend())
            batch_end = batch_end + 1;
        hepnos::Event ev;
        if(not g_simulate) {
            auto it = createdEvents.find(*batch_begin);
            if(it == createdEvents.end()) {
                ev = sr.createEvent(wb, *batch_begin);
                g_total_events += 1;
                subrun_events += 1;
                createdEvents[*batch_begin] = ev;
            } else {
                ev = it->second;
            }
        }
        size_t b_idx = batch_begin - events.cbegin();
        size_t e_idx = batch_end - events.cbegin();
        g_total_products += 1;
        if(not g_simulate)
            ev.store(wb, g_product_label, table, b_idx, e_idx);
        batch_begin = batch_end;
        batch_end = std::adjacent_find(batch_begin, events.cend(), checkeve);
    }
    spdlog::debug("Done processing table {}", hepnos::demangle<T>());
    spdlog::debug("Created {} new events in subrun {}, run {}", subrun_events, sr.number(), sr.run().number());
}

static uint64_t parse_num_from_filename(const std::string& filename, const std::regex& r) {
    std::smatch match;
    if (std::regex_search(filename, match, r)) {
        std::string rs = match[0];
        return std::stoi(rs.erase(0, 2));
    }
    return -1;
}

static void prepare_product_loading_functions() {
    spdlog::trace("Preparing functions for loading producs");
#define X(__class__) \
    g_load_product_fn[#__class__] = &process_table<__class__>;
    HEPNOS_FOREACH_NOVA_CLASS
#undef X
    spdlog::trace("Created functions for {} product types", g_load_product_fn.size());
}

static void process_hdf5_file(hepnos::DataSet& dataset,
        const std::string& filename, hepnos::WriteBatch& writeBatch) {

    spdlog::info("Starting file {}", filename);

    hid_t hdf_file = H5Fopen(filename.c_str(), H5F_ACC_RDONLY, H5P_DEFAULT);

    hepnos::RunNumber runNumber = parse_num_from_filename(filename, std::regex("(_r000)([0-9]{5})"));
    runNumber += g_run_offset;
    hepnos::SubRunNumber subrunNumber = parse_num_from_filename(filename, std::regex("(_s)([0-9]{2})"));
    spdlog::debug("Creating run {} and subrun {}", runNumber, subrunNumber);

    hepnos::Run r;
    hepnos::SubRun sr;

    if(not g_simulate) {
        r = dataset.createRun(runNumber);
        sr = r.createSubRun(subrunNumber);
    }

    std::unordered_map<hepnos::EventNumber,hepnos::Event> createdEvents;

    spdlog::debug("Done creating/accessing run/subrun");
    spdlog::debug("Created {} events in run {} subrun {}",
                  createdEvents.size(), runNumber, subrunNumber);

    for(auto& product_name : g_product_names) {
        g_load_product_fn[product_name](sr, createdEvents, hdf_file, writeBatch);
    }

#if 0
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
#endif

    if((not g_simulate) && (not g_use_async)) {
        spdlog::info("Flushing data from WriteBatch...");
        writeBatch.flush();
        spdlog::info("Done flushing");
    }

    H5Fclose(hdf_file);
    spdlog::info("Done with file {}", filename);
}

