/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_SEL_XNUEPID_HPP_
#define __REC_SEL_XNUEPID_HPP_

#include <tuple>
#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_sel_xnuepid structure for the 
 * "/rec.sel.xnuepid" table in corresponding HDF5 files.
 */
struct rec_sel_xnuepid {

    double bdt; /* bdt column */
    std::int32_t cycle; /* cycle column */
    float efrac10p; /* efrac10p column */
    float efrac2sig; /* efrac2sig column */
    float efracp2; /* efracp2 column */
    float efracp3; /* efracp3 column */
    float efracp4; /* efracp4 column */
    float emaxfrac6p; /* emaxfrac6p column */
    float p1Fmip; /* p1Fmip column */
    float p1energy; /* p1energy column */
    float p2Fmip; /* p2Fmip column */
    std::uint16_t subevt; /* subevt column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & bdt;
        ar & cycle;
        ar & efrac10p;
        ar & efrac2sig;
        ar & efracp2;
        ar & efracp3;
        ar & efracp4;
        ar & emaxfrac6p;
        ar & p1Fmip;
        ar & p1energy;
        ar & p2Fmip;
        ar & subevt;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_sel_xnuepid& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_sel_xnuepid current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;
        _read_indices(file, col_run, col_subrun, col_evt);

        std::vector<double> col_bdt; /* bdt column */
        dataset = H5Dopen(file, "/rec.sel.xnuepid/bdt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_bdt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_DOUBLE, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_bdt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.sel.xnuepid/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_efrac10p; /* efrac10p column */
        dataset = H5Dopen(file, "/rec.sel.xnuepid/efrac10p", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_efrac10p.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_efrac10p.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_efrac2sig; /* efrac2sig column */
        dataset = H5Dopen(file, "/rec.sel.xnuepid/efrac2sig", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_efrac2sig.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_efrac2sig.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_efracp2; /* efracp2 column */
        dataset = H5Dopen(file, "/rec.sel.xnuepid/efracp2", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_efracp2.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_efracp2.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_efracp3; /* efracp3 column */
        dataset = H5Dopen(file, "/rec.sel.xnuepid/efracp3", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_efracp3.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_efracp3.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_efracp4; /* efracp4 column */
        dataset = H5Dopen(file, "/rec.sel.xnuepid/efracp4", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_efracp4.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_efracp4.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_emaxfrac6p; /* emaxfrac6p column */
        dataset = H5Dopen(file, "/rec.sel.xnuepid/emaxfrac6p", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_emaxfrac6p.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_emaxfrac6p.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p1Fmip; /* p1Fmip column */
        dataset = H5Dopen(file, "/rec.sel.xnuepid/p1Fmip", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p1Fmip.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p1Fmip.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p1energy; /* p1energy column */
        dataset = H5Dopen(file, "/rec.sel.xnuepid/p1energy", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p1energy.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p1energy.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p2Fmip; /* p2Fmip column */
        dataset = H5Dopen(file, "/rec.sel.xnuepid/p2Fmip", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p2Fmip.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p2Fmip.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.sel.xnuepid/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.bdt = col_bdt[i];
            current.cycle = col_cycle[i];
            current.efrac10p = col_efrac10p[i];
            current.efrac2sig = col_efrac2sig[i];
            current.efracp2 = col_efracp2[i];
            current.efracp3 = col_efracp3[i];
            current.efracp4 = col_efracp4[i];
            current.emaxfrac6p = col_emaxfrac6p[i];
            current.p1Fmip = col_p1Fmip[i];
            current.p1energy = col_p1energy[i];
            current.p2Fmip = col_p2Fmip[i];
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
            std::vector<rec_sel_xnuepid>
           > from_hdf5(hid_t file) {
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;
        std::vector<rec_sel_xnuepid> content;
        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;

        _read_indices(file, col_run, col_subrun, col_evt);

        content.resize(col_run.size());

        std::vector<double> col_bdt; /* bdt column */
        dataset = H5Dopen(file, "/rec.sel.xnuepid/bdt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_bdt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_DOUBLE, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_bdt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.sel.xnuepid/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_efrac10p; /* efrac10p column */
        dataset = H5Dopen(file, "/rec.sel.xnuepid/efrac10p", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_efrac10p.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_efrac10p.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_efrac2sig; /* efrac2sig column */
        dataset = H5Dopen(file, "/rec.sel.xnuepid/efrac2sig", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_efrac2sig.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_efrac2sig.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_efracp2; /* efracp2 column */
        dataset = H5Dopen(file, "/rec.sel.xnuepid/efracp2", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_efracp2.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_efracp2.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_efracp3; /* efracp3 column */
        dataset = H5Dopen(file, "/rec.sel.xnuepid/efracp3", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_efracp3.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_efracp3.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_efracp4; /* efracp4 column */
        dataset = H5Dopen(file, "/rec.sel.xnuepid/efracp4", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_efracp4.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_efracp4.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_emaxfrac6p; /* emaxfrac6p column */
        dataset = H5Dopen(file, "/rec.sel.xnuepid/emaxfrac6p", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_emaxfrac6p.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_emaxfrac6p.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p1Fmip; /* p1Fmip column */
        dataset = H5Dopen(file, "/rec.sel.xnuepid/p1Fmip", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p1Fmip.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p1Fmip.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p1energy; /* p1energy column */
        dataset = H5Dopen(file, "/rec.sel.xnuepid/p1energy", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p1energy.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p1energy.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p2Fmip; /* p2Fmip column */
        dataset = H5Dopen(file, "/rec.sel.xnuepid/p2Fmip", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p2Fmip.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p2Fmip.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.sel.xnuepid/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            content[i].bdt = col_bdt[i];
            content[i].cycle = col_cycle[i];
            content[i].efrac10p = col_efrac10p[i];
            content[i].efrac2sig = col_efrac2sig[i];
            content[i].efracp2 = col_efracp2[i];
            content[i].efracp3 = col_efracp3[i];
            content[i].efracp4 = col_efracp4[i];
            content[i].emaxfrac6p = col_emaxfrac6p[i];
            content[i].p1Fmip = col_p1Fmip[i];
            content[i].p1energy = col_p1energy[i];
            content[i].p2Fmip = col_p2Fmip[i];
            content[i].subevt = col_subevt[i];
            
        }

        return { col_run, col_subrun, col_evt, content };
    }

    static std::tuple<
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<rec_sel_xnuepid>
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
        dataset = H5Dopen(file, "/rec.sel.xnuepid/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        runs.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(runs.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        dataset = H5Dopen(file, "/rec.sel.xnuepid/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        subruns.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(subruns.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        dataset = H5Dopen(file, "/rec.sel.xnuepid/evt", H5P_DEFAULT);
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