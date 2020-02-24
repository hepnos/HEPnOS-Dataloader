/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_MC_COSMIC_HPP_
#define __REC_MC_COSMIC_HPP_

#include <tuple>
#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_mc_cosmic structure for the 
 * "/rec.mc.cosmic" table in corresponding HDF5 files.
 */
struct rec_mc_cosmic {

    float E; /* E column */
    float azimuth; /* azimuth column */
    std::int32_t cycle; /* cycle column */
    float eff; /* eff column */
    float enter_x; /* enter.x column */
    float enter_y; /* enter.y column */
    float enter_z; /* enter.z column */
    float exit_x; /* exit.x column */
    float exit_y; /* exit.y column */
    float exit_z; /* exit.z column */
    std::uint32_t nhitslc; /* nhitslc column */
    std::uint32_t nhittot; /* nhittot column */
    float p_E; /* p.E column */
    float p_px; /* p.px column */
    float p_py; /* p.py column */
    float p_pz; /* p.pz column */
    float penter_E; /* penter.E column */
    float penter_px; /* penter.px column */
    float penter_py; /* penter.py column */
    float penter_pz; /* penter.pz column */
    float pur; /* pur column */
    std::uint32_t rec_mc_cosmic_idx; /* rec.mc.cosmic_idx column */
    float stop_x; /* stop.x column */
    float stop_y; /* stop.y column */
    float stop_z; /* stop.z column */
    float time; /* time column */
    float visE; /* visE column */
    float visEinslc; /* visEinslc column */
    float vtx_x; /* vtx.x column */
    float vtx_y; /* vtx.y column */
    float vtx_z; /* vtx.z column */
    float zenith; /* zenith column */
    std::int16_t pdg; /* pdg column */
    std::uint16_t subevt; /* subevt column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & E;
        ar & azimuth;
        ar & cycle;
        ar & eff;
        ar & enter_x;
        ar & enter_y;
        ar & enter_z;
        ar & exit_x;
        ar & exit_y;
        ar & exit_z;
        ar & nhitslc;
        ar & nhittot;
        ar & p_E;
        ar & p_px;
        ar & p_py;
        ar & p_pz;
        ar & penter_E;
        ar & penter_px;
        ar & penter_py;
        ar & penter_pz;
        ar & pur;
        ar & rec_mc_cosmic_idx;
        ar & stop_x;
        ar & stop_y;
        ar & stop_z;
        ar & time;
        ar & visE;
        ar & visEinslc;
        ar & vtx_x;
        ar & vtx_y;
        ar & vtx_z;
        ar & zenith;
        ar & pdg;
        ar & subevt;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_mc_cosmic& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_mc_cosmic current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;
        _read_indices(file, col_run, col_subrun, col_evt);

        std::vector<float> col_E; /* E column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/E", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_E.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_E.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_azimuth; /* azimuth column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/azimuth", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_azimuth.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_azimuth.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_eff; /* eff column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/eff", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_eff.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_eff.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_enter_x; /* enter.x column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/enter.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_enter_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_enter_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_enter_y; /* enter.y column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/enter.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_enter_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_enter_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_enter_z; /* enter.z column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/enter.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_enter_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_enter_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_exit_x; /* exit.x column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/exit.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_exit_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_exit_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_exit_y; /* exit.y column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/exit.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_exit_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_exit_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_exit_z; /* exit.z column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/exit.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_exit_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_exit_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nhitslc; /* nhitslc column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/nhitslc", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nhitslc.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nhitslc.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nhittot; /* nhittot column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/nhittot", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nhittot.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nhittot.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p_E; /* p.E column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/p.E", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p_E.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p_E.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p_px; /* p.px column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/p.px", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p_px.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p_px.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p_py; /* p.py column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/p.py", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p_py.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p_py.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p_pz; /* p.pz column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/p.pz", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p_pz.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p_pz.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_penter_E; /* penter.E column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/penter.E", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_penter_E.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_penter_E.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_penter_px; /* penter.px column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/penter.px", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_penter_px.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_penter_px.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_penter_py; /* penter.py column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/penter.py", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_penter_py.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_penter_py.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_penter_pz; /* penter.pz column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/penter.pz", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_penter_pz.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_penter_pz.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pur; /* pur column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/pur", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pur.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pur.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_mc_cosmic_idx; /* rec.mc.cosmic_idx column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/rec.mc.cosmic_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_mc_cosmic_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_mc_cosmic_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stop_x; /* stop.x column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/stop.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stop_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stop_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stop_y; /* stop.y column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/stop.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stop_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stop_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stop_z; /* stop.z column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/stop.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stop_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stop_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_time; /* time column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/time", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_time.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_time.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_visE; /* visE column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/visE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_visE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_visE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_visEinslc; /* visEinslc column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/visEinslc", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_visEinslc.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_visEinslc.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_vtx_x; /* vtx.x column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/vtx.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_vtx_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_vtx_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_vtx_y; /* vtx.y column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/vtx.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_vtx_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_vtx_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_vtx_z; /* vtx.z column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/vtx.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_vtx_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_vtx_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_zenith; /* zenith column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/zenith", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_zenith.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_zenith.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int16_t> col_pdg; /* pdg column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/pdg", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pdg.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pdg.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.E = col_E[i];
            current.azimuth = col_azimuth[i];
            current.cycle = col_cycle[i];
            current.eff = col_eff[i];
            current.enter_x = col_enter_x[i];
            current.enter_y = col_enter_y[i];
            current.enter_z = col_enter_z[i];
            current.exit_x = col_exit_x[i];
            current.exit_y = col_exit_y[i];
            current.exit_z = col_exit_z[i];
            current.nhitslc = col_nhitslc[i];
            current.nhittot = col_nhittot[i];
            current.p_E = col_p_E[i];
            current.p_px = col_p_px[i];
            current.p_py = col_p_py[i];
            current.p_pz = col_p_pz[i];
            current.penter_E = col_penter_E[i];
            current.penter_px = col_penter_px[i];
            current.penter_py = col_penter_py[i];
            current.penter_pz = col_penter_pz[i];
            current.pur = col_pur[i];
            current.rec_mc_cosmic_idx = col_rec_mc_cosmic_idx[i];
            current.stop_x = col_stop_x[i];
            current.stop_y = col_stop_y[i];
            current.stop_z = col_stop_z[i];
            current.time = col_time[i];
            current.visE = col_visE[i];
            current.visEinslc = col_visEinslc[i];
            current.vtx_x = col_vtx_x[i];
            current.vtx_y = col_vtx_y[i];
            current.vtx_z = col_vtx_z[i];
            current.zenith = col_zenith[i];
            current.pdg = col_pdg[i];
            current.subevt = col_subevt[i];
            
            callback(col_run[i], col_subrun[i], col_evt[i], current);
        }
    }

    template<typename F>
    static void from_hdf5(const std::string& filename, F&& callback) {
        hid_t file_id = H5Fopen(filename.c_str(), H5F_ACC_RDONLY, H5P_DEFAULT);
        from_hdf5(file_id, std::forward<F>(callback));
    }

    static std::tuple<
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<rec_mc_cosmic>
           > from_hdf5(hid_t file) {
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;
        std::vector<rec_mc_cosmic> content;
        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;

        _read_indices(file, col_run, col_subrun, col_evt);

        content.resize(col_run.size());

        std::vector<float> col_E; /* E column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/E", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_E.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_E.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_azimuth; /* azimuth column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/azimuth", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_azimuth.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_azimuth.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_eff; /* eff column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/eff", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_eff.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_eff.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_enter_x; /* enter.x column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/enter.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_enter_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_enter_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_enter_y; /* enter.y column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/enter.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_enter_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_enter_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_enter_z; /* enter.z column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/enter.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_enter_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_enter_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_exit_x; /* exit.x column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/exit.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_exit_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_exit_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_exit_y; /* exit.y column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/exit.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_exit_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_exit_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_exit_z; /* exit.z column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/exit.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_exit_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_exit_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nhitslc; /* nhitslc column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/nhitslc", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nhitslc.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nhitslc.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nhittot; /* nhittot column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/nhittot", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nhittot.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nhittot.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p_E; /* p.E column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/p.E", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p_E.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p_E.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p_px; /* p.px column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/p.px", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p_px.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p_px.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p_py; /* p.py column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/p.py", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p_py.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p_py.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p_pz; /* p.pz column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/p.pz", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p_pz.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p_pz.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_penter_E; /* penter.E column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/penter.E", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_penter_E.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_penter_E.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_penter_px; /* penter.px column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/penter.px", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_penter_px.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_penter_px.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_penter_py; /* penter.py column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/penter.py", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_penter_py.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_penter_py.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_penter_pz; /* penter.pz column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/penter.pz", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_penter_pz.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_penter_pz.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pur; /* pur column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/pur", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pur.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pur.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_mc_cosmic_idx; /* rec.mc.cosmic_idx column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/rec.mc.cosmic_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_mc_cosmic_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_mc_cosmic_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stop_x; /* stop.x column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/stop.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stop_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stop_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stop_y; /* stop.y column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/stop.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stop_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stop_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stop_z; /* stop.z column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/stop.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stop_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stop_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_time; /* time column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/time", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_time.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_time.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_visE; /* visE column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/visE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_visE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_visE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_visEinslc; /* visEinslc column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/visEinslc", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_visEinslc.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_visEinslc.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_vtx_x; /* vtx.x column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/vtx.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_vtx_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_vtx_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_vtx_y; /* vtx.y column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/vtx.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_vtx_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_vtx_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_vtx_z; /* vtx.z column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/vtx.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_vtx_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_vtx_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_zenith; /* zenith column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/zenith", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_zenith.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_zenith.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int16_t> col_pdg; /* pdg column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/pdg", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pdg.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pdg.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.mc.cosmic/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            content[i].E = col_E[i];
            content[i].azimuth = col_azimuth[i];
            content[i].cycle = col_cycle[i];
            content[i].eff = col_eff[i];
            content[i].enter_x = col_enter_x[i];
            content[i].enter_y = col_enter_y[i];
            content[i].enter_z = col_enter_z[i];
            content[i].exit_x = col_exit_x[i];
            content[i].exit_y = col_exit_y[i];
            content[i].exit_z = col_exit_z[i];
            content[i].nhitslc = col_nhitslc[i];
            content[i].nhittot = col_nhittot[i];
            content[i].p_E = col_p_E[i];
            content[i].p_px = col_p_px[i];
            content[i].p_py = col_p_py[i];
            content[i].p_pz = col_p_pz[i];
            content[i].penter_E = col_penter_E[i];
            content[i].penter_px = col_penter_px[i];
            content[i].penter_py = col_penter_py[i];
            content[i].penter_pz = col_penter_pz[i];
            content[i].pur = col_pur[i];
            content[i].rec_mc_cosmic_idx = col_rec_mc_cosmic_idx[i];
            content[i].stop_x = col_stop_x[i];
            content[i].stop_y = col_stop_y[i];
            content[i].stop_z = col_stop_z[i];
            content[i].time = col_time[i];
            content[i].visE = col_visE[i];
            content[i].visEinslc = col_visEinslc[i];
            content[i].vtx_x = col_vtx_x[i];
            content[i].vtx_y = col_vtx_y[i];
            content[i].vtx_z = col_vtx_z[i];
            content[i].zenith = col_zenith[i];
            content[i].pdg = col_pdg[i];
            content[i].subevt = col_subevt[i];
            
        }

        return { col_run, col_subrun, col_evt, content };
    }

    static std::tuple<
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<rec_mc_cosmic>
           > from_hdf5(const std::string& filename) {
        hid_t file_id = H5Fopen(filename.c_str(), H5F_ACC_RDONLY, H5P_DEFAULT);
        return from_hdf5(file_id);
    }

    private:

    static void _read_indices(hid_t file,
                              std::vector<unsigned>& runs,
                              std::vector<unsigned>& subruns,
                              std::vector<unsigned>& events)
    {
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;
        /* column for run indices */
        dataset = H5Dopen(file, "/rec.mc.cosmic/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        runs.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(runs.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        dataset = H5Dopen(file, "/rec.mc.cosmic/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        subruns.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(subruns.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        dataset = H5Dopen(file, "/rec.mc.cosmic/evt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        events.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(events.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
    }
};

}
#endif