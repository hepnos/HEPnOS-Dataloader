/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_TRK_DISCRETE_TRACKS_HPP_
#define __REC_TRK_DISCRETE_TRACKS_HPP_

#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_trk_discrete_tracks structure for the 
 * "/rec.trk.discrete.tracks" table in corresponding HDF5 files.
 */
struct rec_trk_discrete_tracks {

    double leninact; /* leninact column */
    double lenincat; /* lenincat column */
    float avedEdxlast10cm; /* avedEdxlast10cm column */
    float avedEdxlast20cm; /* avedEdxlast20cm column */
    float avedEdxlast30cm; /* avedEdxlast30cm column */
    float avedEdxlast40cm; /* avedEdxlast40cm column */
    float calE; /* calE column */
    std::int32_t cycle; /* cycle column */
    float dir_x; /* dir.x column */
    float dir_y; /* dir.y column */
    float dir_z; /* dir.z column */
    float enddist; /* enddist column */
    float len; /* len column */
    float lenE; /* lenE column */
    float overlapE; /* overlapE column */
    float pngmaxx; /* pngmaxx column */
    float pngmaxy; /* pngmaxy column */
    float pngminx; /* pngminx column */
    float pngminy; /* pngminy column */
    std::uint32_t rec_trk_discrete_tracks_idx; /* rec.trk.discrete.tracks_idx column */
    float start_x; /* start.x column */
    float start_y; /* start.y column */
    float start_z; /* start.z column */
    float stop_x; /* stop.x column */
    float stop_y; /* stop.y column */
    float stop_z; /* stop.z column */
    float stopdir_x; /* stopdir.x column */
    float stopdir_y; /* stopdir.y column */
    float stopdir_z; /* stopdir.z column */
    float trkbakair; /* trkbakair column */
    std::int32_t trkbakcell; /* trkbakcell column */
    std::int32_t trkbakcellnd; /* trkbakcellnd column */
    float trkbakdist; /* trkbakdist column */
    float trkbaksteel; /* trkbaksteel column */
    float trkfwdair; /* trkfwdair column */
    std::int32_t trkfwdcell; /* trkfwdcell column */
    std::int32_t trkfwdcellnd; /* trkfwdcellnd column */
    float trkfwddist; /* trkfwddist column */
    float trkfwdsteel; /* trkfwdsteel column */
    float trkyposattrans; /* trkyposattrans column */
    float vtxdist; /* vtxdist column */
    std::uint16_t maxplanecont; /* maxplanecont column */
    std::uint16_t maxplanegap; /* maxplanegap column */
    std::uint16_t nhit; /* nhit column */
    std::uint16_t nhitx; /* nhitx column */
    std::uint16_t nhity; /* nhity column */
    std::uint16_t nplane; /* nplane column */
    std::uint16_t nplanegap; /* nplanegap column */
    std::uint16_t subevt; /* subevt column */
    std::uint16_t view; /* view column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & leninact;
        ar & lenincat;
        ar & avedEdxlast10cm;
        ar & avedEdxlast20cm;
        ar & avedEdxlast30cm;
        ar & avedEdxlast40cm;
        ar & calE;
        ar & cycle;
        ar & dir_x;
        ar & dir_y;
        ar & dir_z;
        ar & enddist;
        ar & len;
        ar & lenE;
        ar & overlapE;
        ar & pngmaxx;
        ar & pngmaxy;
        ar & pngminx;
        ar & pngminy;
        ar & rec_trk_discrete_tracks_idx;
        ar & start_x;
        ar & start_y;
        ar & start_z;
        ar & stop_x;
        ar & stop_y;
        ar & stop_z;
        ar & stopdir_x;
        ar & stopdir_y;
        ar & stopdir_z;
        ar & trkbakair;
        ar & trkbakcell;
        ar & trkbakcellnd;
        ar & trkbakdist;
        ar & trkbaksteel;
        ar & trkfwdair;
        ar & trkfwdcell;
        ar & trkfwdcellnd;
        ar & trkfwddist;
        ar & trkfwdsteel;
        ar & trkyposattrans;
        ar & vtxdist;
        ar & maxplanecont;
        ar & maxplanegap;
        ar & nhit;
        ar & nhitx;
        ar & nhity;
        ar & nplane;
        ar & nplanegap;
        ar & subevt;
        ar & view;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_trk_discrete_tracks& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_trk_discrete_tracks current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<double> col_leninact; /* leninact column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/leninact", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_leninact.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_DOUBLE, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_leninact.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<double> col_lenincat; /* lenincat column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/lenincat", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_lenincat.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_DOUBLE, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_lenincat.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_avedEdxlast10cm; /* avedEdxlast10cm column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/avedEdxlast10cm", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_avedEdxlast10cm.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_avedEdxlast10cm.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_avedEdxlast20cm; /* avedEdxlast20cm column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/avedEdxlast20cm", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_avedEdxlast20cm.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_avedEdxlast20cm.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_avedEdxlast30cm; /* avedEdxlast30cm column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/avedEdxlast30cm", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_avedEdxlast30cm.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_avedEdxlast30cm.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_avedEdxlast40cm; /* avedEdxlast40cm column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/avedEdxlast40cm", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_avedEdxlast40cm.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_avedEdxlast40cm.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_calE; /* calE column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/calE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_calE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_calE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dir_x; /* dir.x column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/dir.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dir_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dir_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dir_y; /* dir.y column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/dir.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dir_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dir_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dir_z; /* dir.z column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/dir.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dir_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dir_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_enddist; /* enddist column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/enddist", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_enddist.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_enddist.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_len; /* len column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/len", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_len.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_len.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_lenE; /* lenE column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/lenE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_lenE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_lenE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_overlapE; /* overlapE column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/overlapE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_overlapE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_overlapE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pngmaxx; /* pngmaxx column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/pngmaxx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pngmaxx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pngmaxx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pngmaxy; /* pngmaxy column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/pngmaxy", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pngmaxy.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pngmaxy.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pngminx; /* pngminx column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/pngminx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pngminx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pngminx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pngminy; /* pngminy column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/pngminy", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pngminy.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pngminy.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_trk_discrete_tracks_idx; /* rec.trk.discrete.tracks_idx column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/rec.trk.discrete.tracks_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_trk_discrete_tracks_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_trk_discrete_tracks_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_start_x; /* start.x column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/start.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_start_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_start_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_start_y; /* start.y column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/start.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_start_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_start_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_start_z; /* start.z column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/start.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_start_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_start_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stop_x; /* stop.x column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/stop.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stop_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stop_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stop_y; /* stop.y column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/stop.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stop_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stop_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stop_z; /* stop.z column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/stop.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stop_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stop_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stopdir_x; /* stopdir.x column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/stopdir.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stopdir_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stopdir_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stopdir_y; /* stopdir.y column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/stopdir.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stopdir_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stopdir_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stopdir_z; /* stopdir.z column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/stopdir.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stopdir_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stopdir_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_trkbakair; /* trkbakair column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/trkbakair", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkbakair.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkbakair.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_trkbakcell; /* trkbakcell column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/trkbakcell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkbakcell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkbakcell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_trkbakcellnd; /* trkbakcellnd column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/trkbakcellnd", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkbakcellnd.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkbakcellnd.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_trkbakdist; /* trkbakdist column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/trkbakdist", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkbakdist.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkbakdist.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_trkbaksteel; /* trkbaksteel column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/trkbaksteel", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkbaksteel.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkbaksteel.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_trkfwdair; /* trkfwdair column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/trkfwdair", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkfwdair.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkfwdair.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_trkfwdcell; /* trkfwdcell column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/trkfwdcell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkfwdcell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkfwdcell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_trkfwdcellnd; /* trkfwdcellnd column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/trkfwdcellnd", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkfwdcellnd.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkfwdcellnd.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_trkfwddist; /* trkfwddist column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/trkfwddist", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkfwddist.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkfwddist.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_trkfwdsteel; /* trkfwdsteel column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/trkfwdsteel", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkfwdsteel.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkfwdsteel.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_trkyposattrans; /* trkyposattrans column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/trkyposattrans", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkyposattrans.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkyposattrans.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_vtxdist; /* vtxdist column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/vtxdist", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_vtxdist.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_vtxdist.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_maxplanecont; /* maxplanecont column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/maxplanecont", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_maxplanecont.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_maxplanecont.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_maxplanegap; /* maxplanegap column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/maxplanegap", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_maxplanegap.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_maxplanegap.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_nhit; /* nhit column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/nhit", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nhit.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nhit.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_nhitx; /* nhitx column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/nhitx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nhitx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nhitx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_nhity; /* nhity column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/nhity", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nhity.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nhity.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_nplane; /* nplane column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/nplane", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nplane.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nplane.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_nplanegap; /* nplanegap column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/nplanegap", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nplanegap.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nplanegap.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_view; /* view column */
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/view", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_view.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_view.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        /* column for run indices */
        std::vector<unsigned> col_run;
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_run.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_run.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        std::vector<unsigned> col_subrun;
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subrun.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subrun.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        std::vector<unsigned> col_evt;
        dataset = H5Dopen(file, "/rec.trk.discrete.tracks/evt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.leninact = col_leninact[i];
            current.lenincat = col_lenincat[i];
            current.avedEdxlast10cm = col_avedEdxlast10cm[i];
            current.avedEdxlast20cm = col_avedEdxlast20cm[i];
            current.avedEdxlast30cm = col_avedEdxlast30cm[i];
            current.avedEdxlast40cm = col_avedEdxlast40cm[i];
            current.calE = col_calE[i];
            current.cycle = col_cycle[i];
            current.dir_x = col_dir_x[i];
            current.dir_y = col_dir_y[i];
            current.dir_z = col_dir_z[i];
            current.enddist = col_enddist[i];
            current.len = col_len[i];
            current.lenE = col_lenE[i];
            current.overlapE = col_overlapE[i];
            current.pngmaxx = col_pngmaxx[i];
            current.pngmaxy = col_pngmaxy[i];
            current.pngminx = col_pngminx[i];
            current.pngminy = col_pngminy[i];
            current.rec_trk_discrete_tracks_idx = col_rec_trk_discrete_tracks_idx[i];
            current.start_x = col_start_x[i];
            current.start_y = col_start_y[i];
            current.start_z = col_start_z[i];
            current.stop_x = col_stop_x[i];
            current.stop_y = col_stop_y[i];
            current.stop_z = col_stop_z[i];
            current.stopdir_x = col_stopdir_x[i];
            current.stopdir_y = col_stopdir_y[i];
            current.stopdir_z = col_stopdir_z[i];
            current.trkbakair = col_trkbakair[i];
            current.trkbakcell = col_trkbakcell[i];
            current.trkbakcellnd = col_trkbakcellnd[i];
            current.trkbakdist = col_trkbakdist[i];
            current.trkbaksteel = col_trkbaksteel[i];
            current.trkfwdair = col_trkfwdair[i];
            current.trkfwdcell = col_trkfwdcell[i];
            current.trkfwdcellnd = col_trkfwdcellnd[i];
            current.trkfwddist = col_trkfwddist[i];
            current.trkfwdsteel = col_trkfwdsteel[i];
            current.trkyposattrans = col_trkyposattrans[i];
            current.vtxdist = col_vtxdist[i];
            current.maxplanecont = col_maxplanecont[i];
            current.maxplanegap = col_maxplanegap[i];
            current.nhit = col_nhit[i];
            current.nhitx = col_nhitx[i];
            current.nhity = col_nhity[i];
            current.nplane = col_nplane[i];
            current.nplanegap = col_nplanegap[i];
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