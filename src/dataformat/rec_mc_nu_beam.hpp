/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_MC_NU_BEAM_HPP_
#define __REC_MC_NU_BEAM_HPP_

#include <tuple>
#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_mc_nu_beam structure for the 
 * "/rec.mc.nu.beam" table in corresponding HDF5 files.
 */
struct rec_mc_nu_beam {

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
    std::uint32_t rec_mc_nu_idx; /* rec.mc.nu_idx column */
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
    std::uint16_t subevt; /* subevt column */
    
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
        ar & rec_mc_nu_idx;
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
        ar & subevt;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_mc_nu_beam& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_mc_nu_beam current;
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
        dataset = H5Dopen(file, "/rec.mc.nu.beam/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dk2gen; /* dk2gen column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/dk2gen", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dk2gen.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dk2gen.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dk2vtx; /* dk2vtx column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/dk2vtx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dk2vtx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dk2vtx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_gen2vtx; /* gen2vtx column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/gen2vtx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_gen2vtx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_gen2vtx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_mupare; /* mupare column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/mupare", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_mupare.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_mupare.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_muparp_x; /* muparp.x column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/muparp.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muparp_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muparp_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_muparp_y; /* muparp.y column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/muparp.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muparp_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muparp_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_muparp_z; /* muparp.z column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/muparp.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muparp_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muparp_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_ndecay; /* ndecay column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/ndecay", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndecay.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndecay.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_necm; /* necm column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/necm", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_necm.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_necm.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_nimpwt; /* nimpwt column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/nimpwt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nimpwt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nimpwt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pdp_x; /* pdp.x column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/pdp.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pdp_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pdp_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pdp_y; /* pdp.y column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/pdp.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pdp_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pdp_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pdp_z; /* pdp.z column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/pdp.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pdp_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pdp_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_potnum; /* potnum column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/potnum", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_potnum.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_potnum.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ppdxdz; /* ppdxdz column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/ppdxdz", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ppdxdz.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ppdxdz.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ppdydz; /* ppdydz column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/ppdydz", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ppdydz.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ppdydz.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ppenergy; /* ppenergy column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/ppenergy", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ppenergy.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ppenergy.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_ppmedium; /* ppmedium column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/ppmedium", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ppmedium.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ppmedium.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pppz; /* pppz column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/pppz", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pppz.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pppz.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ppv_x; /* ppv.x column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/ppv.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ppv_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ppv_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ppv_y; /* ppv.y column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/ppv.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ppv_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ppv_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ppv_z; /* ppv.z column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/ppv.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ppv_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ppv_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_ptype; /* ptype column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/ptype", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ptype.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ptype.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_mc_nu_idx; /* rec.mc.nu_idx column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/rec.mc.nu_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_mc_nu_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_mc_nu_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_runjob; /* runjob column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/runjob", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_runjob.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_runjob.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_tgen; /* tgen column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/tgen", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tgen.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tgen.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_tgptype; /* tgptype column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/tgptype", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tgptype.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tgptype.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_tp_x; /* tp.x column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/tp.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tp_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tp_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_tp_y; /* tp.y column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/tp.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tp_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tp_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_tp_z; /* tp.z column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/tp.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tp_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tp_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_tptype; /* tptype column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/tptype", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tptype.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tptype.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_tv_x; /* tv.x column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/tv.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tv_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tv_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_tv_y; /* tv.y column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/tv.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tv_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tv_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_tv_z; /* tv.z column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/tv.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tv_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tv_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_v_x; /* v.x column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/v.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_v_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_v_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_v_y; /* v.y column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/v.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_v_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_v_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_v_z; /* v.z column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/v.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_v_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_v_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
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
            current.rec_mc_nu_idx = col_rec_mc_nu_idx[i];
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
            std::vector<rec_mc_nu_beam>
           > from_hdf5(hid_t file) {
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;
        std::vector<rec_mc_nu_beam> content;
        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;

        _read_indices(file, col_run, col_subrun, col_evt);

        content.resize(col_run.size());

        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dk2gen; /* dk2gen column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/dk2gen", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dk2gen.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dk2gen.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dk2vtx; /* dk2vtx column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/dk2vtx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dk2vtx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dk2vtx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_gen2vtx; /* gen2vtx column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/gen2vtx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_gen2vtx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_gen2vtx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_mupare; /* mupare column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/mupare", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_mupare.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_mupare.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_muparp_x; /* muparp.x column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/muparp.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muparp_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muparp_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_muparp_y; /* muparp.y column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/muparp.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muparp_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muparp_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_muparp_z; /* muparp.z column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/muparp.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muparp_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muparp_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_ndecay; /* ndecay column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/ndecay", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndecay.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndecay.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_necm; /* necm column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/necm", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_necm.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_necm.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_nimpwt; /* nimpwt column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/nimpwt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nimpwt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nimpwt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pdp_x; /* pdp.x column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/pdp.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pdp_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pdp_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pdp_y; /* pdp.y column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/pdp.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pdp_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pdp_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pdp_z; /* pdp.z column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/pdp.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pdp_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pdp_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_potnum; /* potnum column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/potnum", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_potnum.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_potnum.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ppdxdz; /* ppdxdz column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/ppdxdz", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ppdxdz.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ppdxdz.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ppdydz; /* ppdydz column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/ppdydz", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ppdydz.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ppdydz.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ppenergy; /* ppenergy column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/ppenergy", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ppenergy.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ppenergy.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_ppmedium; /* ppmedium column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/ppmedium", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ppmedium.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ppmedium.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pppz; /* pppz column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/pppz", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pppz.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pppz.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ppv_x; /* ppv.x column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/ppv.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ppv_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ppv_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ppv_y; /* ppv.y column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/ppv.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ppv_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ppv_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ppv_z; /* ppv.z column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/ppv.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ppv_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ppv_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_ptype; /* ptype column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/ptype", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ptype.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ptype.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_mc_nu_idx; /* rec.mc.nu_idx column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/rec.mc.nu_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_mc_nu_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_mc_nu_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_runjob; /* runjob column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/runjob", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_runjob.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_runjob.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_tgen; /* tgen column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/tgen", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tgen.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tgen.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_tgptype; /* tgptype column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/tgptype", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tgptype.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tgptype.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_tp_x; /* tp.x column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/tp.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tp_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tp_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_tp_y; /* tp.y column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/tp.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tp_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tp_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_tp_z; /* tp.z column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/tp.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tp_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tp_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_tptype; /* tptype column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/tptype", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tptype.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tptype.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_tv_x; /* tv.x column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/tv.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tv_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tv_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_tv_y; /* tv.y column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/tv.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tv_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tv_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_tv_z; /* tv.z column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/tv.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tv_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tv_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_v_x; /* v.x column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/v.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_v_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_v_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_v_y; /* v.y column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/v.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_v_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_v_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_v_z; /* v.z column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/v.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_v_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_v_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            content[i].cycle = col_cycle[i];
            content[i].dk2gen = col_dk2gen[i];
            content[i].dk2vtx = col_dk2vtx[i];
            content[i].gen2vtx = col_gen2vtx[i];
            content[i].mupare = col_mupare[i];
            content[i].muparp_x = col_muparp_x[i];
            content[i].muparp_y = col_muparp_y[i];
            content[i].muparp_z = col_muparp_z[i];
            content[i].ndecay = col_ndecay[i];
            content[i].necm = col_necm[i];
            content[i].nimpwt = col_nimpwt[i];
            content[i].pdp_x = col_pdp_x[i];
            content[i].pdp_y = col_pdp_y[i];
            content[i].pdp_z = col_pdp_z[i];
            content[i].potnum = col_potnum[i];
            content[i].ppdxdz = col_ppdxdz[i];
            content[i].ppdydz = col_ppdydz[i];
            content[i].ppenergy = col_ppenergy[i];
            content[i].ppmedium = col_ppmedium[i];
            content[i].pppz = col_pppz[i];
            content[i].ppv_x = col_ppv_x[i];
            content[i].ppv_y = col_ppv_y[i];
            content[i].ppv_z = col_ppv_z[i];
            content[i].ptype = col_ptype[i];
            content[i].rec_mc_nu_idx = col_rec_mc_nu_idx[i];
            content[i].runjob = col_runjob[i];
            content[i].tgen = col_tgen[i];
            content[i].tgptype = col_tgptype[i];
            content[i].tp_x = col_tp_x[i];
            content[i].tp_y = col_tp_y[i];
            content[i].tp_z = col_tp_z[i];
            content[i].tptype = col_tptype[i];
            content[i].tv_x = col_tv_x[i];
            content[i].tv_y = col_tv_y[i];
            content[i].tv_z = col_tv_z[i];
            content[i].v_x = col_v_x[i];
            content[i].v_y = col_v_y[i];
            content[i].v_z = col_v_z[i];
            content[i].subevt = col_subevt[i];
            
        }

        return { col_run, col_subrun, col_evt, content };
    }

    static std::tuple<
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<rec_mc_nu_beam>
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
        dataset = H5Dopen(file, "/rec.mc.nu.beam/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        runs.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(runs.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        subruns.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(subruns.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        dataset = H5Dopen(file, "/rec.mc.nu.beam/evt", H5P_DEFAULT);
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