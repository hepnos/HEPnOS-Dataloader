/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_SEL_COSREJ_HPP_
#define __REC_SEL_COSREJ_HPP_

#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_sel_cosrej structure for the 
 * "/rec.sel.cosrej" table in corresponding HDF5 files.
 */
struct rec_sel_cosrej {

    float anglecos; /* anglecos column */
    float anglekal; /* anglekal column */
    float cdirscore; /* cdirscore column */
    float cfitspeed; /* cfitspeed column */
    float coschidiff; /* coschidiff column */
    float coschisq; /* coschisq column */
    float cosslope; /* cosslope column */
    float costhetatrue; /* costhetatrue column */
    float cscorediff; /* cscorediff column */
    std::int32_t cycle; /* cycle column */
    float eratio; /* eratio column */
    float fscattext; /* fscattext column */
    float fscattmax; /* fscattmax column */
    float fscattsig; /* fscattsig column */
    float fscattsum; /* fscattsum column */
    float hadE; /* hadE column */
    float kalchidiff; /* kalchidiff column */
    float kalchisq; /* kalchisq column */
    float kalslope; /* kalslope column */
    float kalthetatrue; /* kalthetatrue column */
    float kdirscore; /* kdirscore column */
    float kfitspeed; /* kfitspeed column */
    float kscorediff; /* kscorediff column */
    std::int32_t mincell; /* mincell column */
    float mindist; /* mindist column */
    std::int32_t nkal3d; /* nkal3d column */
    float numuFApid; /* numuFApid column */
    float numuSAcontpid; /* numuSAcontpid column */
    float numuSAp1pid; /* numuSAp1pid column */
    float numuSAp2pid; /* numuSAp2pid column */
    float numuTAp1pid; /* numuTAp1pid column */
    float numuTAp2pid; /* numuTAp2pid column */
    float numuTAp3pid; /* numuTAp3pid column */
    float numucontpid; /* numucontpid column */
    float numucontpidoldcvn; /* numucontpidoldcvn column */
    float numuuncontpid; /* numuuncontpid column */
    float numuunconttunedpid; /* numuunconttunedpid column */
    std::int32_t pdgbest; /* pdgbest column */
    float scatt; /* scatt column */
    std::uint16_t subevt; /* subevt column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & anglecos;
        ar & anglekal;
        ar & cdirscore;
        ar & cfitspeed;
        ar & coschidiff;
        ar & coschisq;
        ar & cosslope;
        ar & costhetatrue;
        ar & cscorediff;
        ar & cycle;
        ar & eratio;
        ar & fscattext;
        ar & fscattmax;
        ar & fscattsig;
        ar & fscattsum;
        ar & hadE;
        ar & kalchidiff;
        ar & kalchisq;
        ar & kalslope;
        ar & kalthetatrue;
        ar & kdirscore;
        ar & kfitspeed;
        ar & kscorediff;
        ar & mincell;
        ar & mindist;
        ar & nkal3d;
        ar & numuFApid;
        ar & numuSAcontpid;
        ar & numuSAp1pid;
        ar & numuSAp2pid;
        ar & numuTAp1pid;
        ar & numuTAp2pid;
        ar & numuTAp3pid;
        ar & numucontpid;
        ar & numucontpidoldcvn;
        ar & numuuncontpid;
        ar & numuunconttunedpid;
        ar & pdgbest;
        ar & scatt;
        ar & subevt;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_sel_cosrej& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_sel_cosrej current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<float> col_anglecos; /* anglecos column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/anglecos", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_anglecos.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_anglecos.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_anglekal; /* anglekal column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/anglekal", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_anglekal.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_anglekal.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_cdirscore; /* cdirscore column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/cdirscore", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cdirscore.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cdirscore.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_cfitspeed; /* cfitspeed column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/cfitspeed", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cfitspeed.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cfitspeed.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_coschidiff; /* coschidiff column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/coschidiff", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_coschidiff.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_coschidiff.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_coschisq; /* coschisq column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/coschisq", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_coschisq.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_coschisq.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_cosslope; /* cosslope column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/cosslope", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cosslope.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cosslope.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_costhetatrue; /* costhetatrue column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/costhetatrue", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_costhetatrue.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_costhetatrue.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_cscorediff; /* cscorediff column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/cscorediff", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cscorediff.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cscorediff.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_eratio; /* eratio column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/eratio", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_eratio.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_eratio.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_fscattext; /* fscattext column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/fscattext", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_fscattext.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_fscattext.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_fscattmax; /* fscattmax column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/fscattmax", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_fscattmax.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_fscattmax.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_fscattsig; /* fscattsig column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/fscattsig", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_fscattsig.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_fscattsig.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_fscattsum; /* fscattsum column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/fscattsum", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_fscattsum.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_fscattsum.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_hadE; /* hadE column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/hadE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_hadE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_hadE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_kalchidiff; /* kalchidiff column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/kalchidiff", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_kalchidiff.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_kalchidiff.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_kalchisq; /* kalchisq column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/kalchisq", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_kalchisq.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_kalchisq.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_kalslope; /* kalslope column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/kalslope", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_kalslope.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_kalslope.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_kalthetatrue; /* kalthetatrue column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/kalthetatrue", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_kalthetatrue.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_kalthetatrue.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_kdirscore; /* kdirscore column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/kdirscore", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_kdirscore.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_kdirscore.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_kfitspeed; /* kfitspeed column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/kfitspeed", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_kfitspeed.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_kfitspeed.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_kscorediff; /* kscorediff column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/kscorediff", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_kscorediff.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_kscorediff.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_mincell; /* mincell column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/mincell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_mincell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_mincell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_mindist; /* mindist column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/mindist", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_mindist.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_mindist.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nkal3d; /* nkal3d column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/nkal3d", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nkal3d.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nkal3d.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_numuFApid; /* numuFApid column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/numuFApid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_numuFApid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_numuFApid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_numuSAcontpid; /* numuSAcontpid column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/numuSAcontpid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_numuSAcontpid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_numuSAcontpid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_numuSAp1pid; /* numuSAp1pid column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/numuSAp1pid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_numuSAp1pid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_numuSAp1pid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_numuSAp2pid; /* numuSAp2pid column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/numuSAp2pid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_numuSAp2pid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_numuSAp2pid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_numuTAp1pid; /* numuTAp1pid column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/numuTAp1pid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_numuTAp1pid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_numuTAp1pid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_numuTAp2pid; /* numuTAp2pid column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/numuTAp2pid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_numuTAp2pid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_numuTAp2pid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_numuTAp3pid; /* numuTAp3pid column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/numuTAp3pid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_numuTAp3pid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_numuTAp3pid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_numucontpid; /* numucontpid column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/numucontpid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_numucontpid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_numucontpid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_numucontpidoldcvn; /* numucontpidoldcvn column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/numucontpidoldcvn", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_numucontpidoldcvn.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_numucontpidoldcvn.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_numuuncontpid; /* numuuncontpid column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/numuuncontpid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_numuuncontpid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_numuuncontpid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_numuunconttunedpid; /* numuunconttunedpid column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/numuunconttunedpid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_numuunconttunedpid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_numuunconttunedpid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_pdgbest; /* pdgbest column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/pdgbest", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pdgbest.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pdgbest.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_scatt; /* scatt column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/scatt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_scatt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_scatt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.sel.cosrej/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        /* column for run indices */
        std::vector<unsigned> col_run;
        dataset = H5Dopen(file, "/rec.sel.cosrej/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_run.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_run.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        std::vector<unsigned> col_subrun;
        dataset = H5Dopen(file, "/rec.sel.cosrej/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subrun.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subrun.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        std::vector<unsigned> col_evt;
        dataset = H5Dopen(file, "/rec.sel.cosrej/evt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.anglecos = col_anglecos[i];
            current.anglekal = col_anglekal[i];
            current.cdirscore = col_cdirscore[i];
            current.cfitspeed = col_cfitspeed[i];
            current.coschidiff = col_coschidiff[i];
            current.coschisq = col_coschisq[i];
            current.cosslope = col_cosslope[i];
            current.costhetatrue = col_costhetatrue[i];
            current.cscorediff = col_cscorediff[i];
            current.cycle = col_cycle[i];
            current.eratio = col_eratio[i];
            current.fscattext = col_fscattext[i];
            current.fscattmax = col_fscattmax[i];
            current.fscattsig = col_fscattsig[i];
            current.fscattsum = col_fscattsum[i];
            current.hadE = col_hadE[i];
            current.kalchidiff = col_kalchidiff[i];
            current.kalchisq = col_kalchisq[i];
            current.kalslope = col_kalslope[i];
            current.kalthetatrue = col_kalthetatrue[i];
            current.kdirscore = col_kdirscore[i];
            current.kfitspeed = col_kfitspeed[i];
            current.kscorediff = col_kscorediff[i];
            current.mincell = col_mincell[i];
            current.mindist = col_mindist[i];
            current.nkal3d = col_nkal3d[i];
            current.numuFApid = col_numuFApid[i];
            current.numuSAcontpid = col_numuSAcontpid[i];
            current.numuSAp1pid = col_numuSAp1pid[i];
            current.numuSAp2pid = col_numuSAp2pid[i];
            current.numuTAp1pid = col_numuTAp1pid[i];
            current.numuTAp2pid = col_numuTAp2pid[i];
            current.numuTAp3pid = col_numuTAp3pid[i];
            current.numucontpid = col_numucontpid[i];
            current.numucontpidoldcvn = col_numucontpidoldcvn[i];
            current.numuuncontpid = col_numuuncontpid[i];
            current.numuunconttunedpid = col_numuunconttunedpid[i];
            current.pdgbest = col_pdgbest[i];
            current.scatt = col_scatt[i];
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