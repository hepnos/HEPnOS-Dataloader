/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_VTX_HOUGH_FUZZYK_PNG_SHWLID_HPP_
#define __REC_VTX_HOUGH_FUZZYK_PNG_SHWLID_HPP_

#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_vtx_hough_fuzzyk_png_shwlid structure for the 
 * "/rec.vtx.hough.fuzzyk.png.shwlid" table in corresponding HDF5 files.
 */
struct rec_vtx_hough_fuzzyk_png_shwlid {

    float calE; /* calE column */
    std::int32_t cycle; /* cycle column */
    float dir_x; /* dir.x column */
    float dir_y; /* dir.y column */
    float dir_z; /* dir.z column */
    float gap; /* gap column */
    float len; /* len column */
    std::uint32_t rec_vtx_hough_fuzzyk_png_idx; /* rec.vtx.hough.fuzzyk.png_idx column */
    std::uint32_t rec_vtx_hough_idx; /* rec.vtx.hough_idx column */
    float shwE; /* shwE column */
    float start_x; /* start.x column */
    float start_y; /* start.y column */
    float start_z; /* start.z column */
    float stop_x; /* stop.x column */
    float stop_y; /* stop.y column */
    float stop_z; /* stop.z column */
    float vtxE; /* vtxE column */
    float width; /* width column */
    std::uint16_t maxplanecont; /* maxplanecont column */
    std::uint16_t maxplanegap; /* maxplanegap column */
    std::uint16_t nhit; /* nhit column */
    std::uint16_t nhitx; /* nhitx column */
    std::uint16_t nhity; /* nhity column */
    std::uint16_t nplane; /* nplane column */
    std::uint16_t nplanex; /* nplanex column */
    std::uint16_t nplaney; /* nplaney column */
    std::uint16_t subevt; /* subevt column */
    std::uint16_t view; /* view column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & calE;
        ar & cycle;
        ar & dir_x;
        ar & dir_y;
        ar & dir_z;
        ar & gap;
        ar & len;
        ar & rec_vtx_hough_fuzzyk_png_idx;
        ar & rec_vtx_hough_idx;
        ar & shwE;
        ar & start_x;
        ar & start_y;
        ar & start_z;
        ar & stop_x;
        ar & stop_y;
        ar & stop_z;
        ar & vtxE;
        ar & width;
        ar & maxplanecont;
        ar & maxplanegap;
        ar & nhit;
        ar & nhitx;
        ar & nhity;
        ar & nplane;
        ar & nplanex;
        ar & nplaney;
        ar & subevt;
        ar & view;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_vtx_hough_fuzzyk_png_shwlid& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_vtx_hough_fuzzyk_png_shwlid current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<float> col_calE; /* calE column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.shwlid/calE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_calE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_calE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.shwlid/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dir_x; /* dir.x column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.shwlid/dir.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dir_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dir_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dir_y; /* dir.y column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.shwlid/dir.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dir_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dir_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dir_z; /* dir.z column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.shwlid/dir.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dir_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dir_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_gap; /* gap column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.shwlid/gap", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_gap.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_gap.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_len; /* len column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.shwlid/len", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_len.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_len.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_vtx_hough_fuzzyk_png_idx; /* rec.vtx.hough.fuzzyk.png_idx column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.shwlid/rec.vtx.hough.fuzzyk.png_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_vtx_hough_fuzzyk_png_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_vtx_hough_fuzzyk_png_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_vtx_hough_idx; /* rec.vtx.hough_idx column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.shwlid/rec.vtx.hough_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_vtx_hough_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_vtx_hough_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_shwE; /* shwE column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.shwlid/shwE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_shwE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_shwE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_start_x; /* start.x column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.shwlid/start.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_start_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_start_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_start_y; /* start.y column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.shwlid/start.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_start_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_start_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_start_z; /* start.z column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.shwlid/start.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_start_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_start_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stop_x; /* stop.x column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.shwlid/stop.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stop_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stop_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stop_y; /* stop.y column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.shwlid/stop.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stop_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stop_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stop_z; /* stop.z column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.shwlid/stop.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stop_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stop_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_vtxE; /* vtxE column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.shwlid/vtxE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_vtxE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_vtxE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_width; /* width column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.shwlid/width", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_width.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_width.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_maxplanecont; /* maxplanecont column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.shwlid/maxplanecont", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_maxplanecont.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_maxplanecont.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_maxplanegap; /* maxplanegap column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.shwlid/maxplanegap", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_maxplanegap.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_maxplanegap.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_nhit; /* nhit column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.shwlid/nhit", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nhit.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nhit.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_nhitx; /* nhitx column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.shwlid/nhitx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nhitx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nhitx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_nhity; /* nhity column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.shwlid/nhity", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nhity.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nhity.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_nplane; /* nplane column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.shwlid/nplane", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nplane.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nplane.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_nplanex; /* nplanex column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.shwlid/nplanex", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nplanex.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nplanex.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_nplaney; /* nplaney column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.shwlid/nplaney", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nplaney.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nplaney.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.shwlid/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_view; /* view column */
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.shwlid/view", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_view.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_view.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        /* column for run indices */
        std::vector<unsigned> col_run;
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.shwlid/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_run.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_run.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        std::vector<unsigned> col_subrun;
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.shwlid/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subrun.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subrun.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        std::vector<unsigned> col_evt;
        dataset = H5Dopen(file, "/rec.vtx.hough.fuzzyk.png.shwlid/evt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.calE = col_calE[i];
            current.cycle = col_cycle[i];
            current.dir_x = col_dir_x[i];
            current.dir_y = col_dir_y[i];
            current.dir_z = col_dir_z[i];
            current.gap = col_gap[i];
            current.len = col_len[i];
            current.rec_vtx_hough_fuzzyk_png_idx = col_rec_vtx_hough_fuzzyk_png_idx[i];
            current.rec_vtx_hough_idx = col_rec_vtx_hough_idx[i];
            current.shwE = col_shwE[i];
            current.start_x = col_start_x[i];
            current.start_y = col_start_y[i];
            current.start_z = col_start_z[i];
            current.stop_x = col_stop_x[i];
            current.stop_y = col_stop_y[i];
            current.stop_z = col_stop_z[i];
            current.vtxE = col_vtxE[i];
            current.width = col_width[i];
            current.maxplanecont = col_maxplanecont[i];
            current.maxplanegap = col_maxplanegap[i];
            current.nhit = col_nhit[i];
            current.nhitx = col_nhitx[i];
            current.nhity = col_nhity[i];
            current.nplane = col_nplane[i];
            current.nplanex = col_nplanex[i];
            current.nplaney = col_nplaney[i];
            current.subevt = col_subevt[i];
            current.view = col_view[i];
            
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