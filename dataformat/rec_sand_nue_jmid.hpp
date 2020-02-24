/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_SAND_NUE_JMID_HPP_
#define __REC_SAND_NUE_JMID_HPP_

#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_sand_nue_jmid structure for the 
 * "/rec.sand.nue.jmid" table in corresponding HDF5 files.
 */
struct rec_sand_nue_jmid {

    float ann; /* ann column */
    float annE; /* annE column */
    float annEL; /* annEL column */
    float annENoCos; /* annENoCos column */
    float annEPi0; /* annEPi0 column */
    float annEPi0EL; /* annEPi0EL column */
    float annNoCos; /* annNoCos column */
    float costheta; /* costheta column */
    std::int32_t cycle; /* cycle column */
    float dedx0; /* dedx0 column */
    float dedx1; /* dedx1 column */
    float dedx2; /* dedx2 column */
    float dedx3; /* dedx3 column */
    float dedx4; /* dedx4 column */
    float dedx5; /* dedx5 column */
    float eellll; /* eellll column */
    float eelllt; /* eelllt column */
    float eglll; /* eglll column */
    float egllt; /* egllt column */
    float elll; /* elll column */
    float ellt; /* ellt column */
    float emulll; /* emulll column */
    float emullt; /* emullt column */
    float enlll; /* enlll column */
    float enllt; /* enllt column */
    float epi0lll; /* epi0lll column */
    float epi0llt; /* epi0llt column */
    float epilll; /* epilll column */
    float epillt; /* epillt column */
    float eplll; /* eplll column */
    float epllt; /* epllt column */
    float gap; /* gap column */
    std::int32_t ismuon; /* ismuon column */
    float mulll; /* mulll column */
    float mullt; /* mullt column */
    float pi0mass; /* pi0mass column */
    float shwEFrac; /* shwEFrac column */
    float vtxgev; /* vtxgev column */
    std::uint16_t subevt; /* subevt column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & ann;
        ar & annE;
        ar & annEL;
        ar & annENoCos;
        ar & annEPi0;
        ar & annEPi0EL;
        ar & annNoCos;
        ar & costheta;
        ar & cycle;
        ar & dedx0;
        ar & dedx1;
        ar & dedx2;
        ar & dedx3;
        ar & dedx4;
        ar & dedx5;
        ar & eellll;
        ar & eelllt;
        ar & eglll;
        ar & egllt;
        ar & elll;
        ar & ellt;
        ar & emulll;
        ar & emullt;
        ar & enlll;
        ar & enllt;
        ar & epi0lll;
        ar & epi0llt;
        ar & epilll;
        ar & epillt;
        ar & eplll;
        ar & epllt;
        ar & gap;
        ar & ismuon;
        ar & mulll;
        ar & mullt;
        ar & pi0mass;
        ar & shwEFrac;
        ar & vtxgev;
        ar & subevt;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_sand_nue_jmid& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_sand_nue_jmid current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<float> col_ann; /* ann column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/ann", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ann.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ann.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_annE; /* annE column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/annE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_annE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_annE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_annEL; /* annEL column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/annEL", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_annEL.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_annEL.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_annENoCos; /* annENoCos column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/annENoCos", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_annENoCos.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_annENoCos.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_annEPi0; /* annEPi0 column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/annEPi0", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_annEPi0.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_annEPi0.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_annEPi0EL; /* annEPi0EL column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/annEPi0EL", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_annEPi0EL.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_annEPi0EL.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_annNoCos; /* annNoCos column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/annNoCos", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_annNoCos.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_annNoCos.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_costheta; /* costheta column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/costheta", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_costheta.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_costheta.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedx0; /* dedx0 column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/dedx0", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedx0.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedx0.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedx1; /* dedx1 column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/dedx1", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedx1.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedx1.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedx2; /* dedx2 column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/dedx2", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedx2.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedx2.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedx3; /* dedx3 column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/dedx3", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedx3.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedx3.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedx4; /* dedx4 column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/dedx4", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedx4.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedx4.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedx5; /* dedx5 column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/dedx5", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedx5.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedx5.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_eellll; /* eellll column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/eellll", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_eellll.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_eellll.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_eelllt; /* eelllt column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/eelllt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_eelllt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_eelllt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_eglll; /* eglll column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/eglll", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_eglll.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_eglll.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_egllt; /* egllt column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/egllt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_egllt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_egllt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_elll; /* elll column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/elll", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_elll.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_elll.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ellt; /* ellt column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/ellt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ellt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ellt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_emulll; /* emulll column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/emulll", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_emulll.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_emulll.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_emullt; /* emullt column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/emullt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_emullt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_emullt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_enlll; /* enlll column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/enlll", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_enlll.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_enlll.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_enllt; /* enllt column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/enllt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_enllt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_enllt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_epi0lll; /* epi0lll column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/epi0lll", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_epi0lll.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_epi0lll.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_epi0llt; /* epi0llt column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/epi0llt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_epi0llt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_epi0llt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_epilll; /* epilll column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/epilll", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_epilll.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_epilll.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_epillt; /* epillt column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/epillt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_epillt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_epillt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_eplll; /* eplll column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/eplll", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_eplll.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_eplll.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_epllt; /* epllt column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/epllt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_epllt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_epllt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_gap; /* gap column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/gap", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_gap.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_gap.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_ismuon; /* ismuon column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/ismuon", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ismuon.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ismuon.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_mulll; /* mulll column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/mulll", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_mulll.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_mulll.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_mullt; /* mullt column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/mullt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_mullt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_mullt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pi0mass; /* pi0mass column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/pi0mass", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pi0mass.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pi0mass.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_shwEFrac; /* shwEFrac column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/shwEFrac", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_shwEFrac.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_shwEFrac.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_vtxgev; /* vtxgev column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/vtxgev", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_vtxgev.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_vtxgev.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        /* column for run indices */
        std::vector<unsigned> col_run;
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_run.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_run.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        std::vector<unsigned> col_subrun;
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subrun.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subrun.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        std::vector<unsigned> col_evt;
        dataset = H5Dopen(file, "/rec.sand.nue.jmid/evt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.ann = col_ann[i];
            current.annE = col_annE[i];
            current.annEL = col_annEL[i];
            current.annENoCos = col_annENoCos[i];
            current.annEPi0 = col_annEPi0[i];
            current.annEPi0EL = col_annEPi0EL[i];
            current.annNoCos = col_annNoCos[i];
            current.costheta = col_costheta[i];
            current.cycle = col_cycle[i];
            current.dedx0 = col_dedx0[i];
            current.dedx1 = col_dedx1[i];
            current.dedx2 = col_dedx2[i];
            current.dedx3 = col_dedx3[i];
            current.dedx4 = col_dedx4[i];
            current.dedx5 = col_dedx5[i];
            current.eellll = col_eellll[i];
            current.eelllt = col_eelllt[i];
            current.eglll = col_eglll[i];
            current.egllt = col_egllt[i];
            current.elll = col_elll[i];
            current.ellt = col_ellt[i];
            current.emulll = col_emulll[i];
            current.emullt = col_emullt[i];
            current.enlll = col_enlll[i];
            current.enllt = col_enllt[i];
            current.epi0lll = col_epi0lll[i];
            current.epi0llt = col_epi0llt[i];
            current.epilll = col_epilll[i];
            current.epillt = col_epillt[i];
            current.eplll = col_eplll[i];
            current.epllt = col_epllt[i];
            current.gap = col_gap[i];
            current.ismuon = col_ismuon[i];
            current.mulll = col_mulll[i];
            current.mullt = col_mullt[i];
            current.pi0mass = col_pi0mass[i];
            current.shwEFrac = col_shwEFrac[i];
            current.vtxgev = col_vtxgev[i];
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