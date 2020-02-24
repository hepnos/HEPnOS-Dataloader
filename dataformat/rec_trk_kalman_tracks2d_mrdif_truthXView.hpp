/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_TRK_KALMAN_TRACKS2D_MRDIF_TRUTHXVIEW_HPP_
#define __REC_TRK_KALMAN_TRACKS2D_MRDIF_TRUTHXVIEW_HPP_

#include <tuple>
#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_trk_kalman_tracks2d_mrdif_truthXView structure for the 
 * "/rec.trk.kalman.tracks2d.mrdif.truthXView" table in corresponding HDF5 files.
 */
struct rec_trk_kalman_tracks2d_mrdif_truthXView {

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
    std::uint32_t rec_trk_kalman_tracks2d_mrdif_idx; /* rec.trk.kalman.tracks2d.mrdif_idx column */
    std::uint32_t rec_trk_kalman_tracks2d_idx; /* rec.trk.kalman.tracks2d_idx column */
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
        ar & rec_trk_kalman_tracks2d_mrdif_idx;
        ar & rec_trk_kalman_tracks2d_idx;
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
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_trk_kalman_tracks2d_mrdif_truthXView& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_trk_kalman_tracks2d_mrdif_truthXView current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;
        _read_indices(file, col_run, col_subrun, col_evt);

        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_daughterVisE; /* daughterVisE column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/daughterVisE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_daughterVisE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_daughterVisE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_daughterVisEBirks; /* daughterVisEBirks column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/daughterVisEBirks", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_daughterVisEBirks.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_daughterVisEBirks.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_daughterVisEinslc; /* daughterVisEinslc column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/daughterVisEinslc", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_daughterVisEinslc.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_daughterVisEinslc.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_daughterVisEinslcBirks; /* daughterVisEinslcBirks column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/daughterVisEinslcBirks", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_daughterVisEinslcBirks.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_daughterVisEinslcBirks.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_eff; /* eff column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/eff", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_eff.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_eff.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_motherp_E; /* motherp.E column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/motherp.E", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_motherp_E.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_motherp_E.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_motherp_px; /* motherp.px column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/motherp.px", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_motherp_px.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_motherp_px.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_motherp_py; /* motherp.py column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/motherp.py", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_motherp_py.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_motherp_py.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_motherp_pz; /* motherp.pz column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/motherp.pz", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_motherp_pz.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_motherp_pz.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_motherpdg; /* motherpdg column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/motherpdg", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_motherpdg.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_motherpdg.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p_E; /* p.E column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/p.E", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p_E.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p_E.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p_px; /* p.px column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/p.px", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p_px.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p_px.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p_py; /* p.py column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/p.py", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p_py.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p_py.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p_pz; /* p.pz column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/p.pz", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p_pz.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p_pz.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_pdg; /* pdg column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/pdg", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pdg.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pdg.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pur; /* pur column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/pur", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pur.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pur.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_trk_kalman_tracks2d_mrdif_idx; /* rec.trk.kalman.tracks2d.mrdif_idx column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/rec.trk.kalman.tracks2d.mrdif_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_trk_kalman_tracks2d_mrdif_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_trk_kalman_tracks2d_mrdif_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_trk_kalman_tracks2d_idx; /* rec.trk.kalman.tracks2d_idx column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/rec.trk.kalman.tracks2d_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_trk_kalman_tracks2d_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_trk_kalman_tracks2d_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_start_x; /* start.x column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/start.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_start_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_start_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_start_y; /* start.y column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/start.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_start_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_start_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_start_z; /* start.z column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/start.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_start_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_start_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_trkID; /* trkID column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/trkID", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkID.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkID.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_visE; /* visE column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/visE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_visE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_visE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_visEBirks; /* visEBirks column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/visEBirks", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_visEBirks.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_visEBirks.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_visEinslc; /* visEinslc column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/visEinslc", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_visEinslc.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_visEinslc.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_visEinslcBirks; /* visEinslcBirks column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/visEinslcBirks", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_visEinslcBirks.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_visEinslcBirks.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
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
            current.rec_trk_kalman_tracks2d_mrdif_idx = col_rec_trk_kalman_tracks2d_mrdif_idx[i];
            current.rec_trk_kalman_tracks2d_idx = col_rec_trk_kalman_tracks2d_idx[i];
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

    static std::tuple<
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<rec_trk_kalman_tracks2d_mrdif_truthXView>
           > from_hdf5(hid_t file) {
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;
        std::vector<rec_trk_kalman_tracks2d_mrdif_truthXView> content;
        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;

        _read_indices(file, col_run, col_subrun, col_evt);

        content.resize(col_run.size());

        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_daughterVisE; /* daughterVisE column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/daughterVisE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_daughterVisE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_daughterVisE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_daughterVisEBirks; /* daughterVisEBirks column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/daughterVisEBirks", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_daughterVisEBirks.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_daughterVisEBirks.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_daughterVisEinslc; /* daughterVisEinslc column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/daughterVisEinslc", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_daughterVisEinslc.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_daughterVisEinslc.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_daughterVisEinslcBirks; /* daughterVisEinslcBirks column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/daughterVisEinslcBirks", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_daughterVisEinslcBirks.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_daughterVisEinslcBirks.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_eff; /* eff column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/eff", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_eff.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_eff.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_motherp_E; /* motherp.E column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/motherp.E", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_motherp_E.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_motherp_E.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_motherp_px; /* motherp.px column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/motherp.px", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_motherp_px.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_motherp_px.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_motherp_py; /* motherp.py column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/motherp.py", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_motherp_py.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_motherp_py.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_motherp_pz; /* motherp.pz column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/motherp.pz", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_motherp_pz.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_motherp_pz.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_motherpdg; /* motherpdg column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/motherpdg", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_motherpdg.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_motherpdg.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p_E; /* p.E column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/p.E", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p_E.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p_E.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p_px; /* p.px column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/p.px", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p_px.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p_px.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p_py; /* p.py column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/p.py", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p_py.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p_py.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p_pz; /* p.pz column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/p.pz", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p_pz.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p_pz.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_pdg; /* pdg column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/pdg", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pdg.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pdg.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pur; /* pur column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/pur", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pur.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pur.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_trk_kalman_tracks2d_mrdif_idx; /* rec.trk.kalman.tracks2d.mrdif_idx column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/rec.trk.kalman.tracks2d.mrdif_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_trk_kalman_tracks2d_mrdif_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_trk_kalman_tracks2d_mrdif_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_trk_kalman_tracks2d_idx; /* rec.trk.kalman.tracks2d_idx column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/rec.trk.kalman.tracks2d_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_trk_kalman_tracks2d_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_trk_kalman_tracks2d_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_start_x; /* start.x column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/start.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_start_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_start_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_start_y; /* start.y column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/start.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_start_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_start_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_start_z; /* start.z column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/start.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_start_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_start_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_trkID; /* trkID column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/trkID", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkID.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkID.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_visE; /* visE column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/visE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_visE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_visE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_visEBirks; /* visEBirks column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/visEBirks", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_visEBirks.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_visEBirks.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_visEinslc; /* visEinslc column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/visEinslc", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_visEinslc.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_visEinslc.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_visEinslcBirks; /* visEinslcBirks column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/visEinslcBirks", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_visEinslcBirks.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_visEinslcBirks.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            content[i].cycle = col_cycle[i];
            content[i].daughterVisE = col_daughterVisE[i];
            content[i].daughterVisEBirks = col_daughterVisEBirks[i];
            content[i].daughterVisEinslc = col_daughterVisEinslc[i];
            content[i].daughterVisEinslcBirks = col_daughterVisEinslcBirks[i];
            content[i].eff = col_eff[i];
            content[i].motherp_E = col_motherp_E[i];
            content[i].motherp_px = col_motherp_px[i];
            content[i].motherp_py = col_motherp_py[i];
            content[i].motherp_pz = col_motherp_pz[i];
            content[i].motherpdg = col_motherpdg[i];
            content[i].p_E = col_p_E[i];
            content[i].p_px = col_p_px[i];
            content[i].p_py = col_p_py[i];
            content[i].p_pz = col_p_pz[i];
            content[i].pdg = col_pdg[i];
            content[i].pur = col_pur[i];
            content[i].rec_trk_kalman_tracks2d_mrdif_idx = col_rec_trk_kalman_tracks2d_mrdif_idx[i];
            content[i].rec_trk_kalman_tracks2d_idx = col_rec_trk_kalman_tracks2d_idx[i];
            content[i].start_x = col_start_x[i];
            content[i].start_y = col_start_y[i];
            content[i].start_z = col_start_z[i];
            content[i].trkID = col_trkID[i];
            content[i].visE = col_visE[i];
            content[i].visEBirks = col_visEBirks[i];
            content[i].visEinslc = col_visEinslc[i];
            content[i].visEinslcBirks = col_visEinslcBirks[i];
            content[i].subevt = col_subevt[i];
            
        }

        return { col_run, col_subrun, col_evt, content };
    }

    static std::tuple<
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<rec_trk_kalman_tracks2d_mrdif_truthXView>
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
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        runs.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(runs.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        subruns.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(subruns.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks2d.mrdif.truthXView/evt", H5P_DEFAULT);
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