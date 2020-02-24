/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_VTX_ELASTIC_FUZZYK_PNG_BPF_MRDIF_LID_LID_HPP_
#define __REC_VTX_ELASTIC_FUZZYK_PNG_BPF_MRDIF_LID_LID_HPP_

#include <tuple>
#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_vtx_elastic_fuzzyk_png_bpf_mrdif_lid_lid structure for the 
 * "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid" table in corresponding HDF5 files.
 */
struct rec_vtx_elastic_fuzzyk_png_bpf_mrdif_lid_lid {

    float ann; /* ann column */
    float anne; /* anne column */
    float annecos; /* annecos column */
    float annepi0; /* annepi0 column */
    float costheta; /* costheta column */
    std::int32_t cycle; /* cycle column */
    float dedx0; /* dedx0 column */
    float dedx1; /* dedx1 column */
    float dedx2; /* dedx2 column */
    float dedx3; /* dedx3 column */
    float dedx4; /* dedx4 column */
    float dedx5; /* dedx5 column */
    float dedxp0c0; /* dedxp0c0 column */
    float dedxp0c1; /* dedxp0c1 column */
    float dedxp1c0; /* dedxp1c0 column */
    float dedxp1c1; /* dedxp1c1 column */
    float dedxp2c0; /* dedxp2c0 column */
    float dedxp2c1; /* dedxp2c1 column */
    float dedxp3c0; /* dedxp3c0 column */
    float dedxp3c1; /* dedxp3c1 column */
    float dedxp4c0; /* dedxp4c0 column */
    float dedxp4c1; /* dedxp4c1 column */
    float dedxp5c0; /* dedxp5c0 column */
    float dedxp5c1; /* dedxp5c1 column */
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
    float invglll; /* invglll column */
    std::int32_t ismuon; /* ismuon column */
    float mulll; /* mulll column */
    float mullt; /* mullt column */
    float pi0mass; /* pi0mass column */
    std::uint32_t rec_vtx_elastic_fuzzyk_png_bpf_mrdif_idx; /* rec.vtx.elastic.fuzzyk.png.bpf.mrdif_idx column */
    std::uint32_t rec_vtx_elastic_fuzzyk_png_bpf_idx; /* rec.vtx.elastic.fuzzyk.png.bpf_idx column */
    std::uint32_t rec_vtx_elastic_fuzzyk_png_idx; /* rec.vtx.elastic.fuzzyk.png_idx column */
    std::uint32_t rec_vtx_elastic_idx; /* rec.vtx.elastic_idx column */
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
        ar & anne;
        ar & annecos;
        ar & annepi0;
        ar & costheta;
        ar & cycle;
        ar & dedx0;
        ar & dedx1;
        ar & dedx2;
        ar & dedx3;
        ar & dedx4;
        ar & dedx5;
        ar & dedxp0c0;
        ar & dedxp0c1;
        ar & dedxp1c0;
        ar & dedxp1c1;
        ar & dedxp2c0;
        ar & dedxp2c1;
        ar & dedxp3c0;
        ar & dedxp3c1;
        ar & dedxp4c0;
        ar & dedxp4c1;
        ar & dedxp5c0;
        ar & dedxp5c1;
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
        ar & invglll;
        ar & ismuon;
        ar & mulll;
        ar & mullt;
        ar & pi0mass;
        ar & rec_vtx_elastic_fuzzyk_png_bpf_mrdif_idx;
        ar & rec_vtx_elastic_fuzzyk_png_bpf_idx;
        ar & rec_vtx_elastic_fuzzyk_png_idx;
        ar & rec_vtx_elastic_idx;
        ar & shwEFrac;
        ar & vtxgev;
        ar & subevt;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_vtx_elastic_fuzzyk_png_bpf_mrdif_lid_lid& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_vtx_elastic_fuzzyk_png_bpf_mrdif_lid_lid current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;
        _read_indices(file, col_run, col_subrun, col_evt);

        std::vector<float> col_ann; /* ann column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/ann", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ann.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ann.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_anne; /* anne column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/anne", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_anne.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_anne.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_annecos; /* annecos column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/annecos", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_annecos.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_annecos.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_annepi0; /* annepi0 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/annepi0", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_annepi0.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_annepi0.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_costheta; /* costheta column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/costheta", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_costheta.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_costheta.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedx0; /* dedx0 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedx0", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedx0.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedx0.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedx1; /* dedx1 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedx1", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedx1.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedx1.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedx2; /* dedx2 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedx2", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedx2.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedx2.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedx3; /* dedx3 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedx3", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedx3.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedx3.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedx4; /* dedx4 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedx4", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedx4.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedx4.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedx5; /* dedx5 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedx5", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedx5.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedx5.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedxp0c0; /* dedxp0c0 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedxp0c0", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedxp0c0.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedxp0c0.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedxp0c1; /* dedxp0c1 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedxp0c1", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedxp0c1.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedxp0c1.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedxp1c0; /* dedxp1c0 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedxp1c0", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedxp1c0.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedxp1c0.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedxp1c1; /* dedxp1c1 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedxp1c1", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedxp1c1.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedxp1c1.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedxp2c0; /* dedxp2c0 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedxp2c0", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedxp2c0.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedxp2c0.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedxp2c1; /* dedxp2c1 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedxp2c1", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedxp2c1.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedxp2c1.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedxp3c0; /* dedxp3c0 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedxp3c0", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedxp3c0.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedxp3c0.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedxp3c1; /* dedxp3c1 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedxp3c1", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedxp3c1.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedxp3c1.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedxp4c0; /* dedxp4c0 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedxp4c0", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedxp4c0.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedxp4c0.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedxp4c1; /* dedxp4c1 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedxp4c1", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedxp4c1.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedxp4c1.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedxp5c0; /* dedxp5c0 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedxp5c0", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedxp5c0.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedxp5c0.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedxp5c1; /* dedxp5c1 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedxp5c1", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedxp5c1.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedxp5c1.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_eglll; /* eglll column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/eglll", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_eglll.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_eglll.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_egllt; /* egllt column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/egllt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_egllt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_egllt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_elll; /* elll column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/elll", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_elll.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_elll.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ellt; /* ellt column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/ellt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ellt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ellt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_emulll; /* emulll column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/emulll", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_emulll.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_emulll.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_emullt; /* emullt column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/emullt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_emullt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_emullt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_enlll; /* enlll column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/enlll", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_enlll.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_enlll.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_enllt; /* enllt column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/enllt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_enllt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_enllt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_epi0lll; /* epi0lll column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/epi0lll", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_epi0lll.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_epi0lll.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_epi0llt; /* epi0llt column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/epi0llt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_epi0llt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_epi0llt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_epilll; /* epilll column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/epilll", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_epilll.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_epilll.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_epillt; /* epillt column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/epillt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_epillt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_epillt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_eplll; /* eplll column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/eplll", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_eplll.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_eplll.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_epllt; /* epllt column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/epllt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_epllt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_epllt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_gap; /* gap column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/gap", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_gap.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_gap.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_invglll; /* invglll column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/invglll", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_invglll.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_invglll.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_ismuon; /* ismuon column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/ismuon", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ismuon.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ismuon.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_mulll; /* mulll column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/mulll", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_mulll.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_mulll.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_mullt; /* mullt column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/mullt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_mullt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_mullt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pi0mass; /* pi0mass column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/pi0mass", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pi0mass.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pi0mass.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_vtx_elastic_fuzzyk_png_bpf_mrdif_idx; /* rec.vtx.elastic.fuzzyk.png.bpf.mrdif_idx column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/rec.vtx.elastic.fuzzyk.png.bpf.mrdif_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_vtx_elastic_fuzzyk_png_bpf_mrdif_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_vtx_elastic_fuzzyk_png_bpf_mrdif_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_vtx_elastic_fuzzyk_png_bpf_idx; /* rec.vtx.elastic.fuzzyk.png.bpf_idx column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/rec.vtx.elastic.fuzzyk.png.bpf_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_vtx_elastic_fuzzyk_png_bpf_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_vtx_elastic_fuzzyk_png_bpf_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_vtx_elastic_fuzzyk_png_idx; /* rec.vtx.elastic.fuzzyk.png_idx column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/rec.vtx.elastic.fuzzyk.png_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_vtx_elastic_fuzzyk_png_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_vtx_elastic_fuzzyk_png_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_vtx_elastic_idx; /* rec.vtx.elastic_idx column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/rec.vtx.elastic_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_vtx_elastic_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_vtx_elastic_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_shwEFrac; /* shwEFrac column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/shwEFrac", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_shwEFrac.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_shwEFrac.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_vtxgev; /* vtxgev column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/vtxgev", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_vtxgev.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_vtxgev.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.ann = col_ann[i];
            current.anne = col_anne[i];
            current.annecos = col_annecos[i];
            current.annepi0 = col_annepi0[i];
            current.costheta = col_costheta[i];
            current.cycle = col_cycle[i];
            current.dedx0 = col_dedx0[i];
            current.dedx1 = col_dedx1[i];
            current.dedx2 = col_dedx2[i];
            current.dedx3 = col_dedx3[i];
            current.dedx4 = col_dedx4[i];
            current.dedx5 = col_dedx5[i];
            current.dedxp0c0 = col_dedxp0c0[i];
            current.dedxp0c1 = col_dedxp0c1[i];
            current.dedxp1c0 = col_dedxp1c0[i];
            current.dedxp1c1 = col_dedxp1c1[i];
            current.dedxp2c0 = col_dedxp2c0[i];
            current.dedxp2c1 = col_dedxp2c1[i];
            current.dedxp3c0 = col_dedxp3c0[i];
            current.dedxp3c1 = col_dedxp3c1[i];
            current.dedxp4c0 = col_dedxp4c0[i];
            current.dedxp4c1 = col_dedxp4c1[i];
            current.dedxp5c0 = col_dedxp5c0[i];
            current.dedxp5c1 = col_dedxp5c1[i];
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
            current.invglll = col_invglll[i];
            current.ismuon = col_ismuon[i];
            current.mulll = col_mulll[i];
            current.mullt = col_mullt[i];
            current.pi0mass = col_pi0mass[i];
            current.rec_vtx_elastic_fuzzyk_png_bpf_mrdif_idx = col_rec_vtx_elastic_fuzzyk_png_bpf_mrdif_idx[i];
            current.rec_vtx_elastic_fuzzyk_png_bpf_idx = col_rec_vtx_elastic_fuzzyk_png_bpf_idx[i];
            current.rec_vtx_elastic_fuzzyk_png_idx = col_rec_vtx_elastic_fuzzyk_png_idx[i];
            current.rec_vtx_elastic_idx = col_rec_vtx_elastic_idx[i];
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

    static std::tuple<
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<rec_vtx_elastic_fuzzyk_png_bpf_mrdif_lid_lid>
           > from_hdf5(hid_t file) {
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;
        std::vector<rec_vtx_elastic_fuzzyk_png_bpf_mrdif_lid_lid> content;
        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;

        _read_indices(file, col_run, col_subrun, col_evt);

        content.resize(col_run.size());

        std::vector<float> col_ann; /* ann column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/ann", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ann.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ann.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_anne; /* anne column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/anne", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_anne.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_anne.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_annecos; /* annecos column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/annecos", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_annecos.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_annecos.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_annepi0; /* annepi0 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/annepi0", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_annepi0.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_annepi0.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_costheta; /* costheta column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/costheta", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_costheta.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_costheta.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedx0; /* dedx0 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedx0", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedx0.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedx0.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedx1; /* dedx1 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedx1", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedx1.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedx1.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedx2; /* dedx2 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedx2", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedx2.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedx2.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedx3; /* dedx3 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedx3", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedx3.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedx3.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedx4; /* dedx4 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedx4", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedx4.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedx4.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedx5; /* dedx5 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedx5", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedx5.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedx5.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedxp0c0; /* dedxp0c0 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedxp0c0", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedxp0c0.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedxp0c0.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedxp0c1; /* dedxp0c1 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedxp0c1", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedxp0c1.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedxp0c1.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedxp1c0; /* dedxp1c0 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedxp1c0", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedxp1c0.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedxp1c0.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedxp1c1; /* dedxp1c1 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedxp1c1", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedxp1c1.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedxp1c1.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedxp2c0; /* dedxp2c0 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedxp2c0", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedxp2c0.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedxp2c0.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedxp2c1; /* dedxp2c1 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedxp2c1", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedxp2c1.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedxp2c1.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedxp3c0; /* dedxp3c0 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedxp3c0", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedxp3c0.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedxp3c0.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedxp3c1; /* dedxp3c1 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedxp3c1", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedxp3c1.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedxp3c1.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedxp4c0; /* dedxp4c0 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedxp4c0", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedxp4c0.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedxp4c0.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedxp4c1; /* dedxp4c1 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedxp4c1", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedxp4c1.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedxp4c1.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedxp5c0; /* dedxp5c0 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedxp5c0", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedxp5c0.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedxp5c0.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedxp5c1; /* dedxp5c1 column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/dedxp5c1", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedxp5c1.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedxp5c1.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_eglll; /* eglll column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/eglll", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_eglll.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_eglll.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_egllt; /* egllt column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/egllt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_egllt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_egllt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_elll; /* elll column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/elll", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_elll.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_elll.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ellt; /* ellt column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/ellt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ellt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ellt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_emulll; /* emulll column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/emulll", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_emulll.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_emulll.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_emullt; /* emullt column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/emullt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_emullt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_emullt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_enlll; /* enlll column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/enlll", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_enlll.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_enlll.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_enllt; /* enllt column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/enllt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_enllt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_enllt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_epi0lll; /* epi0lll column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/epi0lll", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_epi0lll.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_epi0lll.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_epi0llt; /* epi0llt column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/epi0llt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_epi0llt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_epi0llt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_epilll; /* epilll column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/epilll", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_epilll.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_epilll.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_epillt; /* epillt column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/epillt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_epillt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_epillt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_eplll; /* eplll column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/eplll", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_eplll.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_eplll.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_epllt; /* epllt column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/epllt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_epllt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_epllt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_gap; /* gap column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/gap", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_gap.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_gap.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_invglll; /* invglll column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/invglll", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_invglll.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_invglll.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_ismuon; /* ismuon column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/ismuon", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ismuon.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ismuon.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_mulll; /* mulll column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/mulll", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_mulll.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_mulll.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_mullt; /* mullt column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/mullt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_mullt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_mullt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pi0mass; /* pi0mass column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/pi0mass", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pi0mass.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pi0mass.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_vtx_elastic_fuzzyk_png_bpf_mrdif_idx; /* rec.vtx.elastic.fuzzyk.png.bpf.mrdif_idx column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/rec.vtx.elastic.fuzzyk.png.bpf.mrdif_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_vtx_elastic_fuzzyk_png_bpf_mrdif_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_vtx_elastic_fuzzyk_png_bpf_mrdif_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_vtx_elastic_fuzzyk_png_bpf_idx; /* rec.vtx.elastic.fuzzyk.png.bpf_idx column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/rec.vtx.elastic.fuzzyk.png.bpf_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_vtx_elastic_fuzzyk_png_bpf_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_vtx_elastic_fuzzyk_png_bpf_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_vtx_elastic_fuzzyk_png_idx; /* rec.vtx.elastic.fuzzyk.png_idx column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/rec.vtx.elastic.fuzzyk.png_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_vtx_elastic_fuzzyk_png_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_vtx_elastic_fuzzyk_png_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_vtx_elastic_idx; /* rec.vtx.elastic_idx column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/rec.vtx.elastic_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_vtx_elastic_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_vtx_elastic_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_shwEFrac; /* shwEFrac column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/shwEFrac", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_shwEFrac.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_shwEFrac.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_vtxgev; /* vtxgev column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/vtxgev", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_vtxgev.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_vtxgev.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            content[i].ann = col_ann[i];
            content[i].anne = col_anne[i];
            content[i].annecos = col_annecos[i];
            content[i].annepi0 = col_annepi0[i];
            content[i].costheta = col_costheta[i];
            content[i].cycle = col_cycle[i];
            content[i].dedx0 = col_dedx0[i];
            content[i].dedx1 = col_dedx1[i];
            content[i].dedx2 = col_dedx2[i];
            content[i].dedx3 = col_dedx3[i];
            content[i].dedx4 = col_dedx4[i];
            content[i].dedx5 = col_dedx5[i];
            content[i].dedxp0c0 = col_dedxp0c0[i];
            content[i].dedxp0c1 = col_dedxp0c1[i];
            content[i].dedxp1c0 = col_dedxp1c0[i];
            content[i].dedxp1c1 = col_dedxp1c1[i];
            content[i].dedxp2c0 = col_dedxp2c0[i];
            content[i].dedxp2c1 = col_dedxp2c1[i];
            content[i].dedxp3c0 = col_dedxp3c0[i];
            content[i].dedxp3c1 = col_dedxp3c1[i];
            content[i].dedxp4c0 = col_dedxp4c0[i];
            content[i].dedxp4c1 = col_dedxp4c1[i];
            content[i].dedxp5c0 = col_dedxp5c0[i];
            content[i].dedxp5c1 = col_dedxp5c1[i];
            content[i].eglll = col_eglll[i];
            content[i].egllt = col_egllt[i];
            content[i].elll = col_elll[i];
            content[i].ellt = col_ellt[i];
            content[i].emulll = col_emulll[i];
            content[i].emullt = col_emullt[i];
            content[i].enlll = col_enlll[i];
            content[i].enllt = col_enllt[i];
            content[i].epi0lll = col_epi0lll[i];
            content[i].epi0llt = col_epi0llt[i];
            content[i].epilll = col_epilll[i];
            content[i].epillt = col_epillt[i];
            content[i].eplll = col_eplll[i];
            content[i].epllt = col_epllt[i];
            content[i].gap = col_gap[i];
            content[i].invglll = col_invglll[i];
            content[i].ismuon = col_ismuon[i];
            content[i].mulll = col_mulll[i];
            content[i].mullt = col_mullt[i];
            content[i].pi0mass = col_pi0mass[i];
            content[i].rec_vtx_elastic_fuzzyk_png_bpf_mrdif_idx = col_rec_vtx_elastic_fuzzyk_png_bpf_mrdif_idx[i];
            content[i].rec_vtx_elastic_fuzzyk_png_bpf_idx = col_rec_vtx_elastic_fuzzyk_png_bpf_idx[i];
            content[i].rec_vtx_elastic_fuzzyk_png_idx = col_rec_vtx_elastic_fuzzyk_png_idx[i];
            content[i].rec_vtx_elastic_idx = col_rec_vtx_elastic_idx[i];
            content[i].shwEFrac = col_shwEFrac[i];
            content[i].vtxgev = col_vtxgev[i];
            content[i].subevt = col_subevt[i];
            
        }

        return { col_run, col_subrun, col_evt, content };
    }

    static std::tuple<
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<rec_vtx_elastic_fuzzyk_png_bpf_mrdif_lid_lid>
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
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        runs.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(runs.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        subruns.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(subruns.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.bpf.mrdif.lid.lid/evt", H5P_DEFAULT);
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