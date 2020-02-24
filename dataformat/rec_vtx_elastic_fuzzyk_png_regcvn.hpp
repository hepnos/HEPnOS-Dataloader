/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_VTX_ELASTIC_FUZZYK_PNG_REGCVN_HPP_
#define __REC_VTX_ELASTIC_FUZZYK_PNG_REGCVN_HPP_

#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_vtx_elastic_fuzzyk_png_regcvn structure for the 
 * "/rec.vtx.elastic.fuzzyk.png.regcvn" table in corresponding HDF5 files.
 */
struct rec_vtx_elastic_fuzzyk_png_regcvn {

    std::int32_t cycle; /* cycle column */
    float nuE; /* nuE column */
    float nuPx; /* nuPx column */
    float nuPy; /* nuPy column */
    float nuPz; /* nuPz column */
    float prongE; /* prongE column */
    float prongPx; /* prongPx column */
    float prongPy; /* prongPy column */
    float prongPz; /* prongPz column */
    std::uint32_t rec_vtx_elastic_fuzzyk_png_idx; /* rec.vtx.elastic.fuzzyk.png_idx column */
    std::uint32_t rec_vtx_elastic_idx; /* rec.vtx.elastic_idx column */
    std::uint16_t subevt; /* subevt column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & cycle;
        ar & nuE;
        ar & nuPx;
        ar & nuPy;
        ar & nuPz;
        ar & prongE;
        ar & prongPx;
        ar & prongPy;
        ar & prongPz;
        ar & rec_vtx_elastic_fuzzyk_png_idx;
        ar & rec_vtx_elastic_idx;
        ar & subevt;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_vtx_elastic_fuzzyk_png_regcvn& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_vtx_elastic_fuzzyk_png_regcvn current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.regcvn/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_nuE; /* nuE column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.regcvn/nuE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nuE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nuE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_nuPx; /* nuPx column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.regcvn/nuPx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nuPx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nuPx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_nuPy; /* nuPy column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.regcvn/nuPy", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nuPy.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nuPy.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_nuPz; /* nuPz column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.regcvn/nuPz", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nuPz.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nuPz.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_prongE; /* prongE column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.regcvn/prongE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_prongE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_prongE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_prongPx; /* prongPx column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.regcvn/prongPx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_prongPx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_prongPx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_prongPy; /* prongPy column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.regcvn/prongPy", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_prongPy.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_prongPy.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_prongPz; /* prongPz column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.regcvn/prongPz", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_prongPz.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_prongPz.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_vtx_elastic_fuzzyk_png_idx; /* rec.vtx.elastic.fuzzyk.png_idx column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.regcvn/rec.vtx.elastic.fuzzyk.png_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_vtx_elastic_fuzzyk_png_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_vtx_elastic_fuzzyk_png_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_vtx_elastic_idx; /* rec.vtx.elastic_idx column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.regcvn/rec.vtx.elastic_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_vtx_elastic_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_vtx_elastic_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.regcvn/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        /* column for run indices */
        std::vector<unsigned> col_run;
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.regcvn/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_run.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_run.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        std::vector<unsigned> col_subrun;
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.regcvn/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subrun.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subrun.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        std::vector<unsigned> col_evt;
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.regcvn/evt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.cycle = col_cycle[i];
            current.nuE = col_nuE[i];
            current.nuPx = col_nuPx[i];
            current.nuPy = col_nuPy[i];
            current.nuPz = col_nuPz[i];
            current.prongE = col_prongE[i];
            current.prongPx = col_prongPx[i];
            current.prongPy = col_prongPy[i];
            current.prongPz = col_prongPz[i];
            current.rec_vtx_elastic_fuzzyk_png_idx = col_rec_vtx_elastic_fuzzyk_png_idx[i];
            current.rec_vtx_elastic_idx = col_rec_vtx_elastic_idx[i];
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