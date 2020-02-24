/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_VTX_HOUGH_FUZZYK_PNG_TRUTHYVIEW_MOTHERLIST_HPP_
#define __REC_VTX_HOUGH_FUZZYK_PNG_TRUTHYVIEW_MOTHERLIST_HPP_

#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_vtx_hough_fuzzyk_png_truthYView_motherlist structure for the 
 * "/rec.vtx.hough.fuzzyk.png.truthYView.motherlist" table in corresponding HDF5 files.
 */
struct rec_vtx_hough_fuzzyk_png_truthYView_motherlist {

    std::int32_t cycle; /* cycle column */
    std::uint32_t rec_vtx_hough_fuzzyk_png_truthYView_motherlist_idx; /* rec.vtx.hough.fuzzyk.png.truthYView.motherlist_idx column */
    std::uint32_t rec_vtx_hough_fuzzyk_png_idx; /* rec.vtx.hough.fuzzyk.png_idx column */
    std::uint32_t rec_vtx_hough_idx; /* rec.vtx.hough_idx column */
    std::int32_t value; /* value column */
    std::uint16_t subevt; /* subevt column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & cycle;
        ar & rec_vtx_hough_fuzzyk_png_truthYView_motherlist_idx;
        ar & rec_vtx_hough_fuzzyk_png_idx;
        ar & rec_vtx_hough_idx;
        ar & value;
        ar & subevt;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_vtx_hough_fuzzyk_png_truthYView_motherlist& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_vtx_hough_fuzzyk_png_truthYView_motherlist current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.truthYView.motherlist/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_vtx_hough_fuzzyk_png_truthYView_motherlist_idx; /* rec.vtx.hough.fuzzyk.png.truthYView.motherlist_idx column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.truthYView.motherlist/rec.vtx.hough.fuzzyk.png.truthYView.motherlist_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_vtx_hough_fuzzyk_png_truthYView_motherlist_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_vtx_hough_fuzzyk_png_truthYView_motherlist_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_vtx_hough_fuzzyk_png_idx; /* rec.vtx.hough.fuzzyk.png_idx column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.truthYView.motherlist/rec.vtx.hough.fuzzyk.png_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_vtx_hough_fuzzyk_png_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_vtx_hough_fuzzyk_png_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_vtx_hough_idx; /* rec.vtx.hough_idx column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.truthYView.motherlist/rec.vtx.hough_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_vtx_hough_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_vtx_hough_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_value; /* value column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.truthYView.motherlist/value", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_value.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_value.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.truthYView.motherlist/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        /* column for run indices */
        std::vector<unsigned> col_run;
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.truthYView.motherlist/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_run.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_run.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        std::vector<unsigned> col_subrun;
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.truthYView.motherlist/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subrun.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subrun.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        std::vector<unsigned> col_evt;
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.truthYView.motherlist/evt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.cycle = col_cycle[i];
            current.rec_vtx_hough_fuzzyk_png_truthYView_motherlist_idx = col_rec_vtx_hough_fuzzyk_png_truthYView_motherlist_idx[i];
            current.rec_vtx_hough_fuzzyk_png_idx = col_rec_vtx_hough_fuzzyk_png_idx[i];
            current.rec_vtx_hough_idx = col_rec_vtx_hough_idx[i];
            current.value = col_value[i];
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