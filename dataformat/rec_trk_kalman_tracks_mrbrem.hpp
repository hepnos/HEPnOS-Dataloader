/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_TRK_KALMAN_TRACKS_MRBREM_HPP_
#define __REC_TRK_KALMAN_TRACKS_MRBREM_HPP_

#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_trk_kalman_tracks_mrbrem structure for the 
 * "/rec.trk.kalman.tracks.mrbrem" table in corresponding HDF5 files.
 */
struct rec_trk_kalman_tracks_mrbrem {

    float calE; /* calE column */
    std::int32_t cycle; /* cycle column */
    float gap; /* gap column */
    std::uint32_t rec_trk_kalman_tracks_mrbrem_idx; /* rec.trk.kalman.tracks.mrbrem_idx column */
    std::uint32_t rec_trk_kalman_tracks_idx; /* rec.trk.kalman.tracks_idx column */
    std::uint16_t isDiF; /* isDiF column */
    std::uint16_t isShwDiF; /* isShwDiF column */
    std::uint16_t maxplanecont; /* maxplanecont column */
    std::uint16_t maxplanegap; /* maxplanegap column */
    std::uint16_t nhit; /* nhit column */
    std::uint16_t nhitx; /* nhitx column */
    std::uint16_t nhity; /* nhity column */
    std::uint16_t nplane; /* nplane column */
    std::uint16_t nplanex; /* nplanex column */
    std::uint16_t nplaney; /* nplaney column */
    std::uint16_t subevt; /* subevt column */
    std::uint16_t view; /* view column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & calE;
        ar & cycle;
        ar & gap;
        ar & rec_trk_kalman_tracks_mrbrem_idx;
        ar & rec_trk_kalman_tracks_idx;
        ar & isDiF;
        ar & isShwDiF;
        ar & maxplanecont;
        ar & maxplanegap;
        ar & nhit;
        ar & nhitx;
        ar & nhity;
        ar & nplane;
        ar & nplanex;
        ar & nplaney;
        ar & subevt;
        ar & view;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_trk_kalman_tracks_mrbrem& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_trk_kalman_tracks_mrbrem current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<float> col_calE; /* calE column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks.mrbrem/calE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_calE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_calE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks.mrbrem/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_gap; /* gap column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks.mrbrem/gap", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_gap.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_gap.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_trk_kalman_tracks_mrbrem_idx; /* rec.trk.kalman.tracks.mrbrem_idx column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks.mrbrem/rec.trk.kalman.tracks.mrbrem_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_trk_kalman_tracks_mrbrem_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_trk_kalman_tracks_mrbrem_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_trk_kalman_tracks_idx; /* rec.trk.kalman.tracks_idx column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks.mrbrem/rec.trk.kalman.tracks_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_trk_kalman_tracks_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_trk_kalman_tracks_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_isDiF; /* isDiF column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks.mrbrem/isDiF", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_isDiF.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_isDiF.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_isShwDiF; /* isShwDiF column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks.mrbrem/isShwDiF", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_isShwDiF.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_isShwDiF.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_maxplanecont; /* maxplanecont column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks.mrbrem/maxplanecont", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_maxplanecont.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_maxplanecont.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_maxplanegap; /* maxplanegap column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks.mrbrem/maxplanegap", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_maxplanegap.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_maxplanegap.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_nhit; /* nhit column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks.mrbrem/nhit", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nhit.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nhit.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_nhitx; /* nhitx column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks.mrbrem/nhitx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nhitx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nhitx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_nhity; /* nhity column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks.mrbrem/nhity", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nhity.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nhity.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_nplane; /* nplane column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks.mrbrem/nplane", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nplane.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nplane.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_nplanex; /* nplanex column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks.mrbrem/nplanex", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nplanex.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nplanex.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_nplaney; /* nplaney column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks.mrbrem/nplaney", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nplaney.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nplaney.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks.mrbrem/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_view; /* view column */
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks.mrbrem/view", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_view.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_view.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        /* column for run indices */
        std::vector<unsigned> col_run;
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks.mrbrem/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_run.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_run.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        std::vector<unsigned> col_subrun;
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks.mrbrem/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subrun.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subrun.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        std::vector<unsigned> col_evt;
        dataset = H5Dopen(file, "/rec.trk.kalman.tracks.mrbrem/evt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.calE = col_calE[i];
            current.cycle = col_cycle[i];
            current.gap = col_gap[i];
            current.rec_trk_kalman_tracks_mrbrem_idx = col_rec_trk_kalman_tracks_mrbrem_idx[i];
            current.rec_trk_kalman_tracks_idx = col_rec_trk_kalman_tracks_idx[i];
            current.isDiF = col_isDiF[i];
            current.isShwDiF = col_isShwDiF[i];
            current.maxplanecont = col_maxplanecont[i];
            current.maxplanegap = col_maxplanegap[i];
            current.nhit = col_nhit[i];
            current.nhitx = col_nhitx[i];
            current.nhity = col_nhity[i];
            current.nplane = col_nplane[i];
            current.nplanex = col_nplanex[i];
            current.nplaney = col_nplaney[i];
            current.subevt = col_subevt[i];
            current.view = col_view[i];
            
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