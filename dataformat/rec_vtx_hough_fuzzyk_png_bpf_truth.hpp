/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_VTX_HOUGH_FUZZYK_PNG_BPF_TRUTH_HPP_
#define __REC_VTX_HOUGH_FUZZYK_PNG_BPF_TRUTH_HPP_

#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_vtx_hough_fuzzyk_png_bpf_truth structure for the 
 * "/rec.vtx.hough.fuzzyk.png.bpf.truth" table in corresponding HDF5 files.
 */
struct rec_vtx_hough_fuzzyk_png_bpf_truth {

    std::int32_t cycle; /* cycle column */
    float daughterVisE; /* daughterVisE column */
    float daughterVisEBirks; /* daughterVisEBirks column */
    float daughterVisEinslc; /* daughterVisEinslc column */
    float daughterVisEinslcBirks; /* daughterVisEinslcBirks column */
    float eff; /* eff column */
    float motherp_E; /* motherp.E column */
    float motherp_px; /* motherp.px column */
    float motherp_py; /* motherp.py column */
    float motherp_pz; /* motherp.pz column */
    std::int32_t motherpdg; /* motherpdg column */
    float p_E; /* p.E column */
    float p_px; /* p.px column */
    float p_py; /* p.py column */
    float p_pz; /* p.pz column */
    std::int32_t pdg; /* pdg column */
    float pur; /* pur column */
    std::uint32_t rec_vtx_hough_fuzzyk_png_bpf_idx; /* rec.vtx.hough.fuzzyk.png.bpf_idx column */
    std::uint32_t rec_vtx_hough_fuzzyk_png_idx; /* rec.vtx.hough.fuzzyk.png_idx column */
    std::uint32_t rec_vtx_hough_idx; /* rec.vtx.hough_idx column */
    float start_x; /* start.x column */
    float start_y; /* start.y column */
    float start_z; /* start.z column */
    std::int32_t trkID; /* trkID column */
    float visE; /* visE column */
    float visEBirks; /* visEBirks column */
    float visEinslc; /* visEinslc column */
    float visEinslcBirks; /* visEinslcBirks column */
    std::uint16_t subevt; /* subevt column */
    
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
        ar & eff;
        ar & motherp_E;
        ar & motherp_px;
        ar & motherp_py;
        ar & motherp_pz;
        ar & motherpdg;
        ar & p_E;
        ar & p_px;
        ar & p_py;
        ar & p_pz;
        ar & pdg;
        ar & pur;
        ar & rec_vtx_hough_fuzzyk_png_bpf_idx;
        ar & rec_vtx_hough_fuzzyk_png_idx;
        ar & rec_vtx_hough_idx;
        ar & start_x;
        ar & start_y;
        ar & start_z;
        ar & trkID;
        ar & visE;
        ar & visEBirks;
        ar & visEinslc;
        ar & visEinslcBirks;
        ar & subevt;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_vtx_hough_fuzzyk_png_bpf_truth& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_vtx_hough_fuzzyk_png_bpf_truth current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.bpf.truth/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_daughterVisE; /* daughterVisE column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.bpf.truth/daughterVisE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_daughterVisE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_daughterVisE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_daughterVisEBirks; /* daughterVisEBirks column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.bpf.truth/daughterVisEBirks", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_daughterVisEBirks.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_daughterVisEBirks.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_daughterVisEinslc; /* daughterVisEinslc column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.bpf.truth/daughterVisEinslc", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_daughterVisEinslc.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_daughterVisEinslc.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_daughterVisEinslcBirks; /* daughterVisEinslcBirks column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.bpf.truth/daughterVisEinslcBirks", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_daughterVisEinslcBirks.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_daughterVisEinslcBirks.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_eff; /* eff column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.bpf.truth/eff", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_eff.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_eff.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_motherp_E; /* motherp.E column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.bpf.truth/motherp.E", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_motherp_E.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_motherp_E.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_motherp_px; /* motherp.px column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.bpf.truth/motherp.px", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_motherp_px.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_motherp_px.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_motherp_py; /* motherp.py column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.bpf.truth/motherp.py", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_motherp_py.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_motherp_py.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_motherp_pz; /* motherp.pz column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.bpf.truth/motherp.pz", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_motherp_pz.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_motherp_pz.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_motherpdg; /* motherpdg column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.bpf.truth/motherpdg", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_motherpdg.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_motherpdg.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p_E; /* p.E column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.bpf.truth/p.E", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p_E.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p_E.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p_px; /* p.px column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.bpf.truth/p.px", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p_px.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p_px.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p_py; /* p.py column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.bpf.truth/p.py", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p_py.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p_py.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p_pz; /* p.pz column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.bpf.truth/p.pz", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p_pz.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p_pz.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_pdg; /* pdg column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.bpf.truth/pdg", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pdg.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pdg.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pur; /* pur column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.bpf.truth/pur", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pur.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pur.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_vtx_hough_fuzzyk_png_bpf_idx; /* rec.vtx.hough.fuzzyk.png.bpf_idx column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.bpf.truth/rec.vtx.hough.fuzzyk.png.bpf_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_vtx_hough_fuzzyk_png_bpf_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_vtx_hough_fuzzyk_png_bpf_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_vtx_hough_fuzzyk_png_idx; /* rec.vtx.hough.fuzzyk.png_idx column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.bpf.truth/rec.vtx.hough.fuzzyk.png_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_vtx_hough_fuzzyk_png_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_vtx_hough_fuzzyk_png_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_vtx_hough_idx; /* rec.vtx.hough_idx column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.bpf.truth/rec.vtx.hough_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_vtx_hough_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_vtx_hough_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_start_x; /* start.x column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.bpf.truth/start.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_start_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_start_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_start_y; /* start.y column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.bpf.truth/start.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_start_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_start_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_start_z; /* start.z column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.bpf.truth/start.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_start_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_start_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_trkID; /* trkID column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.bpf.truth/trkID", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkID.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkID.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_visE; /* visE column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.bpf.truth/visE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_visE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_visE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_visEBirks; /* visEBirks column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.bpf.truth/visEBirks", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_visEBirks.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_visEBirks.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_visEinslc; /* visEinslc column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.bpf.truth/visEinslc", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_visEinslc.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_visEinslc.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_visEinslcBirks; /* visEinslcBirks column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.bpf.truth/visEinslcBirks", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_visEinslcBirks.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_visEinslcBirks.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.bpf.truth/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        /* column for run indices */
        std::vector<unsigned> col_run;
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.bpf.truth/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_run.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_run.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        std::vector<unsigned> col_subrun;
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.bpf.truth/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subrun.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subrun.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        std::vector<unsigned> col_evt;
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.bpf.truth/evt", H5P_DEFAULT);
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
            current.eff = col_eff[i];
            current.motherp_E = col_motherp_E[i];
            current.motherp_px = col_motherp_px[i];
            current.motherp_py = col_motherp_py[i];
            current.motherp_pz = col_motherp_pz[i];
            current.motherpdg = col_motherpdg[i];
            current.p_E = col_p_E[i];
            current.p_px = col_p_px[i];
            current.p_py = col_p_py[i];
            current.p_pz = col_p_pz[i];
            current.pdg = col_pdg[i];
            current.pur = col_pur[i];
            current.rec_vtx_hough_fuzzyk_png_bpf_idx = col_rec_vtx_hough_fuzzyk_png_bpf_idx[i];
            current.rec_vtx_hough_fuzzyk_png_idx = col_rec_vtx_hough_fuzzyk_png_idx[i];
            current.rec_vtx_hough_idx = col_rec_vtx_hough_idx[i];
            current.start_x = col_start_x[i];
            current.start_y = col_start_y[i];
            current.start_z = col_start_z[i];
            current.trkID = col_trkID[i];
            current.visE = col_visE[i];
            current.visEBirks = col_visEBirks[i];
            current.visEinslc = col_visEinslc[i];
            current.visEinslcBirks = col_visEinslcBirks[i];
            current.subevt = col_subevt[i];
            
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