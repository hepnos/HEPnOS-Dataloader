/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_SEL_LEM_HPP_
#define __REC_SEL_LEM_HPP_

#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_sel_lem structure for the 
 * "/rec.sel.lem" table in corresponding HDF5 files.
 */
struct rec_sel_lem {

    float avgexpE; /* avgexpE column */
    float avginvE; /* avginvE column */
    float avgsigE; /* avgsigE column */
    float chibkg; /* chibkg column */
    float chibkgexp; /* chibkgexp column */
    float chisig; /* chisig column */
    float chisigexp; /* chisigexp column */
    std::int32_t cycle; /* cycle column */
    float dectree; /* dectree column */
    float energydiff; /* energydiff column */
    float energydiffexp; /* energydiffexp column */
    float enrichfrac; /* enrichfrac column */
    float enrichfracexp; /* enrichfracexp column */
    float fannid; /* fannid column */
    float fannidenrich; /* fannidenrich column */
    float meanqfrac; /* meanqfrac column */
    float meanqfracbkg; /* meanqfracbkg column */
    float meanqfracbkgexp; /* meanqfracbkgexp column */
    float meanqfracexp; /* meanqfracexp column */
    float meanqfracfit; /* meanqfracfit column */
    float meanqfracsig; /* meanqfracsig column */
    float meanqfracsigexp; /* meanqfracsigexp column */
    float meany; /* meany column */
    float meanyexp; /* meanyexp column */
    float meanyfit; /* meanyfit column */
    float meanysig; /* meanysig column */
    float meanysigexp; /* meanysigexp column */
    float pid; /* pid column */
    float pidexp; /* pidexp column */
    float pidexpfit; /* pidexpfit column */
    float pidfit; /* pidfit column */
    float tmvabdt; /* tmvabdt column */
    float tmvabdtd; /* tmvabdtd column */
    float tmvabdtg; /* tmvabdtg column */
    float tmvabdtmf; /* tmvabdtmf column */
    float tmvamlp; /* tmvamlp column */
    std::uint16_t subevt; /* subevt column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & avgexpE;
        ar & avginvE;
        ar & avgsigE;
        ar & chibkg;
        ar & chibkgexp;
        ar & chisig;
        ar & chisigexp;
        ar & cycle;
        ar & dectree;
        ar & energydiff;
        ar & energydiffexp;
        ar & enrichfrac;
        ar & enrichfracexp;
        ar & fannid;
        ar & fannidenrich;
        ar & meanqfrac;
        ar & meanqfracbkg;
        ar & meanqfracbkgexp;
        ar & meanqfracexp;
        ar & meanqfracfit;
        ar & meanqfracsig;
        ar & meanqfracsigexp;
        ar & meany;
        ar & meanyexp;
        ar & meanyfit;
        ar & meanysig;
        ar & meanysigexp;
        ar & pid;
        ar & pidexp;
        ar & pidexpfit;
        ar & pidfit;
        ar & tmvabdt;
        ar & tmvabdtd;
        ar & tmvabdtg;
        ar & tmvabdtmf;
        ar & tmvamlp;
        ar & subevt;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_sel_lem& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_sel_lem current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<float> col_avgexpE; /* avgexpE column */
        dataset = H5Dopen(file, "/rec.sel.lem/avgexpE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_avgexpE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_avgexpE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_avginvE; /* avginvE column */
        dataset = H5Dopen(file, "/rec.sel.lem/avginvE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_avginvE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_avginvE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_avgsigE; /* avgsigE column */
        dataset = H5Dopen(file, "/rec.sel.lem/avgsigE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_avgsigE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_avgsigE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_chibkg; /* chibkg column */
        dataset = H5Dopen(file, "/rec.sel.lem/chibkg", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_chibkg.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_chibkg.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_chibkgexp; /* chibkgexp column */
        dataset = H5Dopen(file, "/rec.sel.lem/chibkgexp", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_chibkgexp.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_chibkgexp.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_chisig; /* chisig column */
        dataset = H5Dopen(file, "/rec.sel.lem/chisig", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_chisig.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_chisig.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_chisigexp; /* chisigexp column */
        dataset = H5Dopen(file, "/rec.sel.lem/chisigexp", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_chisigexp.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_chisigexp.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.sel.lem/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dectree; /* dectree column */
        dataset = H5Dopen(file, "/rec.sel.lem/dectree", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dectree.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dectree.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_energydiff; /* energydiff column */
        dataset = H5Dopen(file, "/rec.sel.lem/energydiff", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_energydiff.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_energydiff.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_energydiffexp; /* energydiffexp column */
        dataset = H5Dopen(file, "/rec.sel.lem/energydiffexp", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_energydiffexp.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_energydiffexp.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_enrichfrac; /* enrichfrac column */
        dataset = H5Dopen(file, "/rec.sel.lem/enrichfrac", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_enrichfrac.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_enrichfrac.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_enrichfracexp; /* enrichfracexp column */
        dataset = H5Dopen(file, "/rec.sel.lem/enrichfracexp", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_enrichfracexp.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_enrichfracexp.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_fannid; /* fannid column */
        dataset = H5Dopen(file, "/rec.sel.lem/fannid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_fannid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_fannid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_fannidenrich; /* fannidenrich column */
        dataset = H5Dopen(file, "/rec.sel.lem/fannidenrich", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_fannidenrich.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_fannidenrich.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_meanqfrac; /* meanqfrac column */
        dataset = H5Dopen(file, "/rec.sel.lem/meanqfrac", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_meanqfrac.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_meanqfrac.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_meanqfracbkg; /* meanqfracbkg column */
        dataset = H5Dopen(file, "/rec.sel.lem/meanqfracbkg", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_meanqfracbkg.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_meanqfracbkg.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_meanqfracbkgexp; /* meanqfracbkgexp column */
        dataset = H5Dopen(file, "/rec.sel.lem/meanqfracbkgexp", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_meanqfracbkgexp.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_meanqfracbkgexp.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_meanqfracexp; /* meanqfracexp column */
        dataset = H5Dopen(file, "/rec.sel.lem/meanqfracexp", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_meanqfracexp.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_meanqfracexp.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_meanqfracfit; /* meanqfracfit column */
        dataset = H5Dopen(file, "/rec.sel.lem/meanqfracfit", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_meanqfracfit.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_meanqfracfit.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_meanqfracsig; /* meanqfracsig column */
        dataset = H5Dopen(file, "/rec.sel.lem/meanqfracsig", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_meanqfracsig.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_meanqfracsig.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_meanqfracsigexp; /* meanqfracsigexp column */
        dataset = H5Dopen(file, "/rec.sel.lem/meanqfracsigexp", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_meanqfracsigexp.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_meanqfracsigexp.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_meany; /* meany column */
        dataset = H5Dopen(file, "/rec.sel.lem/meany", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_meany.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_meany.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_meanyexp; /* meanyexp column */
        dataset = H5Dopen(file, "/rec.sel.lem/meanyexp", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_meanyexp.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_meanyexp.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_meanyfit; /* meanyfit column */
        dataset = H5Dopen(file, "/rec.sel.lem/meanyfit", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_meanyfit.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_meanyfit.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_meanysig; /* meanysig column */
        dataset = H5Dopen(file, "/rec.sel.lem/meanysig", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_meanysig.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_meanysig.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_meanysigexp; /* meanysigexp column */
        dataset = H5Dopen(file, "/rec.sel.lem/meanysigexp", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_meanysigexp.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_meanysigexp.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pid; /* pid column */
        dataset = H5Dopen(file, "/rec.sel.lem/pid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pidexp; /* pidexp column */
        dataset = H5Dopen(file, "/rec.sel.lem/pidexp", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pidexp.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pidexp.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pidexpfit; /* pidexpfit column */
        dataset = H5Dopen(file, "/rec.sel.lem/pidexpfit", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pidexpfit.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pidexpfit.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pidfit; /* pidfit column */
        dataset = H5Dopen(file, "/rec.sel.lem/pidfit", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pidfit.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pidfit.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_tmvabdt; /* tmvabdt column */
        dataset = H5Dopen(file, "/rec.sel.lem/tmvabdt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tmvabdt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tmvabdt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_tmvabdtd; /* tmvabdtd column */
        dataset = H5Dopen(file, "/rec.sel.lem/tmvabdtd", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tmvabdtd.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tmvabdtd.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_tmvabdtg; /* tmvabdtg column */
        dataset = H5Dopen(file, "/rec.sel.lem/tmvabdtg", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tmvabdtg.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tmvabdtg.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_tmvabdtmf; /* tmvabdtmf column */
        dataset = H5Dopen(file, "/rec.sel.lem/tmvabdtmf", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tmvabdtmf.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tmvabdtmf.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_tmvamlp; /* tmvamlp column */
        dataset = H5Dopen(file, "/rec.sel.lem/tmvamlp", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_tmvamlp.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_tmvamlp.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.sel.lem/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        /* column for run indices */
        std::vector<unsigned> col_run;
        dataset = H5Dopen(file, "/rec.sel.lem/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_run.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_run.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        std::vector<unsigned> col_subrun;
        dataset = H5Dopen(file, "/rec.sel.lem/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subrun.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subrun.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        std::vector<unsigned> col_evt;
        dataset = H5Dopen(file, "/rec.sel.lem/evt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.avgexpE = col_avgexpE[i];
            current.avginvE = col_avginvE[i];
            current.avgsigE = col_avgsigE[i];
            current.chibkg = col_chibkg[i];
            current.chibkgexp = col_chibkgexp[i];
            current.chisig = col_chisig[i];
            current.chisigexp = col_chisigexp[i];
            current.cycle = col_cycle[i];
            current.dectree = col_dectree[i];
            current.energydiff = col_energydiff[i];
            current.energydiffexp = col_energydiffexp[i];
            current.enrichfrac = col_enrichfrac[i];
            current.enrichfracexp = col_enrichfracexp[i];
            current.fannid = col_fannid[i];
            current.fannidenrich = col_fannidenrich[i];
            current.meanqfrac = col_meanqfrac[i];
            current.meanqfracbkg = col_meanqfracbkg[i];
            current.meanqfracbkgexp = col_meanqfracbkgexp[i];
            current.meanqfracexp = col_meanqfracexp[i];
            current.meanqfracfit = col_meanqfracfit[i];
            current.meanqfracsig = col_meanqfracsig[i];
            current.meanqfracsigexp = col_meanqfracsigexp[i];
            current.meany = col_meany[i];
            current.meanyexp = col_meanyexp[i];
            current.meanyfit = col_meanyfit[i];
            current.meanysig = col_meanysig[i];
            current.meanysigexp = col_meanysigexp[i];
            current.pid = col_pid[i];
            current.pidexp = col_pidexp[i];
            current.pidexpfit = col_pidexpfit[i];
            current.pidfit = col_pidfit[i];
            current.tmvabdt = col_tmvabdt[i];
            current.tmvabdtd = col_tmvabdtd[i];
            current.tmvabdtg = col_tmvabdtg[i];
            current.tmvabdtmf = col_tmvabdtmf[i];
            current.tmvamlp = col_tmvamlp[i];
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