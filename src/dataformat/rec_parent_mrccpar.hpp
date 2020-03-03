/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_PARENT_MRCCPAR_HPP_
#define __REC_PARENT_MRCCPAR_HPP_

#include <tuple>
#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_parent_mrccpar structure for the 
 * "/rec.parent.mrccpar" table in corresponding HDF5 files.
 */
struct rec_parent_mrccpar {

    std::int32_t contplanes; /* contplanes column */
    float cvnm; /* cvnm column */
    std::int32_t cycle; /* cycle column */
    float eff; /* eff column */
    std::int32_t firstplane; /* firstplane column */
    float hadEinmucat; /* hadEinmucat column */
    std::int32_t lastplane; /* lastplane column */
    float muE; /* muE column */
    std::int32_t muonbkcell; /* muonbkcell column */
    std::int32_t muonfwdcell; /* muonfwdcell column */
    float muonstart_x; /* muonstart.x column */
    float muonstart_y; /* muonstart.y column */
    float muonstart_z; /* muonstart.z column */
    float muonstop_x; /* muonstop.x column */
    float muonstop_y; /* muonstop.y column */
    float muonstop_z; /* muonstop.z column */
    float muonyattrans; /* muonyattrans column */
    std::int32_t ncellsfromedge; /* ncellsfromedge column */
    std::int32_t nhit; /* nhit column */
    float numuE; /* numuE column */
    float pur; /* pur column */
    float remid; /* remid column */
    std::int32_t slcidx; /* slcidx column */
    std::uint16_t subevt; /* subevt column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & contplanes;
        ar & cvnm;
        ar & cycle;
        ar & eff;
        ar & firstplane;
        ar & hadEinmucat;
        ar & lastplane;
        ar & muE;
        ar & muonbkcell;
        ar & muonfwdcell;
        ar & muonstart_x;
        ar & muonstart_y;
        ar & muonstart_z;
        ar & muonstop_x;
        ar & muonstop_y;
        ar & muonstop_z;
        ar & muonyattrans;
        ar & ncellsfromedge;
        ar & nhit;
        ar & numuE;
        ar & pur;
        ar & remid;
        ar & slcidx;
        ar & subevt;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_parent_mrccpar& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_parent_mrccpar current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;
        _read_indices(file, col_run, col_subrun, col_evt);

        std::vector<std::int32_t> col_contplanes; /* contplanes column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/contplanes", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_contplanes.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_contplanes.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_cvnm; /* cvnm column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/cvnm", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cvnm.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cvnm.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_eff; /* eff column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/eff", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_eff.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_eff.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_firstplane; /* firstplane column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/firstplane", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_firstplane.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_firstplane.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_hadEinmucat; /* hadEinmucat column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/hadEinmucat", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_hadEinmucat.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_hadEinmucat.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_lastplane; /* lastplane column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/lastplane", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_lastplane.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_lastplane.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_muE; /* muE column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/muE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_muonbkcell; /* muonbkcell column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/muonbkcell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muonbkcell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muonbkcell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_muonfwdcell; /* muonfwdcell column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/muonfwdcell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muonfwdcell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muonfwdcell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_muonstart_x; /* muonstart.x column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/muonstart.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muonstart_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muonstart_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_muonstart_y; /* muonstart.y column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/muonstart.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muonstart_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muonstart_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_muonstart_z; /* muonstart.z column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/muonstart.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muonstart_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muonstart_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_muonstop_x; /* muonstop.x column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/muonstop.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muonstop_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muonstop_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_muonstop_y; /* muonstop.y column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/muonstop.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muonstop_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muonstop_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_muonstop_z; /* muonstop.z column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/muonstop.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muonstop_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muonstop_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_muonyattrans; /* muonyattrans column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/muonyattrans", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muonyattrans.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muonyattrans.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_ncellsfromedge; /* ncellsfromedge column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/ncellsfromedge", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ncellsfromedge.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ncellsfromedge.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nhit; /* nhit column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/nhit", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nhit.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nhit.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_numuE; /* numuE column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/numuE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_numuE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_numuE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pur; /* pur column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/pur", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pur.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pur.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_remid; /* remid column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/remid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_remid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_remid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_slcidx; /* slcidx column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/slcidx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_slcidx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_slcidx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.contplanes = col_contplanes[i];
            current.cvnm = col_cvnm[i];
            current.cycle = col_cycle[i];
            current.eff = col_eff[i];
            current.firstplane = col_firstplane[i];
            current.hadEinmucat = col_hadEinmucat[i];
            current.lastplane = col_lastplane[i];
            current.muE = col_muE[i];
            current.muonbkcell = col_muonbkcell[i];
            current.muonfwdcell = col_muonfwdcell[i];
            current.muonstart_x = col_muonstart_x[i];
            current.muonstart_y = col_muonstart_y[i];
            current.muonstart_z = col_muonstart_z[i];
            current.muonstop_x = col_muonstop_x[i];
            current.muonstop_y = col_muonstop_y[i];
            current.muonstop_z = col_muonstop_z[i];
            current.muonyattrans = col_muonyattrans[i];
            current.ncellsfromedge = col_ncellsfromedge[i];
            current.nhit = col_nhit[i];
            current.numuE = col_numuE[i];
            current.pur = col_pur[i];
            current.remid = col_remid[i];
            current.slcidx = col_slcidx[i];
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
            std::vector<rec_parent_mrccpar>
           > from_hdf5(hid_t file) {
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;
        std::vector<rec_parent_mrccpar> content;
        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;

        _read_indices(file, col_run, col_subrun, col_evt);

        content.resize(col_run.size());

        std::vector<std::int32_t> col_contplanes; /* contplanes column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/contplanes", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_contplanes.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_contplanes.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_cvnm; /* cvnm column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/cvnm", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cvnm.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cvnm.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_eff; /* eff column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/eff", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_eff.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_eff.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_firstplane; /* firstplane column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/firstplane", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_firstplane.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_firstplane.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_hadEinmucat; /* hadEinmucat column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/hadEinmucat", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_hadEinmucat.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_hadEinmucat.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_lastplane; /* lastplane column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/lastplane", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_lastplane.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_lastplane.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_muE; /* muE column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/muE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_muonbkcell; /* muonbkcell column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/muonbkcell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muonbkcell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muonbkcell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_muonfwdcell; /* muonfwdcell column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/muonfwdcell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muonfwdcell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muonfwdcell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_muonstart_x; /* muonstart.x column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/muonstart.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muonstart_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muonstart_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_muonstart_y; /* muonstart.y column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/muonstart.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muonstart_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muonstart_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_muonstart_z; /* muonstart.z column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/muonstart.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muonstart_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muonstart_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_muonstop_x; /* muonstop.x column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/muonstop.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muonstop_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muonstop_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_muonstop_y; /* muonstop.y column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/muonstop.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muonstop_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muonstop_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_muonstop_z; /* muonstop.z column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/muonstop.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muonstop_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muonstop_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_muonyattrans; /* muonyattrans column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/muonyattrans", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muonyattrans.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muonyattrans.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_ncellsfromedge; /* ncellsfromedge column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/ncellsfromedge", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ncellsfromedge.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ncellsfromedge.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nhit; /* nhit column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/nhit", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nhit.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nhit.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_numuE; /* numuE column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/numuE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_numuE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_numuE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pur; /* pur column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/pur", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pur.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pur.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_remid; /* remid column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/remid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_remid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_remid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_slcidx; /* slcidx column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/slcidx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_slcidx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_slcidx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            content[i].contplanes = col_contplanes[i];
            content[i].cvnm = col_cvnm[i];
            content[i].cycle = col_cycle[i];
            content[i].eff = col_eff[i];
            content[i].firstplane = col_firstplane[i];
            content[i].hadEinmucat = col_hadEinmucat[i];
            content[i].lastplane = col_lastplane[i];
            content[i].muE = col_muE[i];
            content[i].muonbkcell = col_muonbkcell[i];
            content[i].muonfwdcell = col_muonfwdcell[i];
            content[i].muonstart_x = col_muonstart_x[i];
            content[i].muonstart_y = col_muonstart_y[i];
            content[i].muonstart_z = col_muonstart_z[i];
            content[i].muonstop_x = col_muonstop_x[i];
            content[i].muonstop_y = col_muonstop_y[i];
            content[i].muonstop_z = col_muonstop_z[i];
            content[i].muonyattrans = col_muonyattrans[i];
            content[i].ncellsfromedge = col_ncellsfromedge[i];
            content[i].nhit = col_nhit[i];
            content[i].numuE = col_numuE[i];
            content[i].pur = col_pur[i];
            content[i].remid = col_remid[i];
            content[i].slcidx = col_slcidx[i];
            content[i].subevt = col_subevt[i];
            
        }

        return { col_run, col_subrun, col_evt, content };
    }

    static std::tuple<
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<rec_parent_mrccpar>
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
        dataset = H5Dopen(file, "/rec.parent.mrccpar/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        runs.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(runs.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        subruns.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(subruns.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        dataset = H5Dopen(file, "/rec.parent.mrccpar/evt", H5P_DEFAULT);
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