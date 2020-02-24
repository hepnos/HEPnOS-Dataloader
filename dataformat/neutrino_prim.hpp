/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __NEUTRINO_PRIM_HPP_
#define __NEUTRINO_PRIM_HPP_

#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated neutrino_prim structure for the 
 * "/neutrino.prim" table in corresponding HDF5 files.
 */
struct neutrino_prim {

    std::int32_t cycle; /* cycle column */
    float daughterVisE; /* daughterVisE column */
    float daughterVisEBirks; /* daughterVisEBirks column */
    float daughterVisEinslc; /* daughterVisEinslc column */
    float daughterVisEinslcBirks; /* daughterVisEinslcBirks column */
    float enteringE; /* enteringE column */
    std::uint32_t neutrino_prim_idx; /* neutrino.prim_idx column */
    float p_E; /* p.E column */
    float p_px; /* p.px column */
    float p_py; /* p.py column */
    float p_pz; /* p.pz column */
    std::int32_t pdg; /* pdg column */
    float time; /* time column */
    float totEscE; /* totEscE column */
    std::int32_t trkID; /* trkID column */
    float visE; /* visE column */
    float visEBirks; /* visEBirks column */
    float visEinslc; /* visEinslc column */
    float visEinslcBirks; /* visEinslcBirks column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & cycle;
        ar & daughterVisE;
        ar & daughterVisEBirks;
        ar & daughterVisEinslc;
        ar & daughterVisEinslcBirks;
        ar & enteringE;
        ar & neutrino_prim_idx;
        ar & p_E;
        ar & p_px;
        ar & p_py;
        ar & p_pz;
        ar & pdg;
        ar & time;
        ar & totEscE;
        ar & trkID;
        ar & visE;
        ar & visEBirks;
        ar & visEinslc;
        ar & visEinslcBirks;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const neutrino_prim& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        neutrino_prim current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/neutrino.prim/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_daughterVisE; /* daughterVisE column */
        dataset = H5Dopen(file, "/neutrino.prim/daughterVisE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_daughterVisE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_daughterVisE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_daughterVisEBirks; /* daughterVisEBirks column */
        dataset = H5Dopen(file, "/neutrino.prim/daughterVisEBirks", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_daughterVisEBirks.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_daughterVisEBirks.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_daughterVisEinslc; /* daughterVisEinslc column */
        dataset = H5Dopen(file, "/neutrino.prim/daughterVisEinslc", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_daughterVisEinslc.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_daughterVisEinslc.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_daughterVisEinslcBirks; /* daughterVisEinslcBirks column */
        dataset = H5Dopen(file, "/neutrino.prim/daughterVisEinslcBirks", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_daughterVisEinslcBirks.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_daughterVisEinslcBirks.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_enteringE; /* enteringE column */
        dataset = H5Dopen(file, "/neutrino.prim/enteringE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_enteringE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_enteringE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_neutrino_prim_idx; /* neutrino.prim_idx column */
        dataset = H5Dopen(file, "/neutrino.prim/neutrino.prim_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_neutrino_prim_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_neutrino_prim_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p_E; /* p.E column */
        dataset = H5Dopen(file, "/neutrino.prim/p.E", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p_E.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p_E.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p_px; /* p.px column */
        dataset = H5Dopen(file, "/neutrino.prim/p.px", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p_px.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p_px.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p_py; /* p.py column */
        dataset = H5Dopen(file, "/neutrino.prim/p.py", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p_py.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p_py.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p_pz; /* p.pz column */
        dataset = H5Dopen(file, "/neutrino.prim/p.pz", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p_pz.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p_pz.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_pdg; /* pdg column */
        dataset = H5Dopen(file, "/neutrino.prim/pdg", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pdg.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pdg.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_time; /* time column */
        dataset = H5Dopen(file, "/neutrino.prim/time", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_time.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_time.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_totEscE; /* totEscE column */
        dataset = H5Dopen(file, "/neutrino.prim/totEscE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_totEscE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_totEscE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_trkID; /* trkID column */
        dataset = H5Dopen(file, "/neutrino.prim/trkID", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkID.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkID.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_visE; /* visE column */
        dataset = H5Dopen(file, "/neutrino.prim/visE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_visE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_visE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_visEBirks; /* visEBirks column */
        dataset = H5Dopen(file, "/neutrino.prim/visEBirks", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_visEBirks.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_visEBirks.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_visEinslc; /* visEinslc column */
        dataset = H5Dopen(file, "/neutrino.prim/visEinslc", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_visEinslc.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_visEinslc.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_visEinslcBirks; /* visEinslcBirks column */
        dataset = H5Dopen(file, "/neutrino.prim/visEinslcBirks", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_visEinslcBirks.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_visEinslcBirks.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        /* column for run indices */
        std::vector<unsigned> col_run;
        dataset = H5Dopen(file, "/neutrino.prim/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_run.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_run.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        std::vector<unsigned> col_subrun;
        dataset = H5Dopen(file, "/neutrino.prim/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subrun.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subrun.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        std::vector<unsigned> col_evt;
        dataset = H5Dopen(file, "/neutrino.prim/evt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.cycle = col_cycle[i];
            current.daughterVisE = col_daughterVisE[i];
            current.daughterVisEBirks = col_daughterVisEBirks[i];
            current.daughterVisEinslc = col_daughterVisEinslc[i];
            current.daughterVisEinslcBirks = col_daughterVisEinslcBirks[i];
            current.enteringE = col_enteringE[i];
            current.neutrino_prim_idx = col_neutrino_prim_idx[i];
            current.p_E = col_p_E[i];
            current.p_px = col_p_px[i];
            current.p_py = col_p_py[i];
            current.p_pz = col_p_pz[i];
            current.pdg = col_pdg[i];
            current.time = col_time[i];
            current.totEscE = col_totEscE[i];
            current.trkID = col_trkID[i];
            current.visE = col_visE[i];
            current.visEBirks = col_visEBirks[i];
            current.visEinslc = col_visEinslc[i];
            current.visEinslcBirks = col_visEinslcBirks[i];
            
            callback(col_run[i], col_subrun[i], col_evt[i], current);
        }
    }

    template<typename F>
    static void from_hdf5(const std::string& filename, F&& callback) {
        hid_t file_id = H5Fopen(filename.c_str(), H5F_ACC_RDONLY, H5P_DEFAULT);
        from_hdf5(file_id, std::forward<F>(callback));
    }
};

}
#endif