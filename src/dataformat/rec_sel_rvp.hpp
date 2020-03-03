/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_SEL_RVP_HPP_
#define __REC_SEL_RVP_HPP_

#include <tuple>
#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_sel_rvp structure for the 
 * "/rec.sel.rvp" table in corresponding HDF5 files.
 */
struct rec_sel_rvp {

    std::int32_t cycle; /* cycle column */
    float efrac2plwin; /* efrac2plwin column */
    float efrac2sigrd; /* efrac2sigrd column */
    float efrac6plwin; /* efrac6plwin column */
    float eiso3sig; /* eiso3sig column */
    float epl20frac; /* epl20frac column */
    float longtr; /* longtr column */
    float longtrfrac; /* longtrfrac column */
    float mipfrac; /* mipfrac column */
    float miphits; /* miphits column */
    std::int32_t ncell; /* ncell column */
    float pid; /* pid column */
    float prongEbal2D; /* prongEbal2D column */
    float prongEbal3D; /* prongEbal3D column */
    std::int32_t prongs2D; /* prongs2D column */
    std::int32_t prongs3D; /* prongs3D column */
    float recoE; /* recoE column */
    float rvp12; /* rvp12 column */
    std::uint16_t subevt; /* subevt column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & cycle;
        ar & efrac2plwin;
        ar & efrac2sigrd;
        ar & efrac6plwin;
        ar & eiso3sig;
        ar & epl20frac;
        ar & longtr;
        ar & longtrfrac;
        ar & mipfrac;
        ar & miphits;
        ar & ncell;
        ar & pid;
        ar & prongEbal2D;
        ar & prongEbal3D;
        ar & prongs2D;
        ar & prongs3D;
        ar & recoE;
        ar & rvp12;
        ar & subevt;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_sel_rvp& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_sel_rvp current;
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
        dataset = H5Dopen(file, "/rec.sel.rvp/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_efrac2plwin; /* efrac2plwin column */
        dataset = H5Dopen(file, "/rec.sel.rvp/efrac2plwin", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_efrac2plwin.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_efrac2plwin.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_efrac2sigrd; /* efrac2sigrd column */
        dataset = H5Dopen(file, "/rec.sel.rvp/efrac2sigrd", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_efrac2sigrd.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_efrac2sigrd.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_efrac6plwin; /* efrac6plwin column */
        dataset = H5Dopen(file, "/rec.sel.rvp/efrac6plwin", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_efrac6plwin.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_efrac6plwin.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_eiso3sig; /* eiso3sig column */
        dataset = H5Dopen(file, "/rec.sel.rvp/eiso3sig", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_eiso3sig.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_eiso3sig.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_epl20frac; /* epl20frac column */
        dataset = H5Dopen(file, "/rec.sel.rvp/epl20frac", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_epl20frac.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_epl20frac.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_longtr; /* longtr column */
        dataset = H5Dopen(file, "/rec.sel.rvp/longtr", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_longtr.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_longtr.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_longtrfrac; /* longtrfrac column */
        dataset = H5Dopen(file, "/rec.sel.rvp/longtrfrac", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_longtrfrac.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_longtrfrac.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_mipfrac; /* mipfrac column */
        dataset = H5Dopen(file, "/rec.sel.rvp/mipfrac", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_mipfrac.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_mipfrac.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_miphits; /* miphits column */
        dataset = H5Dopen(file, "/rec.sel.rvp/miphits", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_miphits.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_miphits.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_ncell; /* ncell column */
        dataset = H5Dopen(file, "/rec.sel.rvp/ncell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ncell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ncell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pid; /* pid column */
        dataset = H5Dopen(file, "/rec.sel.rvp/pid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_prongEbal2D; /* prongEbal2D column */
        dataset = H5Dopen(file, "/rec.sel.rvp/prongEbal2D", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_prongEbal2D.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_prongEbal2D.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_prongEbal3D; /* prongEbal3D column */
        dataset = H5Dopen(file, "/rec.sel.rvp/prongEbal3D", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_prongEbal3D.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_prongEbal3D.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_prongs2D; /* prongs2D column */
        dataset = H5Dopen(file, "/rec.sel.rvp/prongs2D", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_prongs2D.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_prongs2D.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_prongs3D; /* prongs3D column */
        dataset = H5Dopen(file, "/rec.sel.rvp/prongs3D", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_prongs3D.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_prongs3D.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_recoE; /* recoE column */
        dataset = H5Dopen(file, "/rec.sel.rvp/recoE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_recoE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_recoE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_rvp12; /* rvp12 column */
        dataset = H5Dopen(file, "/rec.sel.rvp/rvp12", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rvp12.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rvp12.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.sel.rvp/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.cycle = col_cycle[i];
            current.efrac2plwin = col_efrac2plwin[i];
            current.efrac2sigrd = col_efrac2sigrd[i];
            current.efrac6plwin = col_efrac6plwin[i];
            current.eiso3sig = col_eiso3sig[i];
            current.epl20frac = col_epl20frac[i];
            current.longtr = col_longtr[i];
            current.longtrfrac = col_longtrfrac[i];
            current.mipfrac = col_mipfrac[i];
            current.miphits = col_miphits[i];
            current.ncell = col_ncell[i];
            current.pid = col_pid[i];
            current.prongEbal2D = col_prongEbal2D[i];
            current.prongEbal3D = col_prongEbal3D[i];
            current.prongs2D = col_prongs2D[i];
            current.prongs3D = col_prongs3D[i];
            current.recoE = col_recoE[i];
            current.rvp12 = col_rvp12[i];
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
            std::vector<rec_sel_rvp>
           > from_hdf5(hid_t file) {
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;
        std::vector<rec_sel_rvp> content;
        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;

        _read_indices(file, col_run, col_subrun, col_evt);

        content.resize(col_run.size());

        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.sel.rvp/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_efrac2plwin; /* efrac2plwin column */
        dataset = H5Dopen(file, "/rec.sel.rvp/efrac2plwin", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_efrac2plwin.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_efrac2plwin.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_efrac2sigrd; /* efrac2sigrd column */
        dataset = H5Dopen(file, "/rec.sel.rvp/efrac2sigrd", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_efrac2sigrd.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_efrac2sigrd.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_efrac6plwin; /* efrac6plwin column */
        dataset = H5Dopen(file, "/rec.sel.rvp/efrac6plwin", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_efrac6plwin.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_efrac6plwin.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_eiso3sig; /* eiso3sig column */
        dataset = H5Dopen(file, "/rec.sel.rvp/eiso3sig", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_eiso3sig.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_eiso3sig.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_epl20frac; /* epl20frac column */
        dataset = H5Dopen(file, "/rec.sel.rvp/epl20frac", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_epl20frac.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_epl20frac.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_longtr; /* longtr column */
        dataset = H5Dopen(file, "/rec.sel.rvp/longtr", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_longtr.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_longtr.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_longtrfrac; /* longtrfrac column */
        dataset = H5Dopen(file, "/rec.sel.rvp/longtrfrac", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_longtrfrac.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_longtrfrac.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_mipfrac; /* mipfrac column */
        dataset = H5Dopen(file, "/rec.sel.rvp/mipfrac", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_mipfrac.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_mipfrac.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_miphits; /* miphits column */
        dataset = H5Dopen(file, "/rec.sel.rvp/miphits", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_miphits.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_miphits.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_ncell; /* ncell column */
        dataset = H5Dopen(file, "/rec.sel.rvp/ncell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ncell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ncell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pid; /* pid column */
        dataset = H5Dopen(file, "/rec.sel.rvp/pid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_prongEbal2D; /* prongEbal2D column */
        dataset = H5Dopen(file, "/rec.sel.rvp/prongEbal2D", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_prongEbal2D.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_prongEbal2D.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_prongEbal3D; /* prongEbal3D column */
        dataset = H5Dopen(file, "/rec.sel.rvp/prongEbal3D", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_prongEbal3D.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_prongEbal3D.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_prongs2D; /* prongs2D column */
        dataset = H5Dopen(file, "/rec.sel.rvp/prongs2D", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_prongs2D.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_prongs2D.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_prongs3D; /* prongs3D column */
        dataset = H5Dopen(file, "/rec.sel.rvp/prongs3D", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_prongs3D.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_prongs3D.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_recoE; /* recoE column */
        dataset = H5Dopen(file, "/rec.sel.rvp/recoE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_recoE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_recoE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_rvp12; /* rvp12 column */
        dataset = H5Dopen(file, "/rec.sel.rvp/rvp12", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rvp12.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rvp12.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.sel.rvp/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            content[i].cycle = col_cycle[i];
            content[i].efrac2plwin = col_efrac2plwin[i];
            content[i].efrac2sigrd = col_efrac2sigrd[i];
            content[i].efrac6plwin = col_efrac6plwin[i];
            content[i].eiso3sig = col_eiso3sig[i];
            content[i].epl20frac = col_epl20frac[i];
            content[i].longtr = col_longtr[i];
            content[i].longtrfrac = col_longtrfrac[i];
            content[i].mipfrac = col_mipfrac[i];
            content[i].miphits = col_miphits[i];
            content[i].ncell = col_ncell[i];
            content[i].pid = col_pid[i];
            content[i].prongEbal2D = col_prongEbal2D[i];
            content[i].prongEbal3D = col_prongEbal3D[i];
            content[i].prongs2D = col_prongs2D[i];
            content[i].prongs3D = col_prongs3D[i];
            content[i].recoE = col_recoE[i];
            content[i].rvp12 = col_rvp12[i];
            content[i].subevt = col_subevt[i];
            
        }

        return { col_run, col_subrun, col_evt, content };
    }

    static std::tuple<
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<rec_sel_rvp>
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
        dataset = H5Dopen(file, "/rec.sel.rvp/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        runs.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(runs.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        dataset = H5Dopen(file, "/rec.sel.rvp/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        subruns.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(subruns.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        dataset = H5Dopen(file, "/rec.sel.rvp/evt", H5P_DEFAULT);
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