/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_VTX_ELASTIC_FUZZYK_PNG_PRONGTRAININGDATA_HPP_
#define __REC_VTX_ELASTIC_FUZZYK_PNG_PRONGTRAININGDATA_HPP_

#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_vtx_elastic_fuzzyk_png_prongtrainingdata structure for the 
 * "/rec.vtx.elastic.fuzzyk.png.prongtrainingdata" table in corresponding HDF5 files.
 */
struct rec_vtx_elastic_fuzzyk_png_prongtrainingdata {

    double pangle; /* pangle column */
    double pgap; /* pgap column */
    double plength; /* plength column */
    double purity3d; /* purity3d column */
    double purityx; /* purityx column */
    double purityy; /* purityy column */
    double rece; /* rece column */
    double vertx; /* vertx column */
    double verty; /* verty column */
    double vertz; /* vertz column */
    std::int32_t cycle; /* cycle column */
    std::int32_t label3d; /* label3d column */
    std::int32_t labelx; /* labelx column */
    std::int32_t labely; /* labely column */
    std::uint32_t ncellx; /* ncellx column */
    std::uint32_t ncelly; /* ncelly column */
    std::uint32_t rec_vtx_elastic_fuzzyk_png_prongtrainingdata_idx; /* rec.vtx.elastic.fuzzyk.png.prongtrainingdata_idx column */
    std::uint32_t rec_vtx_elastic_fuzzyk_png_idx; /* rec.vtx.elastic.fuzzyk.png_idx column */
    std::uint32_t rec_vtx_elastic_idx; /* rec.vtx.elastic_idx column */
    std::uint16_t isprimary; /* isprimary column */
    std::uint16_t subevt; /* subevt column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & pangle;
        ar & pgap;
        ar & plength;
        ar & purity3d;
        ar & purityx;
        ar & purityy;
        ar & rece;
        ar & vertx;
        ar & verty;
        ar & vertz;
        ar & cycle;
        ar & label3d;
        ar & labelx;
        ar & labely;
        ar & ncellx;
        ar & ncelly;
        ar & rec_vtx_elastic_fuzzyk_png_prongtrainingdata_idx;
        ar & rec_vtx_elastic_fuzzyk_png_idx;
        ar & rec_vtx_elastic_idx;
        ar & isprimary;
        ar & subevt;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_vtx_elastic_fuzzyk_png_prongtrainingdata& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_vtx_elastic_fuzzyk_png_prongtrainingdata current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<double> col_pangle; /* pangle column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.prongtrainingdata/pangle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pangle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_DOUBLE, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pangle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<double> col_pgap; /* pgap column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.prongtrainingdata/pgap", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pgap.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_DOUBLE, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pgap.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<double> col_plength; /* plength column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.prongtrainingdata/plength", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_plength.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_DOUBLE, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_plength.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<double> col_purity3d; /* purity3d column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.prongtrainingdata/purity3d", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_purity3d.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_DOUBLE, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_purity3d.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<double> col_purityx; /* purityx column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.prongtrainingdata/purityx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_purityx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_DOUBLE, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_purityx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<double> col_purityy; /* purityy column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.prongtrainingdata/purityy", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_purityy.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_DOUBLE, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_purityy.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<double> col_rece; /* rece column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.prongtrainingdata/rece", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rece.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_DOUBLE, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rece.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<double> col_vertx; /* vertx column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.prongtrainingdata/vertx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_vertx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_DOUBLE, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_vertx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<double> col_verty; /* verty column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.prongtrainingdata/verty", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_verty.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_DOUBLE, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_verty.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<double> col_vertz; /* vertz column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.prongtrainingdata/vertz", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_vertz.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_DOUBLE, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_vertz.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.prongtrainingdata/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_label3d; /* label3d column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.prongtrainingdata/label3d", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_label3d.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_label3d.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_labelx; /* labelx column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.prongtrainingdata/labelx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_labelx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_labelx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_labely; /* labely column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.prongtrainingdata/labely", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_labely.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_labely.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_ncellx; /* ncellx column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.prongtrainingdata/ncellx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ncellx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ncellx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_ncelly; /* ncelly column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.prongtrainingdata/ncelly", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ncelly.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ncelly.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_vtx_elastic_fuzzyk_png_prongtrainingdata_idx; /* rec.vtx.elastic.fuzzyk.png.prongtrainingdata_idx column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.prongtrainingdata/rec.vtx.elastic.fuzzyk.png.prongtrainingdata_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_vtx_elastic_fuzzyk_png_prongtrainingdata_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_vtx_elastic_fuzzyk_png_prongtrainingdata_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_vtx_elastic_fuzzyk_png_idx; /* rec.vtx.elastic.fuzzyk.png_idx column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.prongtrainingdata/rec.vtx.elastic.fuzzyk.png_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_vtx_elastic_fuzzyk_png_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_vtx_elastic_fuzzyk_png_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_vtx_elastic_idx; /* rec.vtx.elastic_idx column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.prongtrainingdata/rec.vtx.elastic_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_vtx_elastic_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_vtx_elastic_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_isprimary; /* isprimary column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.prongtrainingdata/isprimary", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_isprimary.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_isprimary.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.prongtrainingdata/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        /* column for run indices */
        std::vector<unsigned> col_run;
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.prongtrainingdata/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_run.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_run.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        std::vector<unsigned> col_subrun;
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.prongtrainingdata/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subrun.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subrun.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        std::vector<unsigned> col_evt;
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.prongtrainingdata/evt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.pangle = col_pangle[i];
            current.pgap = col_pgap[i];
            current.plength = col_plength[i];
            current.purity3d = col_purity3d[i];
            current.purityx = col_purityx[i];
            current.purityy = col_purityy[i];
            current.rece = col_rece[i];
            current.vertx = col_vertx[i];
            current.verty = col_verty[i];
            current.vertz = col_vertz[i];
            current.cycle = col_cycle[i];
            current.label3d = col_label3d[i];
            current.labelx = col_labelx[i];
            current.labely = col_labely[i];
            current.ncellx = col_ncellx[i];
            current.ncelly = col_ncelly[i];
            current.rec_vtx_elastic_fuzzyk_png_prongtrainingdata_idx = col_rec_vtx_elastic_fuzzyk_png_prongtrainingdata_idx[i];
            current.rec_vtx_elastic_fuzzyk_png_idx = col_rec_vtx_elastic_fuzzyk_png_idx[i];
            current.rec_vtx_elastic_idx = col_rec_vtx_elastic_idx[i];
            current.isprimary = col_isprimary[i];
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