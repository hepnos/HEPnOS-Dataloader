/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_SEL_CONTAIN_HPP_
#define __REC_SEL_CONTAIN_HPP_

#include <tuple>
#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_sel_contain structure for the 
 * "/rec.sel.contain" table in corresponding HDF5 files.
 */
struct rec_sel_contain {

    float cosbakair; /* cosbakair column */
    std::int32_t cosbakcell; /* cosbakcell column */
    std::int32_t cosbakcellnd; /* cosbakcellnd column */
    float cosbakdist; /* cosbakdist column */
    float cosbaksteel; /* cosbaksteel column */
    float cosfwdair; /* cosfwdair column */
    std::int32_t cosfwdcell; /* cosfwdcell column */
    std::int32_t cosfwdcellnd; /* cosfwdcellnd column */
    float cosfwddist; /* cosfwddist column */
    float cosfwdsteel; /* cosfwdsteel column */
    float cosyposattrans; /* cosyposattrans column */
    std::int32_t cycle; /* cycle column */
    float enddist; /* enddist column */
    float kalbakair; /* kalbakair column */
    std::int32_t kalbakcell; /* kalbakcell column */
    std::int32_t kalbakcellnd; /* kalbakcellnd column */
    float kalbakdist; /* kalbakdist column */
    float kalbaksteel; /* kalbaksteel column */
    float kalfwdair; /* kalfwdair column */
    std::int32_t kalfwdcell; /* kalfwdcell column */
    std::int32_t kalfwdcellnd; /* kalfwdcellnd column */
    float kalfwddist; /* kalfwddist column */
    float kalfwdsteel; /* kalfwdsteel column */
    float kalyposattrans; /* kalyposattrans column */
    float missE; /* missE column */
    std::int32_t nplanestoback; /* nplanestoback column */
    std::int32_t nplanestofront; /* nplanestofront column */
    float vtxdist; /* vtxdist column */
    float xmax2; /* xmax2 column */
    float xmaxt; /* xmaxt column */
    float xmin2; /* xmin2 column */
    float xmint; /* xmint column */
    float ymax2; /* ymax2 column */
    float ymaxt; /* ymaxt column */
    float ymin2; /* ymin2 column */
    float ymint; /* ymint column */
    float zmax2; /* zmax2 column */
    float zmaxt; /* zmaxt column */
    float zmin2; /* zmin2 column */
    float zmint; /* zmint column */
    std::uint16_t numucontain; /* numucontain column */
    std::uint16_t numucontainSA; /* numucontainSA column */
    std::uint16_t subevt; /* subevt column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & cosbakair;
        ar & cosbakcell;
        ar & cosbakcellnd;
        ar & cosbakdist;
        ar & cosbaksteel;
        ar & cosfwdair;
        ar & cosfwdcell;
        ar & cosfwdcellnd;
        ar & cosfwddist;
        ar & cosfwdsteel;
        ar & cosyposattrans;
        ar & cycle;
        ar & enddist;
        ar & kalbakair;
        ar & kalbakcell;
        ar & kalbakcellnd;
        ar & kalbakdist;
        ar & kalbaksteel;
        ar & kalfwdair;
        ar & kalfwdcell;
        ar & kalfwdcellnd;
        ar & kalfwddist;
        ar & kalfwdsteel;
        ar & kalyposattrans;
        ar & missE;
        ar & nplanestoback;
        ar & nplanestofront;
        ar & vtxdist;
        ar & xmax2;
        ar & xmaxt;
        ar & xmin2;
        ar & xmint;
        ar & ymax2;
        ar & ymaxt;
        ar & ymin2;
        ar & ymint;
        ar & zmax2;
        ar & zmaxt;
        ar & zmin2;
        ar & zmint;
        ar & numucontain;
        ar & numucontainSA;
        ar & subevt;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_sel_contain& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_sel_contain current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;
        _read_indices(file, col_run, col_subrun, col_evt);

        std::vector<float> col_cosbakair; /* cosbakair column */
        dataset = H5Dopen(file, "/rec.sel.contain/cosbakair", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cosbakair.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cosbakair.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cosbakcell; /* cosbakcell column */
        dataset = H5Dopen(file, "/rec.sel.contain/cosbakcell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cosbakcell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cosbakcell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cosbakcellnd; /* cosbakcellnd column */
        dataset = H5Dopen(file, "/rec.sel.contain/cosbakcellnd", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cosbakcellnd.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cosbakcellnd.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_cosbakdist; /* cosbakdist column */
        dataset = H5Dopen(file, "/rec.sel.contain/cosbakdist", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cosbakdist.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cosbakdist.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_cosbaksteel; /* cosbaksteel column */
        dataset = H5Dopen(file, "/rec.sel.contain/cosbaksteel", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cosbaksteel.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cosbaksteel.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_cosfwdair; /* cosfwdair column */
        dataset = H5Dopen(file, "/rec.sel.contain/cosfwdair", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cosfwdair.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cosfwdair.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cosfwdcell; /* cosfwdcell column */
        dataset = H5Dopen(file, "/rec.sel.contain/cosfwdcell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cosfwdcell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cosfwdcell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cosfwdcellnd; /* cosfwdcellnd column */
        dataset = H5Dopen(file, "/rec.sel.contain/cosfwdcellnd", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cosfwdcellnd.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cosfwdcellnd.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_cosfwddist; /* cosfwddist column */
        dataset = H5Dopen(file, "/rec.sel.contain/cosfwddist", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cosfwddist.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cosfwddist.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_cosfwdsteel; /* cosfwdsteel column */
        dataset = H5Dopen(file, "/rec.sel.contain/cosfwdsteel", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cosfwdsteel.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cosfwdsteel.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_cosyposattrans; /* cosyposattrans column */
        dataset = H5Dopen(file, "/rec.sel.contain/cosyposattrans", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cosyposattrans.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cosyposattrans.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.sel.contain/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_enddist; /* enddist column */
        dataset = H5Dopen(file, "/rec.sel.contain/enddist", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_enddist.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_enddist.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_kalbakair; /* kalbakair column */
        dataset = H5Dopen(file, "/rec.sel.contain/kalbakair", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_kalbakair.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_kalbakair.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_kalbakcell; /* kalbakcell column */
        dataset = H5Dopen(file, "/rec.sel.contain/kalbakcell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_kalbakcell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_kalbakcell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_kalbakcellnd; /* kalbakcellnd column */
        dataset = H5Dopen(file, "/rec.sel.contain/kalbakcellnd", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_kalbakcellnd.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_kalbakcellnd.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_kalbakdist; /* kalbakdist column */
        dataset = H5Dopen(file, "/rec.sel.contain/kalbakdist", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_kalbakdist.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_kalbakdist.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_kalbaksteel; /* kalbaksteel column */
        dataset = H5Dopen(file, "/rec.sel.contain/kalbaksteel", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_kalbaksteel.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_kalbaksteel.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_kalfwdair; /* kalfwdair column */
        dataset = H5Dopen(file, "/rec.sel.contain/kalfwdair", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_kalfwdair.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_kalfwdair.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_kalfwdcell; /* kalfwdcell column */
        dataset = H5Dopen(file, "/rec.sel.contain/kalfwdcell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_kalfwdcell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_kalfwdcell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_kalfwdcellnd; /* kalfwdcellnd column */
        dataset = H5Dopen(file, "/rec.sel.contain/kalfwdcellnd", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_kalfwdcellnd.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_kalfwdcellnd.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_kalfwddist; /* kalfwddist column */
        dataset = H5Dopen(file, "/rec.sel.contain/kalfwddist", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_kalfwddist.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_kalfwddist.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_kalfwdsteel; /* kalfwdsteel column */
        dataset = H5Dopen(file, "/rec.sel.contain/kalfwdsteel", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_kalfwdsteel.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_kalfwdsteel.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_kalyposattrans; /* kalyposattrans column */
        dataset = H5Dopen(file, "/rec.sel.contain/kalyposattrans", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_kalyposattrans.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_kalyposattrans.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_missE; /* missE column */
        dataset = H5Dopen(file, "/rec.sel.contain/missE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_missE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_missE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nplanestoback; /* nplanestoback column */
        dataset = H5Dopen(file, "/rec.sel.contain/nplanestoback", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nplanestoback.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nplanestoback.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nplanestofront; /* nplanestofront column */
        dataset = H5Dopen(file, "/rec.sel.contain/nplanestofront", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nplanestofront.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nplanestofront.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_vtxdist; /* vtxdist column */
        dataset = H5Dopen(file, "/rec.sel.contain/vtxdist", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_vtxdist.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_vtxdist.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_xmax2; /* xmax2 column */
        dataset = H5Dopen(file, "/rec.sel.contain/xmax2", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_xmax2.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_xmax2.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_xmaxt; /* xmaxt column */
        dataset = H5Dopen(file, "/rec.sel.contain/xmaxt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_xmaxt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_xmaxt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_xmin2; /* xmin2 column */
        dataset = H5Dopen(file, "/rec.sel.contain/xmin2", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_xmin2.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_xmin2.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_xmint; /* xmint column */
        dataset = H5Dopen(file, "/rec.sel.contain/xmint", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_xmint.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_xmint.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ymax2; /* ymax2 column */
        dataset = H5Dopen(file, "/rec.sel.contain/ymax2", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ymax2.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ymax2.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ymaxt; /* ymaxt column */
        dataset = H5Dopen(file, "/rec.sel.contain/ymaxt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ymaxt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ymaxt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ymin2; /* ymin2 column */
        dataset = H5Dopen(file, "/rec.sel.contain/ymin2", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ymin2.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ymin2.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ymint; /* ymint column */
        dataset = H5Dopen(file, "/rec.sel.contain/ymint", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ymint.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ymint.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_zmax2; /* zmax2 column */
        dataset = H5Dopen(file, "/rec.sel.contain/zmax2", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_zmax2.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_zmax2.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_zmaxt; /* zmaxt column */
        dataset = H5Dopen(file, "/rec.sel.contain/zmaxt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_zmaxt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_zmaxt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_zmin2; /* zmin2 column */
        dataset = H5Dopen(file, "/rec.sel.contain/zmin2", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_zmin2.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_zmin2.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_zmint; /* zmint column */
        dataset = H5Dopen(file, "/rec.sel.contain/zmint", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_zmint.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_zmint.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_numucontain; /* numucontain column */
        dataset = H5Dopen(file, "/rec.sel.contain/numucontain", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_numucontain.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_numucontain.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_numucontainSA; /* numucontainSA column */
        dataset = H5Dopen(file, "/rec.sel.contain/numucontainSA", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_numucontainSA.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_numucontainSA.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.sel.contain/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.cosbakair = col_cosbakair[i];
            current.cosbakcell = col_cosbakcell[i];
            current.cosbakcellnd = col_cosbakcellnd[i];
            current.cosbakdist = col_cosbakdist[i];
            current.cosbaksteel = col_cosbaksteel[i];
            current.cosfwdair = col_cosfwdair[i];
            current.cosfwdcell = col_cosfwdcell[i];
            current.cosfwdcellnd = col_cosfwdcellnd[i];
            current.cosfwddist = col_cosfwddist[i];
            current.cosfwdsteel = col_cosfwdsteel[i];
            current.cosyposattrans = col_cosyposattrans[i];
            current.cycle = col_cycle[i];
            current.enddist = col_enddist[i];
            current.kalbakair = col_kalbakair[i];
            current.kalbakcell = col_kalbakcell[i];
            current.kalbakcellnd = col_kalbakcellnd[i];
            current.kalbakdist = col_kalbakdist[i];
            current.kalbaksteel = col_kalbaksteel[i];
            current.kalfwdair = col_kalfwdair[i];
            current.kalfwdcell = col_kalfwdcell[i];
            current.kalfwdcellnd = col_kalfwdcellnd[i];
            current.kalfwddist = col_kalfwddist[i];
            current.kalfwdsteel = col_kalfwdsteel[i];
            current.kalyposattrans = col_kalyposattrans[i];
            current.missE = col_missE[i];
            current.nplanestoback = col_nplanestoback[i];
            current.nplanestofront = col_nplanestofront[i];
            current.vtxdist = col_vtxdist[i];
            current.xmax2 = col_xmax2[i];
            current.xmaxt = col_xmaxt[i];
            current.xmin2 = col_xmin2[i];
            current.xmint = col_xmint[i];
            current.ymax2 = col_ymax2[i];
            current.ymaxt = col_ymaxt[i];
            current.ymin2 = col_ymin2[i];
            current.ymint = col_ymint[i];
            current.zmax2 = col_zmax2[i];
            current.zmaxt = col_zmaxt[i];
            current.zmin2 = col_zmin2[i];
            current.zmint = col_zmint[i];
            current.numucontain = col_numucontain[i];
            current.numucontainSA = col_numucontainSA[i];
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
            std::vector<rec_sel_contain>
           > from_hdf5(hid_t file) {
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;
        std::vector<rec_sel_contain> content;
        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;

        _read_indices(file, col_run, col_subrun, col_evt);

        content.resize(col_run.size());

        std::vector<float> col_cosbakair; /* cosbakair column */
        dataset = H5Dopen(file, "/rec.sel.contain/cosbakair", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cosbakair.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cosbakair.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cosbakcell; /* cosbakcell column */
        dataset = H5Dopen(file, "/rec.sel.contain/cosbakcell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cosbakcell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cosbakcell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cosbakcellnd; /* cosbakcellnd column */
        dataset = H5Dopen(file, "/rec.sel.contain/cosbakcellnd", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cosbakcellnd.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cosbakcellnd.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_cosbakdist; /* cosbakdist column */
        dataset = H5Dopen(file, "/rec.sel.contain/cosbakdist", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cosbakdist.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cosbakdist.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_cosbaksteel; /* cosbaksteel column */
        dataset = H5Dopen(file, "/rec.sel.contain/cosbaksteel", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cosbaksteel.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cosbaksteel.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_cosfwdair; /* cosfwdair column */
        dataset = H5Dopen(file, "/rec.sel.contain/cosfwdair", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cosfwdair.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cosfwdair.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cosfwdcell; /* cosfwdcell column */
        dataset = H5Dopen(file, "/rec.sel.contain/cosfwdcell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cosfwdcell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cosfwdcell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cosfwdcellnd; /* cosfwdcellnd column */
        dataset = H5Dopen(file, "/rec.sel.contain/cosfwdcellnd", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cosfwdcellnd.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cosfwdcellnd.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_cosfwddist; /* cosfwddist column */
        dataset = H5Dopen(file, "/rec.sel.contain/cosfwddist", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cosfwddist.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cosfwddist.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_cosfwdsteel; /* cosfwdsteel column */
        dataset = H5Dopen(file, "/rec.sel.contain/cosfwdsteel", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cosfwdsteel.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cosfwdsteel.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_cosyposattrans; /* cosyposattrans column */
        dataset = H5Dopen(file, "/rec.sel.contain/cosyposattrans", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cosyposattrans.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cosyposattrans.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.sel.contain/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_enddist; /* enddist column */
        dataset = H5Dopen(file, "/rec.sel.contain/enddist", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_enddist.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_enddist.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_kalbakair; /* kalbakair column */
        dataset = H5Dopen(file, "/rec.sel.contain/kalbakair", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_kalbakair.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_kalbakair.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_kalbakcell; /* kalbakcell column */
        dataset = H5Dopen(file, "/rec.sel.contain/kalbakcell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_kalbakcell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_kalbakcell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_kalbakcellnd; /* kalbakcellnd column */
        dataset = H5Dopen(file, "/rec.sel.contain/kalbakcellnd", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_kalbakcellnd.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_kalbakcellnd.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_kalbakdist; /* kalbakdist column */
        dataset = H5Dopen(file, "/rec.sel.contain/kalbakdist", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_kalbakdist.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_kalbakdist.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_kalbaksteel; /* kalbaksteel column */
        dataset = H5Dopen(file, "/rec.sel.contain/kalbaksteel", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_kalbaksteel.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_kalbaksteel.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_kalfwdair; /* kalfwdair column */
        dataset = H5Dopen(file, "/rec.sel.contain/kalfwdair", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_kalfwdair.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_kalfwdair.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_kalfwdcell; /* kalfwdcell column */
        dataset = H5Dopen(file, "/rec.sel.contain/kalfwdcell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_kalfwdcell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_kalfwdcell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_kalfwdcellnd; /* kalfwdcellnd column */
        dataset = H5Dopen(file, "/rec.sel.contain/kalfwdcellnd", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_kalfwdcellnd.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_kalfwdcellnd.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_kalfwddist; /* kalfwddist column */
        dataset = H5Dopen(file, "/rec.sel.contain/kalfwddist", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_kalfwddist.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_kalfwddist.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_kalfwdsteel; /* kalfwdsteel column */
        dataset = H5Dopen(file, "/rec.sel.contain/kalfwdsteel", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_kalfwdsteel.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_kalfwdsteel.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_kalyposattrans; /* kalyposattrans column */
        dataset = H5Dopen(file, "/rec.sel.contain/kalyposattrans", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_kalyposattrans.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_kalyposattrans.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_missE; /* missE column */
        dataset = H5Dopen(file, "/rec.sel.contain/missE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_missE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_missE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nplanestoback; /* nplanestoback column */
        dataset = H5Dopen(file, "/rec.sel.contain/nplanestoback", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nplanestoback.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nplanestoback.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nplanestofront; /* nplanestofront column */
        dataset = H5Dopen(file, "/rec.sel.contain/nplanestofront", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nplanestofront.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nplanestofront.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_vtxdist; /* vtxdist column */
        dataset = H5Dopen(file, "/rec.sel.contain/vtxdist", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_vtxdist.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_vtxdist.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_xmax2; /* xmax2 column */
        dataset = H5Dopen(file, "/rec.sel.contain/xmax2", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_xmax2.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_xmax2.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_xmaxt; /* xmaxt column */
        dataset = H5Dopen(file, "/rec.sel.contain/xmaxt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_xmaxt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_xmaxt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_xmin2; /* xmin2 column */
        dataset = H5Dopen(file, "/rec.sel.contain/xmin2", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_xmin2.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_xmin2.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_xmint; /* xmint column */
        dataset = H5Dopen(file, "/rec.sel.contain/xmint", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_xmint.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_xmint.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ymax2; /* ymax2 column */
        dataset = H5Dopen(file, "/rec.sel.contain/ymax2", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ymax2.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ymax2.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ymaxt; /* ymaxt column */
        dataset = H5Dopen(file, "/rec.sel.contain/ymaxt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ymaxt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ymaxt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ymin2; /* ymin2 column */
        dataset = H5Dopen(file, "/rec.sel.contain/ymin2", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ymin2.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ymin2.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ymint; /* ymint column */
        dataset = H5Dopen(file, "/rec.sel.contain/ymint", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ymint.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ymint.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_zmax2; /* zmax2 column */
        dataset = H5Dopen(file, "/rec.sel.contain/zmax2", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_zmax2.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_zmax2.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_zmaxt; /* zmaxt column */
        dataset = H5Dopen(file, "/rec.sel.contain/zmaxt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_zmaxt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_zmaxt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_zmin2; /* zmin2 column */
        dataset = H5Dopen(file, "/rec.sel.contain/zmin2", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_zmin2.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_zmin2.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_zmint; /* zmint column */
        dataset = H5Dopen(file, "/rec.sel.contain/zmint", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_zmint.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_zmint.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_numucontain; /* numucontain column */
        dataset = H5Dopen(file, "/rec.sel.contain/numucontain", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_numucontain.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_numucontain.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_numucontainSA; /* numucontainSA column */
        dataset = H5Dopen(file, "/rec.sel.contain/numucontainSA", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_numucontainSA.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_numucontainSA.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.sel.contain/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            content[i].cosbakair = col_cosbakair[i];
            content[i].cosbakcell = col_cosbakcell[i];
            content[i].cosbakcellnd = col_cosbakcellnd[i];
            content[i].cosbakdist = col_cosbakdist[i];
            content[i].cosbaksteel = col_cosbaksteel[i];
            content[i].cosfwdair = col_cosfwdair[i];
            content[i].cosfwdcell = col_cosfwdcell[i];
            content[i].cosfwdcellnd = col_cosfwdcellnd[i];
            content[i].cosfwddist = col_cosfwddist[i];
            content[i].cosfwdsteel = col_cosfwdsteel[i];
            content[i].cosyposattrans = col_cosyposattrans[i];
            content[i].cycle = col_cycle[i];
            content[i].enddist = col_enddist[i];
            content[i].kalbakair = col_kalbakair[i];
            content[i].kalbakcell = col_kalbakcell[i];
            content[i].kalbakcellnd = col_kalbakcellnd[i];
            content[i].kalbakdist = col_kalbakdist[i];
            content[i].kalbaksteel = col_kalbaksteel[i];
            content[i].kalfwdair = col_kalfwdair[i];
            content[i].kalfwdcell = col_kalfwdcell[i];
            content[i].kalfwdcellnd = col_kalfwdcellnd[i];
            content[i].kalfwddist = col_kalfwddist[i];
            content[i].kalfwdsteel = col_kalfwdsteel[i];
            content[i].kalyposattrans = col_kalyposattrans[i];
            content[i].missE = col_missE[i];
            content[i].nplanestoback = col_nplanestoback[i];
            content[i].nplanestofront = col_nplanestofront[i];
            content[i].vtxdist = col_vtxdist[i];
            content[i].xmax2 = col_xmax2[i];
            content[i].xmaxt = col_xmaxt[i];
            content[i].xmin2 = col_xmin2[i];
            content[i].xmint = col_xmint[i];
            content[i].ymax2 = col_ymax2[i];
            content[i].ymaxt = col_ymaxt[i];
            content[i].ymin2 = col_ymin2[i];
            content[i].ymint = col_ymint[i];
            content[i].zmax2 = col_zmax2[i];
            content[i].zmaxt = col_zmaxt[i];
            content[i].zmin2 = col_zmin2[i];
            content[i].zmint = col_zmint[i];
            content[i].numucontain = col_numucontain[i];
            content[i].numucontainSA = col_numucontainSA[i];
            content[i].subevt = col_subevt[i];
            
        }

        return { col_run, col_subrun, col_evt, content };
    }

    static std::tuple<
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<rec_sel_contain>
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
        dataset = H5Dopen(file, "/rec.sel.contain/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        runs.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(runs.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        dataset = H5Dopen(file, "/rec.sel.contain/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        subruns.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(subruns.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        dataset = H5Dopen(file, "/rec.sel.contain/evt", H5P_DEFAULT);
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