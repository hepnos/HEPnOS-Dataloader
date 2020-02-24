/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __NEUTRINO_BEAM_HPP_
#define __NEUTRINO_BEAM_HPP_

#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated neutrino_beam structure for the 
 * "/neutrino.beam" table in corresponding HDF5 files.
 */
struct neutrino_beam {

    std::int32_t cycle; /* cycle column */
    float dk2gen; /* dk2gen column */
    float dk2vtx; /* dk2vtx column */
    float gen2vtx; /* gen2vtx column */
    float mupare; /* mupare column */
    float muparp_x; /* muparp.x column */
    float muparp_y; /* muparp.y column */
    float muparp_z; /* muparp.z column */
    std::int32_t ndecay; /* ndecay column */
    float necm; /* necm column */
    float nimpwt; /* nimpwt column */
    float pdp_x; /* pdp.x column */
    float pdp_y; /* pdp.y column */
    float pdp_z; /* pdp.z column */
    std::int32_t potnum; /* potnum column */
    float ppdxdz; /* ppdxdz column */
    float ppdydz; /* ppdydz column */
    float ppenergy; /* ppenergy column */
    std::int32_t ppmedium; /* ppmedium column */
    float pppz; /* pppz column */
    float ppv_x; /* ppv.x column */
    float ppv_y; /* ppv.y column */
    float ppv_z; /* ppv.z column */
    std::int32_t ptype; /* ptype column */
    float runjob; /* runjob column */
    std::int32_t tgen; /* tgen column */
    std::int32_t tgptype; /* tgptype column */
    float tp_x; /* tp.x column */
    float tp_y; /* tp.y column */
    float tp_z; /* tp.z column */
    std::int32_t tptype; /* tptype column */
    float tv_x; /* tv.x column */
    float tv_y; /* tv.y column */
    float tv_z; /* tv.z column */
    float v_x; /* v.x column */
    float v_y; /* v.y column */
    float v_z; /* v.z column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & cycle;
        ar & dk2gen;
        ar & dk2vtx;
        ar & gen2vtx;
        ar & mupare;
        ar & muparp_x;
        ar & muparp_y;
        ar & muparp_z;
        ar & ndecay;
        ar & necm;
        ar & nimpwt;
        ar & pdp_x;
        ar & pdp_y;
        ar & pdp_z;
        ar & potnum;
        ar & ppdxdz;
        ar & ppdydz;
        ar & ppenergy;
        ar & ppmedium;
        ar & pppz;
        ar & ppv_x;
        ar & ppv_y;
        ar & ppv_z;
        ar & ptype;
        ar & runjob;
        ar & tgen;
        ar & tgptype;
        ar & tp_x;
        ar & tp_y;
        ar & tp_z;
        ar & tptype;
        ar & tv_x;
        ar & tv_y;
        ar & tv_z;
        ar & v_x;
        ar & v_y;
        ar & v_z;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const neutrino_beam& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        neutrino_beam current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/neutrino.beam/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dk2gen; /* dk2gen column */
        dataset = H5Dopen(file, "/neutrino.beam/dk2gen", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dk2gen.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dk2gen.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dk2vtx; /* dk2vtx column */
        dataset = H5Dopen(file, "/neutrino.beam/dk2vtx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dk2vtx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dk2vtx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_gen2vtx; /* gen2vtx column */
        dataset = H5Dopen(file, "/neutrino.beam/gen2vtx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_gen2vtx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_gen2vtx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_mupare; /* mupare column */
        dataset = H5Dopen(file, "/neutrino.beam/mupare", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_mupare.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_mupare.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_muparp_x; /* muparp.x column */
        dataset = H5Dopen(file, "/neutrino.beam/muparp.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muparp_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muparp_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_muparp_y; /* muparp.y column */
        dataset = H5Dopen(file, "/neutrino.beam/muparp.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muparp_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muparp_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_muparp_z; /* muparp.z column */
        dataset = H5Dopen(file, "/neutrino.beam/muparp.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muparp_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muparp_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_ndecay; /* ndecay column */
        dataset = H5Dopen(file, "/neutrino.beam/ndecay", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndecay.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndecay.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_necm; /* necm column */
        dataset = H5Dopen(file, "/neutrino.beam/necm", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_necm.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_necm.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_nimpwt; /* nimpwt column */
        dataset = H5Dopen(file, "/neutrino.beam/nimpwt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nimpwt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nimpwt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pdp_x; /* pdp.x column */
        dataset = H5Dopen(file, "/neutrino.beam/pdp.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pdp_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pdp_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pdp_y; /* pdp.y column */
        dataset = H5Dopen(file, "/neutrino.beam/pdp.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pdp_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pdp_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pdp_z; /* pdp.z column */
        dataset = H5Dopen(file, "/neutrino.beam/pdp.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pdp_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pdp_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_potnum; /* potnum column */
        dataset = H5Dopen(file, "/neutrino.beam/potnum", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_potnum.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_potnum.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ppdxdz; /* ppdxdz column */
        dataset = H5Dopen(file, "/neutrino.beam/ppdxdz", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ppdxdz.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ppdxdz.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ppdydz; /* ppdydz column */
        dataset = H5Dopen(file, "/neutrino.beam/ppdydz", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ppdydz.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ppdydz.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ppenergy; /* ppenergy column */
        dataset = H5Dopen(file, "/neutrino.beam/ppenergy", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ppenergy.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ppenergy.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_ppmedium; /* ppmedium column */
        dataset = H5Dopen(file, "/neutrino.beam/ppmedium", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ppmedium.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ppmedium.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pppz; /* pppz column */
        dataset = H5Dopen(file, "/neutrino.beam/pppz", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pppz.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pppz.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ppv_x; /* ppv.x column */
        dataset = H5Dopen(file, "/neutrino.beam/ppv.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ppv_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ppv_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ppv_y; /* ppv.y column */
        dataset = H5Dopen(file, "/neutrino.beam/ppv.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ppv_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ppv_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ppv_z; /* ppv.z column */
        dataset = H5Dopen(file, "/neutrino.beam/ppv.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ppv_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ppv_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_ptype; /* ptype column */
        dataset = H5Dopen(file, "/neutrino.beam/ptype", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ptype.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ptype.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_runjob; /* runjob column */
        dataset = H5Dopen(file, "/neutrino.beam/runjob", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_runjob.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_runjob.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_tgen; /* tgen column */
        dataset = H5Dopen(file, "/neutrino.beam/tgen", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tgen.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tgen.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_tgptype; /* tgptype column */
        dataset = H5Dopen(file, "/neutrino.beam/tgptype", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tgptype.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tgptype.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_tp_x; /* tp.x column */
        dataset = H5Dopen(file, "/neutrino.beam/tp.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tp_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tp_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_tp_y; /* tp.y column */
        dataset = H5Dopen(file, "/neutrino.beam/tp.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tp_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tp_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_tp_z; /* tp.z column */
        dataset = H5Dopen(file, "/neutrino.beam/tp.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tp_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tp_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_tptype; /* tptype column */
        dataset = H5Dopen(file, "/neutrino.beam/tptype", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tptype.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tptype.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_tv_x; /* tv.x column */
        dataset = H5Dopen(file, "/neutrino.beam/tv.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tv_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tv_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_tv_y; /* tv.y column */
        dataset = H5Dopen(file, "/neutrino.beam/tv.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tv_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tv_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_tv_z; /* tv.z column */
        dataset = H5Dopen(file, "/neutrino.beam/tv.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tv_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tv_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_v_x; /* v.x column */
        dataset = H5Dopen(file, "/neutrino.beam/v.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_v_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_v_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_v_y; /* v.y column */
        dataset = H5Dopen(file, "/neutrino.beam/v.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_v_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_v_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_v_z; /* v.z column */
        dataset = H5Dopen(file, "/neutrino.beam/v.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_v_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_v_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        /* column for run indices */
        std::vector<unsigned> col_run;
        dataset = H5Dopen(file, "/neutrino.beam/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_run.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_run.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        std::vector<unsigned> col_subrun;
        dataset = H5Dopen(file, "/neutrino.beam/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subrun.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subrun.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        std::vector<unsigned> col_evt;
        dataset = H5Dopen(file, "/neutrino.beam/evt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.cycle = col_cycle[i];
            current.dk2gen = col_dk2gen[i];
            current.dk2vtx = col_dk2vtx[i];
            current.gen2vtx = col_gen2vtx[i];
            current.mupare = col_mupare[i];
            current.muparp_x = col_muparp_x[i];
            current.muparp_y = col_muparp_y[i];
            current.muparp_z = col_muparp_z[i];
            current.ndecay = col_ndecay[i];
            current.necm = col_necm[i];
            current.nimpwt = col_nimpwt[i];
            current.pdp_x = col_pdp_x[i];
            current.pdp_y = col_pdp_y[i];
            current.pdp_z = col_pdp_z[i];
            current.potnum = col_potnum[i];
            current.ppdxdz = col_ppdxdz[i];
            current.ppdydz = col_ppdydz[i];
            current.ppenergy = col_ppenergy[i];
            current.ppmedium = col_ppmedium[i];
            current.pppz = col_pppz[i];
            current.ppv_x = col_ppv_x[i];
            current.ppv_y = col_ppv_y[i];
            current.ppv_z = col_ppv_z[i];
            current.ptype = col_ptype[i];
            current.runjob = col_runjob[i];
            current.tgen = col_tgen[i];
            current.tgptype = col_tgptype[i];
            current.tp_x = col_tp_x[i];
            current.tp_y = col_tp_y[i];
            current.tp_z = col_tp_z[i];
            current.tptype = col_tptype[i];
            current.tv_x = col_tv_x[i];
            current.tv_y = col_tv_y[i];
            current.tv_z = col_tv_z[i];
            current.v_x = col_v_x[i];
            current.v_y = col_v_y[i];
            current.v_z = col_v_z[i];
            
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