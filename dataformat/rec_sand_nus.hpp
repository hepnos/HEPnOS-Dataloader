/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_SAND_NUS_HPP_
#define __REC_SAND_NUS_HPP_

#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_sand_nus structure for the 
 * "/rec.sand.nus" table in corresponding HDF5 files.
 */
struct rec_sand_nus {

    float angewsumtx; /* angewsumtx column */
    float angewsumty; /* angewsumty column */
    float angsumtx; /* angsumtx column */
    float angsumty; /* angsumty column */
    float cosewsumtx; /* cosewsumtx column */
    float cosewsumty; /* cosewsumty column */
    float cossumtx; /* cossumtx column */
    float cossumty; /* cossumty column */
    std::int32_t cycle; /* cycle column */
    float ewsumtx; /* ewsumtx column */
    float ewsumty; /* ewsumty column */
    float sumtx; /* sumtx column */
    float sumty; /* sumty column */
    std::uint16_t subevt; /* subevt column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & angewsumtx;
        ar & angewsumty;
        ar & angsumtx;
        ar & angsumty;
        ar & cosewsumtx;
        ar & cosewsumty;
        ar & cossumtx;
        ar & cossumty;
        ar & cycle;
        ar & ewsumtx;
        ar & ewsumty;
        ar & sumtx;
        ar & sumty;
        ar & subevt;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_sand_nus& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_sand_nus current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<float> col_angewsumtx; /* angewsumtx column */
        dataset = H5Dopen(file, "/rec.sand.nus/angewsumtx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_angewsumtx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_angewsumtx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_angewsumty; /* angewsumty column */
        dataset = H5Dopen(file, "/rec.sand.nus/angewsumty", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_angewsumty.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_angewsumty.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_angsumtx; /* angsumtx column */
        dataset = H5Dopen(file, "/rec.sand.nus/angsumtx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_angsumtx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_angsumtx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_angsumty; /* angsumty column */
        dataset = H5Dopen(file, "/rec.sand.nus/angsumty", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_angsumty.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_angsumty.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_cosewsumtx; /* cosewsumtx column */
        dataset = H5Dopen(file, "/rec.sand.nus/cosewsumtx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cosewsumtx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cosewsumtx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_cosewsumty; /* cosewsumty column */
        dataset = H5Dopen(file, "/rec.sand.nus/cosewsumty", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cosewsumty.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cosewsumty.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_cossumtx; /* cossumtx column */
        dataset = H5Dopen(file, "/rec.sand.nus/cossumtx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cossumtx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cossumtx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_cossumty; /* cossumty column */
        dataset = H5Dopen(file, "/rec.sand.nus/cossumty", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cossumty.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cossumty.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.sand.nus/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ewsumtx; /* ewsumtx column */
        dataset = H5Dopen(file, "/rec.sand.nus/ewsumtx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ewsumtx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ewsumtx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ewsumty; /* ewsumty column */
        dataset = H5Dopen(file, "/rec.sand.nus/ewsumty", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ewsumty.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ewsumty.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sumtx; /* sumtx column */
        dataset = H5Dopen(file, "/rec.sand.nus/sumtx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sumtx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sumtx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sumty; /* sumty column */
        dataset = H5Dopen(file, "/rec.sand.nus/sumty", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sumty.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sumty.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.sand.nus/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        /* column for run indices */
        std::vector<unsigned> col_run;
        dataset = H5Dopen(file, "/rec.sand.nus/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_run.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_run.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        std::vector<unsigned> col_subrun;
        dataset = H5Dopen(file, "/rec.sand.nus/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subrun.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subrun.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        std::vector<unsigned> col_evt;
        dataset = H5Dopen(file, "/rec.sand.nus/evt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.angewsumtx = col_angewsumtx[i];
            current.angewsumty = col_angewsumty[i];
            current.angsumtx = col_angsumtx[i];
            current.angsumty = col_angsumty[i];
            current.cosewsumtx = col_cosewsumtx[i];
            current.cosewsumty = col_cosewsumty[i];
            current.cossumtx = col_cossumtx[i];
            current.cossumty = col_cossumty[i];
            current.cycle = col_cycle[i];
            current.ewsumtx = col_ewsumtx[i];
            current.ewsumty = col_ewsumty[i];
            current.sumtx = col_sumtx[i];
            current.sumty = col_sumty[i];
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