/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_MC_NU_HPP_
#define __REC_MC_NU_HPP_

#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_mc_nu structure for the 
 * "/rec.mc.nu" table in corresponding HDF5 files.
 */
struct rec_mc_nu {

    float E; /* E column */
    float L; /* L column */
    float W2; /* W2 column */
    std::int32_t cycle; /* cycle column */
    float eff; /* eff column */
    float genweight; /* genweight column */
    std::int32_t hitnuc; /* hitnuc column */
    std::int32_t inttype; /* inttype column */
    std::int32_t mode; /* mode column */
    std::uint32_t nhitslc; /* nhitslc column */
    std::uint32_t nhittot; /* nhittot column */
    std::uint32_t nneutron; /* nneutron column */
    std::uint32_t npiminus; /* npiminus column */
    std::uint32_t npiplus; /* npiplus column */
    std::uint32_t npizero; /* npizero column */
    std::uint32_t nproton; /* nproton column */
    float p_E; /* p.E column */
    float p_px; /* p.px column */
    float p_py; /* p.py column */
    float p_pz; /* p.pz column */
    float pur; /* pur column */
    float q2; /* q2 column */
    std::uint32_t rec_mc_nu_idx; /* rec.mc.nu_idx column */
    std::int32_t resnum; /* resnum column */
    std::int32_t tgtA; /* tgtA column */
    std::int32_t tgtZ; /* tgtZ column */
    float time; /* time column */
    float visE; /* visE column */
    float visEBirks; /* visEBirks column */
    float visENeutron; /* visENeutron column */
    float visENeutronBirks; /* visENeutronBirks column */
    float visEinslc; /* visEinslc column */
    float visEinslcBirks; /* visEinslcBirks column */
    float visEinslcNeutron; /* visEinslcNeutron column */
    float visEinslcNeutronBirks; /* visEinslcNeutronBirks column */
    float vtx_x; /* vtx.x column */
    float vtx_y; /* vtx.y column */
    float vtx_z; /* vtx.z column */
    float woscdumb; /* woscdumb column */
    float x; /* x column */
    float xsec; /* xsec column */
    float y; /* y column */
    std::uint16_t generator; /* generator column */
    std::uint16_t iscc; /* iscc column */
    std::uint16_t ischarm; /* ischarm column */
    std::uint16_t isseaquark; /* isseaquark column */
    std::uint16_t isvtxcont; /* isvtxcont column */
    std::int16_t pdg; /* pdg column */
    std::int16_t pdgorig; /* pdgorig column */
    std::uint16_t subevt; /* subevt column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & E;
        ar & L;
        ar & W2;
        ar & cycle;
        ar & eff;
        ar & genweight;
        ar & hitnuc;
        ar & inttype;
        ar & mode;
        ar & nhitslc;
        ar & nhittot;
        ar & nneutron;
        ar & npiminus;
        ar & npiplus;
        ar & npizero;
        ar & nproton;
        ar & p_E;
        ar & p_px;
        ar & p_py;
        ar & p_pz;
        ar & pur;
        ar & q2;
        ar & rec_mc_nu_idx;
        ar & resnum;
        ar & tgtA;
        ar & tgtZ;
        ar & time;
        ar & visE;
        ar & visEBirks;
        ar & visENeutron;
        ar & visENeutronBirks;
        ar & visEinslc;
        ar & visEinslcBirks;
        ar & visEinslcNeutron;
        ar & visEinslcNeutronBirks;
        ar & vtx_x;
        ar & vtx_y;
        ar & vtx_z;
        ar & woscdumb;
        ar & x;
        ar & xsec;
        ar & y;
        ar & generator;
        ar & iscc;
        ar & ischarm;
        ar & isseaquark;
        ar & isvtxcont;
        ar & pdg;
        ar & pdgorig;
        ar & subevt;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_mc_nu& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_mc_nu current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<float> col_E; /* E column */
        dataset = H5Dopen(file, "/rec.mc.nu/E", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_E.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_E.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_L; /* L column */
        dataset = H5Dopen(file, "/rec.mc.nu/L", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_L.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_L.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_W2; /* W2 column */
        dataset = H5Dopen(file, "/rec.mc.nu/W2", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_W2.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_W2.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.mc.nu/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_eff; /* eff column */
        dataset = H5Dopen(file, "/rec.mc.nu/eff", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_eff.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_eff.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_genweight; /* genweight column */
        dataset = H5Dopen(file, "/rec.mc.nu/genweight", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_genweight.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_genweight.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_hitnuc; /* hitnuc column */
        dataset = H5Dopen(file, "/rec.mc.nu/hitnuc", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_hitnuc.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_hitnuc.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_inttype; /* inttype column */
        dataset = H5Dopen(file, "/rec.mc.nu/inttype", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_inttype.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_inttype.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_mode; /* mode column */
        dataset = H5Dopen(file, "/rec.mc.nu/mode", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_mode.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_mode.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nhitslc; /* nhitslc column */
        dataset = H5Dopen(file, "/rec.mc.nu/nhitslc", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nhitslc.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nhitslc.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nhittot; /* nhittot column */
        dataset = H5Dopen(file, "/rec.mc.nu/nhittot", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nhittot.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nhittot.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nneutron; /* nneutron column */
        dataset = H5Dopen(file, "/rec.mc.nu/nneutron", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nneutron.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nneutron.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_npiminus; /* npiminus column */
        dataset = H5Dopen(file, "/rec.mc.nu/npiminus", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_npiminus.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_npiminus.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_npiplus; /* npiplus column */
        dataset = H5Dopen(file, "/rec.mc.nu/npiplus", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_npiplus.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_npiplus.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_npizero; /* npizero column */
        dataset = H5Dopen(file, "/rec.mc.nu/npizero", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_npizero.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_npizero.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nproton; /* nproton column */
        dataset = H5Dopen(file, "/rec.mc.nu/nproton", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nproton.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nproton.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p_E; /* p.E column */
        dataset = H5Dopen(file, "/rec.mc.nu/p.E", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p_E.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p_E.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p_px; /* p.px column */
        dataset = H5Dopen(file, "/rec.mc.nu/p.px", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p_px.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p_px.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p_py; /* p.py column */
        dataset = H5Dopen(file, "/rec.mc.nu/p.py", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p_py.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p_py.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p_pz; /* p.pz column */
        dataset = H5Dopen(file, "/rec.mc.nu/p.pz", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p_pz.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p_pz.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pur; /* pur column */
        dataset = H5Dopen(file, "/rec.mc.nu/pur", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pur.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pur.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_q2; /* q2 column */
        dataset = H5Dopen(file, "/rec.mc.nu/q2", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_q2.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_q2.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_mc_nu_idx; /* rec.mc.nu_idx column */
        dataset = H5Dopen(file, "/rec.mc.nu/rec.mc.nu_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_mc_nu_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_mc_nu_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_resnum; /* resnum column */
        dataset = H5Dopen(file, "/rec.mc.nu/resnum", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_resnum.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_resnum.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_tgtA; /* tgtA column */
        dataset = H5Dopen(file, "/rec.mc.nu/tgtA", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tgtA.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tgtA.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_tgtZ; /* tgtZ column */
        dataset = H5Dopen(file, "/rec.mc.nu/tgtZ", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tgtZ.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tgtZ.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_time; /* time column */
        dataset = H5Dopen(file, "/rec.mc.nu/time", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_time.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_time.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_visE; /* visE column */
        dataset = H5Dopen(file, "/rec.mc.nu/visE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_visE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_visE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_visEBirks; /* visEBirks column */
        dataset = H5Dopen(file, "/rec.mc.nu/visEBirks", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_visEBirks.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_visEBirks.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_visENeutron; /* visENeutron column */
        dataset = H5Dopen(file, "/rec.mc.nu/visENeutron", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_visENeutron.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_visENeutron.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_visENeutronBirks; /* visENeutronBirks column */
        dataset = H5Dopen(file, "/rec.mc.nu/visENeutronBirks", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_visENeutronBirks.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_visENeutronBirks.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_visEinslc; /* visEinslc column */
        dataset = H5Dopen(file, "/rec.mc.nu/visEinslc", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_visEinslc.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_visEinslc.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_visEinslcBirks; /* visEinslcBirks column */
        dataset = H5Dopen(file, "/rec.mc.nu/visEinslcBirks", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_visEinslcBirks.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_visEinslcBirks.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_visEinslcNeutron; /* visEinslcNeutron column */
        dataset = H5Dopen(file, "/rec.mc.nu/visEinslcNeutron", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_visEinslcNeutron.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_visEinslcNeutron.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_visEinslcNeutronBirks; /* visEinslcNeutronBirks column */
        dataset = H5Dopen(file, "/rec.mc.nu/visEinslcNeutronBirks", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_visEinslcNeutronBirks.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_visEinslcNeutronBirks.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_vtx_x; /* vtx.x column */
        dataset = H5Dopen(file, "/rec.mc.nu/vtx.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_vtx_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_vtx_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_vtx_y; /* vtx.y column */
        dataset = H5Dopen(file, "/rec.mc.nu/vtx.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_vtx_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_vtx_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_vtx_z; /* vtx.z column */
        dataset = H5Dopen(file, "/rec.mc.nu/vtx.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_vtx_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_vtx_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_woscdumb; /* woscdumb column */
        dataset = H5Dopen(file, "/rec.mc.nu/woscdumb", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_woscdumb.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_woscdumb.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_x; /* x column */
        dataset = H5Dopen(file, "/rec.mc.nu/x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_xsec; /* xsec column */
        dataset = H5Dopen(file, "/rec.mc.nu/xsec", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_xsec.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_xsec.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_y; /* y column */
        dataset = H5Dopen(file, "/rec.mc.nu/y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_generator; /* generator column */
        dataset = H5Dopen(file, "/rec.mc.nu/generator", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_generator.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_generator.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_iscc; /* iscc column */
        dataset = H5Dopen(file, "/rec.mc.nu/iscc", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_iscc.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_iscc.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_ischarm; /* ischarm column */
        dataset = H5Dopen(file, "/rec.mc.nu/ischarm", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ischarm.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ischarm.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_isseaquark; /* isseaquark column */
        dataset = H5Dopen(file, "/rec.mc.nu/isseaquark", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_isseaquark.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_isseaquark.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_isvtxcont; /* isvtxcont column */
        dataset = H5Dopen(file, "/rec.mc.nu/isvtxcont", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_isvtxcont.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_isvtxcont.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int16_t> col_pdg; /* pdg column */
        dataset = H5Dopen(file, "/rec.mc.nu/pdg", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pdg.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pdg.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int16_t> col_pdgorig; /* pdgorig column */
        dataset = H5Dopen(file, "/rec.mc.nu/pdgorig", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pdgorig.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pdgorig.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.mc.nu/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        /* column for run indices */
        std::vector<unsigned> col_run;
        dataset = H5Dopen(file, "/rec.mc.nu/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_run.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_run.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        std::vector<unsigned> col_subrun;
        dataset = H5Dopen(file, "/rec.mc.nu/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subrun.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subrun.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        std::vector<unsigned> col_evt;
        dataset = H5Dopen(file, "/rec.mc.nu/evt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.E = col_E[i];
            current.L = col_L[i];
            current.W2 = col_W2[i];
            current.cycle = col_cycle[i];
            current.eff = col_eff[i];
            current.genweight = col_genweight[i];
            current.hitnuc = col_hitnuc[i];
            current.inttype = col_inttype[i];
            current.mode = col_mode[i];
            current.nhitslc = col_nhitslc[i];
            current.nhittot = col_nhittot[i];
            current.nneutron = col_nneutron[i];
            current.npiminus = col_npiminus[i];
            current.npiplus = col_npiplus[i];
            current.npizero = col_npizero[i];
            current.nproton = col_nproton[i];
            current.p_E = col_p_E[i];
            current.p_px = col_p_px[i];
            current.p_py = col_p_py[i];
            current.p_pz = col_p_pz[i];
            current.pur = col_pur[i];
            current.q2 = col_q2[i];
            current.rec_mc_nu_idx = col_rec_mc_nu_idx[i];
            current.resnum = col_resnum[i];
            current.tgtA = col_tgtA[i];
            current.tgtZ = col_tgtZ[i];
            current.time = col_time[i];
            current.visE = col_visE[i];
            current.visEBirks = col_visEBirks[i];
            current.visENeutron = col_visENeutron[i];
            current.visENeutronBirks = col_visENeutronBirks[i];
            current.visEinslc = col_visEinslc[i];
            current.visEinslcBirks = col_visEinslcBirks[i];
            current.visEinslcNeutron = col_visEinslcNeutron[i];
            current.visEinslcNeutronBirks = col_visEinslcNeutronBirks[i];
            current.vtx_x = col_vtx_x[i];
            current.vtx_y = col_vtx_y[i];
            current.vtx_z = col_vtx_z[i];
            current.woscdumb = col_woscdumb[i];
            current.x = col_x[i];
            current.xsec = col_xsec[i];
            current.y = col_y[i];
            current.generator = col_generator[i];
            current.iscc = col_iscc[i];
            current.ischarm = col_ischarm[i];
            current.isseaquark = col_isseaquark[i];
            current.isvtxcont = col_isvtxcont[i];
            current.pdg = col_pdg[i];
            current.pdgorig = col_pdgorig[i];
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