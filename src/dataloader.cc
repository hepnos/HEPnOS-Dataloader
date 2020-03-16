#include <algorithm>
#include <array>
#include <cassert>
#include <cmath>
#include <functional>
#include <iostream>
#include <memory>
#include <numeric>
#include <ostream>
#include <random>
#include <regex>
#include <stdexcept>
#include <typeinfo>
#include <vector>

#include <diy/assigner.hpp>
#include <diy/decomposition.hpp>
#include <diy/fmt/format.h>
#include <diy/master.hpp>
#include <diy/mpi.hpp>
#include <diy/partners/merge.hpp>
#include <diy/reduce.hpp>
#include <diy/serialization.hpp>

#include <hepnos/DataSet.hpp>
#include <hepnos/DataStore.hpp>
#include <hepnos/Event.hpp>
#include <hepnos/Run.hpp>
#include <hepnos/RunSet.hpp>
#include <hepnos/SubRun.hpp>
#include <hepnos/AsyncEngine.hpp>
#include <hepnos/WriteBatch.hpp>

#include "ConfigBlockAdder.hpp"
#include "DataLoaderConfig.hpp"
#include "GenericBlock.hpp"
#include "split_configs.hpp"

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

using namespace std;

template <typename T>
void process_table(hepnos::SubRun& sr, hid_t hdf_file, hepnos::WriteBatch& wb, std::ostream* debugfile);

template <size_t N>
std::array<char, N> string_to_array(std::string s);
/*
   Templates that handle standard boilerplate code are needed for:
   1) blocks
   2) management of master, assigner, and decomposer
   3) reduction operation
   4) perhaps defining custom data types to be sent around
   5) helpers for the "foreach" processing
   */

typedef diy::DiscreteBounds Bounds;
typedef diy::RegularGridLink Link;

using DataLoaderConfigs = std::vector<DataLoaderConfig>;

// Create a configuration object for each block that will do work.
DataLoaderConfigs calculate_block_configs(std::string const& filelist)
{
    ifstream filenames(filelist);
    if (!filenames) {
        throw std::runtime_error(
                fmt::format("Unable to open file: {}\n", filelist));
    }
    DataLoaderConfigs dl_cfgs;
    for (istream_iterator<string> it(filenames); it != istream_iterator<string>();
            ++it) {
        std::array<char, 128> a = string_to_array<128>(*it);
        dl_cfgs.push_back(DataLoaderConfig{a});
    }
    return dl_cfgs;
};

// ----This is common to all introduced types - can it be automated? ------
struct dummy {
};
using Block = GenericBlock<Bounds, DataLoaderConfig, dummy>;
using AddBlock = ConfigBlockAdder<Bounds, Link, Block, DataLoaderConfigs>;

// Extract run number or subrun number from a given file name
std::uint64_t getNum(std::string fname, std::regex r)
{
    std::smatch match;
    if (std::regex_search(fname, match, r)) {
        std::string rs = match[0];
        return std::stoi(rs.erase(0, 2));
    }
    return -1;
}

template <typename T>
void process_table(hepnos::SubRun& sr, hid_t hdf_file, hepnos::WriteBatch& wb, std::ostream* debugfile)
{
    std::cerr << "Processing subrun for type " << typeid(T).name() << std::endl;
    std::vector<unsigned> runs;
    std::vector<unsigned> events;
    std::vector<unsigned> subruns;
    std::vector<T> table;

    std::cerr << "Reading from HDF5 file... ";
    std::tie(runs, subruns, events, table) = T::from_hdf5(hdf_file);
    std::cerr << "done" << std::endl;

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
    std::cerr << "Done processing subrun for type " << typeid(T).name() << std::endl;
}

template <size_t N> std::array<char, N> string_to_array(std::string str)
{
    if (str.size() > N) {
        throw std::runtime_error(fmt::format("Filename too long: {}\n", str));
    }
    size_t i = 0ULL;
    std::array<char, N> arr;
    for (auto const s : str) {
        arr[i] = s;
        ++i;
    }
    arr[i] = '\0';
    return arr;
}

void work(int argc, char* argv[])
{
    diy::mpi::environment env(argc, argv);
    diy::mpi::communicator world;

    // Parse arguments:
    if (argc < 3) {
        throw std::runtime_error(
                "Please specify a HEPnOS configuration file and the name of "
                "the input file that contains full names of the HDF5 files to "
                "process\n");
    }
    std::string const hepnos_config = argv[1];
    std::string const input_file = argv[2];

    std::unique_ptr<std::ostream> debugfile;
    if (argc == 4) {
        debugfile = std::make_unique<std::ofstream>(fmt::format("debug_{}.out", world.rank()).c_str());
    }

    // mem_blocks = -1 indicates that all blocks are in memory.
    int const mem_blocks = -1;
    int const threads = 1; // we use only one thread per rank
    int const dim = 1;

    DataLoaderConfigs block_configurations;
    if (world.rank() == 0) {
        block_configurations = calculate_block_configs(input_file);
    }
    diy::mpi::broadcast(world, block_configurations, 0);

    // print the block configs each rank received
    //
    if (world.rank() == 0) {
        std::cerr << "We will read the following files.\n";
        for (auto blk : block_configurations) {
            std::cerr << blk.filename.begin() << '\n';
        }
    }
    // -------- above this point is all initialization custom for this application
    // Determine [my_start, my_end), which is the range of block configurations to
    // be created by the current rank.
    size_t const total_num_blocks = block_configurations.size();
    std::vector<DataLoaderConfig>::const_iterator my_start, my_end;
    std::tie(my_start, my_end) = split_configs<DataLoaderConfigs>(block_configurations, world.rank(), world.size());

    if (debugfile) *debugfile << "Num blocks to process: " << my_end - my_start << "\n";
    if (debugfile) {
        for (auto i = my_start; i != my_end; ++i) *debugfile << "'" << *i << "'\n"; 
        *debugfile << block_configurations[0] << std::endl;
    }

    // ----- starting here is a lot of standard boilerplate code for this kind of
    //       application.

    // diy initialization
    diy::FileStorage storage("./DIY.XXXXXX"); // used for blocks moved out of core
    diy::Master master(world, // master is the top-level diy object
            threads,
            mem_blocks,
            &Block::create,
            &Block::destroy,
            &storage,
            &Block::save,
            &Block::load);

    // an object for adding new blocks to master
    AddBlock create_blocks_for_this_rank(master, my_start, my_end, &world, debugfile.get());
    //  -------

    // Our use of Bounds is terribly stunted. We seem only to beed a
    // single domain, for the full set of configurtions to be used.
    Bounds domain{1};
    domain.min[0] = 0;
    domain.max[0] = block_configurations.size();


    diy::ContiguousAssigner assigner(world.size(), total_num_blocks);

    // decompose the domain into blocks
    // This is a DIY regular way to assign neighbors. You can do this manually.
    diy::RegularDecomposer<Bounds> decomposer(dim, domain, total_num_blocks);
    decomposer.decompose(world.rank(), assigner, create_blocks_for_this_rank);

    hepnos::DataStore datastore = hepnos::DataStore::connect(hepnos_config, true);
    hepnos::DataSet root = datastore.root();

    { // scope to wait for AsyncEngine and WriteBatch to flush their data
        hepnos::AsyncEngine asyncEngine(datastore, 1);
        hepnos::WriteBatch writeBatch(datastore, 100); // asyncEngine, 100);

        if (debugfile) *debugfile << "Created data store" << std::endl;
        if (world.rank() == 0) {
            root.createDataSet("NOvA");
        }
        world.barrier();
        hepnos::DataSet dataset = root["NOvA"];

        if (debugfile) *debugfile << "Created data set " << dataset.name() << std::endl;
        // ----------- below is the processing for this application
        // threads active here
        auto execute_block =
            [&world, &datastore, &dataset, &writeBatch, &debugfile](Block* b, const diy::Master::ProxyWithLink& cp) {

                if (debugfile) {
                    *debugfile << "block processing for block at: " << b
                        << " with configuration: " << b->configuration().filename.begin()
                        << '\n';
                }
                std::string fname(b->configuration().filename.data());
                std::cerr << "Opening HDF5 file " << fname << std::endl;
                hid_t hdf_file = H5Fopen(fname.c_str(), H5F_ACC_RDONLY, H5P_DEFAULT);
                auto r = dataset.createRun(getNum(fname, std::regex("(_r000)([0-9]{5})")));
                auto sr = r.createSubRun(getNum(fname, std::regex("(_s)([0-9]{2})")));
                std::cerr << "Created run " << r.number() << " subrun " << sr.number() << std::endl;

                process_table<hep::rec_hdr>(sr, hdf_file, writeBatch, debugfile.get());
                process_table<hep::rec_slc>(sr, hdf_file, writeBatch, debugfile.get());
                process_table<hep::rec_vtx>(sr, hdf_file, writeBatch, debugfile.get());
                process_table<hep::rec_vtx_elastic_fuzzyk>(sr, hdf_file, writeBatch, debugfile.get());
                process_table<hep::rec_vtx_elastic_fuzzyk_png>(sr, hdf_file, writeBatch, debugfile.get());
                process_table<hep::rec_vtx_elastic_fuzzyk_png_shwlid>(sr, hdf_file, writeBatch, debugfile.get());
                process_table<hep::rec_vtx_elastic_fuzzyk_png_cvnpart>(sr, hdf_file, writeBatch, debugfile.get());
                process_table<hep::rec_sel_contain>(sr, hdf_file, writeBatch, debugfile.get());
                process_table<hep::rec_sel_cvn2017>(sr, hdf_file, writeBatch, debugfile.get());
                process_table<hep::rec_sel_cvnProd3Train>(sr, hdf_file, writeBatch, debugfile.get());
                process_table<hep::rec_sel_remid>(sr, hdf_file, writeBatch, debugfile.get());
                process_table<hep::rec_spill>(sr, hdf_file, writeBatch, debugfile.get());
                process_table<hep::rec_trk_cosmic>(sr, hdf_file, writeBatch, debugfile.get());
                process_table<hep::rec_trk_kalman>(sr, hdf_file, writeBatch, debugfile.get());
                process_table<hep::rec_trk_kalman_tracks>(sr, hdf_file, writeBatch, debugfile.get());
                process_table<hep::rec_energy_numu>(sr, hdf_file, writeBatch, debugfile.get());

                H5Fclose(hdf_file);

            };
        master.foreach (execute_block);
    }
}

    int
main(int argc, char* argv[])
{
    try {
        work(argc, argv);
    }
    catch (hepnos::Exception const& e) {
        cerr << e.what() << '\n';
        return 1;
    }
    catch (std::exception const& e) {
        cerr << e.what() << '\n';
        return 2;
    }
    catch (...) {
        cerr << "Unknown exception\n";
        return 3;
    }
}
