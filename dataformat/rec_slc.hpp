/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_SLC_HPP_
#define __REC_SLC_HPP_

#include <tuple>
#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_slc structure for the 
 * "/rec.slc" table in corresponding HDF5 files.
 */
struct rec_slc {

    float boxmax_x; /* boxmax.x column */
    float boxmax_y; /* boxmax.y column */
    float boxmax_z; /* boxmax.z column */
    float boxmin_x; /* boxmin.x column */
    float boxmin_y; /* boxmin.y column */
    float boxmin_z; /* boxmin.z column */
    float calE; /* calE column */
    float closestslicecalE; /* closestslicecalE column */
    float closestslicemindist; /* closestslicemindist column */
    float closestsliceminfromback; /* closestsliceminfromback column */
    float closestsliceminfrombottom; /* closestsliceminfrombottom column */
    float closestsliceminfromeast; /* closestsliceminfromeast column */
    float closestsliceminfromfront; /* closestsliceminfromfront column */
    float closestsliceminfromtop; /* closestsliceminfromtop column */
    float closestsliceminfromwest; /* closestsliceminfromwest column */
    std::uint32_t closestslicenhit; /* closestslicenhit column */
    float closestslicetime; /* closestslicetime column */
    std::int32_t cycle; /* cycle column */
    float endtime; /* endtime column */
    std::uint32_t firstcell; /* firstcell column */
    std::uint32_t firstplane; /* firstplane column */
    float fracnoiseE; /* fracnoiseE column */
    float fracnoisePE; /* fracnoisePE column */
    std::uint32_t lastcell; /* lastcell column */
    std::uint32_t lastplane; /* lastplane column */
    float meanpos_x; /* meanpos.x column */
    float meanpos_y; /* meanpos.y column */
    float meanpos_z; /* meanpos.z column */
    float meantime; /* meantime column */
    std::uint32_t ncalhit; /* ncalhit column */
    std::uint32_t ncellsfromedge; /* ncellsfromedge column */
    std::uint32_t ncontplanes; /* ncontplanes column */
    std::uint32_t nhit; /* nhit column */
    std::uint32_t nmiphit; /* nmiphit column */
    std::uint32_t nnoisehit; /* nnoisehit column */
    std::uint32_t nnonnoise; /* nnonnoise column */
    float starttime; /* starttime column */
    float tsd; /* tsd column */
    std::uint16_t subevt; /* subevt column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & boxmax_x;
        ar & boxmax_y;
        ar & boxmax_z;
        ar & boxmin_x;
        ar & boxmin_y;
        ar & boxmin_z;
        ar & calE;
        ar & closestslicecalE;
        ar & closestslicemindist;
        ar & closestsliceminfromback;
        ar & closestsliceminfrombottom;
        ar & closestsliceminfromeast;
        ar & closestsliceminfromfront;
        ar & closestsliceminfromtop;
        ar & closestsliceminfromwest;
        ar & closestslicenhit;
        ar & closestslicetime;
        ar & cycle;
        ar & endtime;
        ar & firstcell;
        ar & firstplane;
        ar & fracnoiseE;
        ar & fracnoisePE;
        ar & lastcell;
        ar & lastplane;
        ar & meanpos_x;
        ar & meanpos_y;
        ar & meanpos_z;
        ar & meantime;
        ar & ncalhit;
        ar & ncellsfromedge;
        ar & ncontplanes;
        ar & nhit;
        ar & nmiphit;
        ar & nnoisehit;
        ar & nnonnoise;
        ar & starttime;
        ar & tsd;
        ar & subevt;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_slc& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_slc current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;
        _read_indices(file, col_run, col_subrun, col_evt);

        std::vector<float> col_boxmax_x; /* boxmax.x column */
        dataset = H5Dopen(file, "/rec.slc/boxmax.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_boxmax_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_boxmax_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_boxmax_y; /* boxmax.y column */
        dataset = H5Dopen(file, "/rec.slc/boxmax.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_boxmax_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_boxmax_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_boxmax_z; /* boxmax.z column */
        dataset = H5Dopen(file, "/rec.slc/boxmax.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_boxmax_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_boxmax_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_boxmin_x; /* boxmin.x column */
        dataset = H5Dopen(file, "/rec.slc/boxmin.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_boxmin_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_boxmin_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_boxmin_y; /* boxmin.y column */
        dataset = H5Dopen(file, "/rec.slc/boxmin.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_boxmin_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_boxmin_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_boxmin_z; /* boxmin.z column */
        dataset = H5Dopen(file, "/rec.slc/boxmin.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_boxmin_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_boxmin_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_calE; /* calE column */
        dataset = H5Dopen(file, "/rec.slc/calE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_calE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_calE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_closestslicecalE; /* closestslicecalE column */
        dataset = H5Dopen(file, "/rec.slc/closestslicecalE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_closestslicecalE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_closestslicecalE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_closestslicemindist; /* closestslicemindist column */
        dataset = H5Dopen(file, "/rec.slc/closestslicemindist", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_closestslicemindist.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_closestslicemindist.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_closestsliceminfromback; /* closestsliceminfromback column */
        dataset = H5Dopen(file, "/rec.slc/closestsliceminfromback", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_closestsliceminfromback.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_closestsliceminfromback.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_closestsliceminfrombottom; /* closestsliceminfrombottom column */
        dataset = H5Dopen(file, "/rec.slc/closestsliceminfrombottom", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_closestsliceminfrombottom.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_closestsliceminfrombottom.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_closestsliceminfromeast; /* closestsliceminfromeast column */
        dataset = H5Dopen(file, "/rec.slc/closestsliceminfromeast", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_closestsliceminfromeast.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_closestsliceminfromeast.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_closestsliceminfromfront; /* closestsliceminfromfront column */
        dataset = H5Dopen(file, "/rec.slc/closestsliceminfromfront", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_closestsliceminfromfront.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_closestsliceminfromfront.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_closestsliceminfromtop; /* closestsliceminfromtop column */
        dataset = H5Dopen(file, "/rec.slc/closestsliceminfromtop", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_closestsliceminfromtop.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_closestsliceminfromtop.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_closestsliceminfromwest; /* closestsliceminfromwest column */
        dataset = H5Dopen(file, "/rec.slc/closestsliceminfromwest", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_closestsliceminfromwest.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_closestsliceminfromwest.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_closestslicenhit; /* closestslicenhit column */
        dataset = H5Dopen(file, "/rec.slc/closestslicenhit", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_closestslicenhit.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_closestslicenhit.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_closestslicetime; /* closestslicetime column */
        dataset = H5Dopen(file, "/rec.slc/closestslicetime", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_closestslicetime.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_closestslicetime.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.slc/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_endtime; /* endtime column */
        dataset = H5Dopen(file, "/rec.slc/endtime", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_endtime.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_endtime.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_firstcell; /* firstcell column */
        dataset = H5Dopen(file, "/rec.slc/firstcell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_firstcell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_firstcell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_firstplane; /* firstplane column */
        dataset = H5Dopen(file, "/rec.slc/firstplane", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_firstplane.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_firstplane.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_fracnoiseE; /* fracnoiseE column */
        dataset = H5Dopen(file, "/rec.slc/fracnoiseE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_fracnoiseE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_fracnoiseE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_fracnoisePE; /* fracnoisePE column */
        dataset = H5Dopen(file, "/rec.slc/fracnoisePE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_fracnoisePE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_fracnoisePE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_lastcell; /* lastcell column */
        dataset = H5Dopen(file, "/rec.slc/lastcell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_lastcell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_lastcell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_lastplane; /* lastplane column */
        dataset = H5Dopen(file, "/rec.slc/lastplane", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_lastplane.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_lastplane.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_meanpos_x; /* meanpos.x column */
        dataset = H5Dopen(file, "/rec.slc/meanpos.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_meanpos_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_meanpos_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_meanpos_y; /* meanpos.y column */
        dataset = H5Dopen(file, "/rec.slc/meanpos.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_meanpos_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_meanpos_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_meanpos_z; /* meanpos.z column */
        dataset = H5Dopen(file, "/rec.slc/meanpos.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_meanpos_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_meanpos_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_meantime; /* meantime column */
        dataset = H5Dopen(file, "/rec.slc/meantime", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_meantime.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_meantime.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_ncalhit; /* ncalhit column */
        dataset = H5Dopen(file, "/rec.slc/ncalhit", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ncalhit.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ncalhit.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_ncellsfromedge; /* ncellsfromedge column */
        dataset = H5Dopen(file, "/rec.slc/ncellsfromedge", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ncellsfromedge.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ncellsfromedge.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_ncontplanes; /* ncontplanes column */
        dataset = H5Dopen(file, "/rec.slc/ncontplanes", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ncontplanes.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ncontplanes.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nhit; /* nhit column */
        dataset = H5Dopen(file, "/rec.slc/nhit", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nhit.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nhit.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nmiphit; /* nmiphit column */
        dataset = H5Dopen(file, "/rec.slc/nmiphit", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nmiphit.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nmiphit.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nnoisehit; /* nnoisehit column */
        dataset = H5Dopen(file, "/rec.slc/nnoisehit", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nnoisehit.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nnoisehit.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nnonnoise; /* nnonnoise column */
        dataset = H5Dopen(file, "/rec.slc/nnonnoise", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nnonnoise.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nnonnoise.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_starttime; /* starttime column */
        dataset = H5Dopen(file, "/rec.slc/starttime", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_starttime.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_starttime.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_tsd; /* tsd column */
        dataset = H5Dopen(file, "/rec.slc/tsd", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tsd.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tsd.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.slc/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.boxmax_x = col_boxmax_x[i];
            current.boxmax_y = col_boxmax_y[i];
            current.boxmax_z = col_boxmax_z[i];
            current.boxmin_x = col_boxmin_x[i];
            current.boxmin_y = col_boxmin_y[i];
            current.boxmin_z = col_boxmin_z[i];
            current.calE = col_calE[i];
            current.closestslicecalE = col_closestslicecalE[i];
            current.closestslicemindist = col_closestslicemindist[i];
            current.closestsliceminfromback = col_closestsliceminfromback[i];
            current.closestsliceminfrombottom = col_closestsliceminfrombottom[i];
            current.closestsliceminfromeast = col_closestsliceminfromeast[i];
            current.closestsliceminfromfront = col_closestsliceminfromfront[i];
            current.closestsliceminfromtop = col_closestsliceminfromtop[i];
            current.closestsliceminfromwest = col_closestsliceminfromwest[i];
            current.closestslicenhit = col_closestslicenhit[i];
            current.closestslicetime = col_closestslicetime[i];
            current.cycle = col_cycle[i];
            current.endtime = col_endtime[i];
            current.firstcell = col_firstcell[i];
            current.firstplane = col_firstplane[i];
            current.fracnoiseE = col_fracnoiseE[i];
            current.fracnoisePE = col_fracnoisePE[i];
            current.lastcell = col_lastcell[i];
            current.lastplane = col_lastplane[i];
            current.meanpos_x = col_meanpos_x[i];
            current.meanpos_y = col_meanpos_y[i];
            current.meanpos_z = col_meanpos_z[i];
            current.meantime = col_meantime[i];
            current.ncalhit = col_ncalhit[i];
            current.ncellsfromedge = col_ncellsfromedge[i];
            current.ncontplanes = col_ncontplanes[i];
            current.nhit = col_nhit[i];
            current.nmiphit = col_nmiphit[i];
            current.nnoisehit = col_nnoisehit[i];
            current.nnonnoise = col_nnonnoise[i];
            current.starttime = col_starttime[i];
            current.tsd = col_tsd[i];
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
            std::vector<rec_slc>
           > from_hdf5(hid_t file) {
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;
        std::vector<rec_slc> content;
        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;

        _read_indices(file, col_run, col_subrun, col_evt);

        content.resize(col_run.size());

        std::vector<float> col_boxmax_x; /* boxmax.x column */
        dataset = H5Dopen(file, "/rec.slc/boxmax.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_boxmax_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_boxmax_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_boxmax_y; /* boxmax.y column */
        dataset = H5Dopen(file, "/rec.slc/boxmax.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_boxmax_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_boxmax_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_boxmax_z; /* boxmax.z column */
        dataset = H5Dopen(file, "/rec.slc/boxmax.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_boxmax_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_boxmax_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_boxmin_x; /* boxmin.x column */
        dataset = H5Dopen(file, "/rec.slc/boxmin.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_boxmin_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_boxmin_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_boxmin_y; /* boxmin.y column */
        dataset = H5Dopen(file, "/rec.slc/boxmin.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_boxmin_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_boxmin_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_boxmin_z; /* boxmin.z column */
        dataset = H5Dopen(file, "/rec.slc/boxmin.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_boxmin_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_boxmin_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_calE; /* calE column */
        dataset = H5Dopen(file, "/rec.slc/calE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_calE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_calE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_closestslicecalE; /* closestslicecalE column */
        dataset = H5Dopen(file, "/rec.slc/closestslicecalE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_closestslicecalE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_closestslicecalE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_closestslicemindist; /* closestslicemindist column */
        dataset = H5Dopen(file, "/rec.slc/closestslicemindist", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_closestslicemindist.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_closestslicemindist.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_closestsliceminfromback; /* closestsliceminfromback column */
        dataset = H5Dopen(file, "/rec.slc/closestsliceminfromback", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_closestsliceminfromback.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_closestsliceminfromback.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_closestsliceminfrombottom; /* closestsliceminfrombottom column */
        dataset = H5Dopen(file, "/rec.slc/closestsliceminfrombottom", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_closestsliceminfrombottom.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_closestsliceminfrombottom.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_closestsliceminfromeast; /* closestsliceminfromeast column */
        dataset = H5Dopen(file, "/rec.slc/closestsliceminfromeast", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_closestsliceminfromeast.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_closestsliceminfromeast.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_closestsliceminfromfront; /* closestsliceminfromfront column */
        dataset = H5Dopen(file, "/rec.slc/closestsliceminfromfront", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_closestsliceminfromfront.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_closestsliceminfromfront.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_closestsliceminfromtop; /* closestsliceminfromtop column */
        dataset = H5Dopen(file, "/rec.slc/closestsliceminfromtop", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_closestsliceminfromtop.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_closestsliceminfromtop.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_closestsliceminfromwest; /* closestsliceminfromwest column */
        dataset = H5Dopen(file, "/rec.slc/closestsliceminfromwest", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_closestsliceminfromwest.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_closestsliceminfromwest.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_closestslicenhit; /* closestslicenhit column */
        dataset = H5Dopen(file, "/rec.slc/closestslicenhit", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_closestslicenhit.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_closestslicenhit.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_closestslicetime; /* closestslicetime column */
        dataset = H5Dopen(file, "/rec.slc/closestslicetime", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_closestslicetime.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_closestslicetime.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.slc/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_endtime; /* endtime column */
        dataset = H5Dopen(file, "/rec.slc/endtime", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_endtime.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_endtime.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_firstcell; /* firstcell column */
        dataset = H5Dopen(file, "/rec.slc/firstcell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_firstcell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_firstcell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_firstplane; /* firstplane column */
        dataset = H5Dopen(file, "/rec.slc/firstplane", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_firstplane.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_firstplane.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_fracnoiseE; /* fracnoiseE column */
        dataset = H5Dopen(file, "/rec.slc/fracnoiseE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_fracnoiseE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_fracnoiseE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_fracnoisePE; /* fracnoisePE column */
        dataset = H5Dopen(file, "/rec.slc/fracnoisePE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_fracnoisePE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_fracnoisePE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_lastcell; /* lastcell column */
        dataset = H5Dopen(file, "/rec.slc/lastcell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_lastcell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_lastcell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_lastplane; /* lastplane column */
        dataset = H5Dopen(file, "/rec.slc/lastplane", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_lastplane.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_lastplane.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_meanpos_x; /* meanpos.x column */
        dataset = H5Dopen(file, "/rec.slc/meanpos.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_meanpos_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_meanpos_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_meanpos_y; /* meanpos.y column */
        dataset = H5Dopen(file, "/rec.slc/meanpos.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_meanpos_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_meanpos_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_meanpos_z; /* meanpos.z column */
        dataset = H5Dopen(file, "/rec.slc/meanpos.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_meanpos_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_meanpos_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_meantime; /* meantime column */
        dataset = H5Dopen(file, "/rec.slc/meantime", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_meantime.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_meantime.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_ncalhit; /* ncalhit column */
        dataset = H5Dopen(file, "/rec.slc/ncalhit", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ncalhit.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ncalhit.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_ncellsfromedge; /* ncellsfromedge column */
        dataset = H5Dopen(file, "/rec.slc/ncellsfromedge", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ncellsfromedge.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ncellsfromedge.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_ncontplanes; /* ncontplanes column */
        dataset = H5Dopen(file, "/rec.slc/ncontplanes", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ncontplanes.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ncontplanes.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nhit; /* nhit column */
        dataset = H5Dopen(file, "/rec.slc/nhit", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nhit.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nhit.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nmiphit; /* nmiphit column */
        dataset = H5Dopen(file, "/rec.slc/nmiphit", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nmiphit.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nmiphit.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nnoisehit; /* nnoisehit column */
        dataset = H5Dopen(file, "/rec.slc/nnoisehit", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nnoisehit.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nnoisehit.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nnonnoise; /* nnonnoise column */
        dataset = H5Dopen(file, "/rec.slc/nnonnoise", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nnonnoise.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nnonnoise.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_starttime; /* starttime column */
        dataset = H5Dopen(file, "/rec.slc/starttime", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_starttime.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_starttime.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_tsd; /* tsd column */
        dataset = H5Dopen(file, "/rec.slc/tsd", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tsd.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tsd.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.slc/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            content[i].boxmax_x = col_boxmax_x[i];
            content[i].boxmax_y = col_boxmax_y[i];
            content[i].boxmax_z = col_boxmax_z[i];
            content[i].boxmin_x = col_boxmin_x[i];
            content[i].boxmin_y = col_boxmin_y[i];
            content[i].boxmin_z = col_boxmin_z[i];
            content[i].calE = col_calE[i];
            content[i].closestslicecalE = col_closestslicecalE[i];
            content[i].closestslicemindist = col_closestslicemindist[i];
            content[i].closestsliceminfromback = col_closestsliceminfromback[i];
            content[i].closestsliceminfrombottom = col_closestsliceminfrombottom[i];
            content[i].closestsliceminfromeast = col_closestsliceminfromeast[i];
            content[i].closestsliceminfromfront = col_closestsliceminfromfront[i];
            content[i].closestsliceminfromtop = col_closestsliceminfromtop[i];
            content[i].closestsliceminfromwest = col_closestsliceminfromwest[i];
            content[i].closestslicenhit = col_closestslicenhit[i];
            content[i].closestslicetime = col_closestslicetime[i];
            content[i].cycle = col_cycle[i];
            content[i].endtime = col_endtime[i];
            content[i].firstcell = col_firstcell[i];
            content[i].firstplane = col_firstplane[i];
            content[i].fracnoiseE = col_fracnoiseE[i];
            content[i].fracnoisePE = col_fracnoisePE[i];
            content[i].lastcell = col_lastcell[i];
            content[i].lastplane = col_lastplane[i];
            content[i].meanpos_x = col_meanpos_x[i];
            content[i].meanpos_y = col_meanpos_y[i];
            content[i].meanpos_z = col_meanpos_z[i];
            content[i].meantime = col_meantime[i];
            content[i].ncalhit = col_ncalhit[i];
            content[i].ncellsfromedge = col_ncellsfromedge[i];
            content[i].ncontplanes = col_ncontplanes[i];
            content[i].nhit = col_nhit[i];
            content[i].nmiphit = col_nmiphit[i];
            content[i].nnoisehit = col_nnoisehit[i];
            content[i].nnonnoise = col_nnonnoise[i];
            content[i].starttime = col_starttime[i];
            content[i].tsd = col_tsd[i];
            content[i].subevt = col_subevt[i];
            
        }

        return { col_run, col_subrun, col_evt, content };
    }

    static std::tuple<
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<rec_slc>
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
        dataset = H5Dopen(file, "/rec.slc/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        runs.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(runs.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        dataset = H5Dopen(file, "/rec.slc/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        subruns.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(subruns.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        dataset = H5Dopen(file, "/rec.slc/evt", H5P_DEFAULT);
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