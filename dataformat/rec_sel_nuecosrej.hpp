/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_SEL_NUECOSREJ_HPP_
#define __REC_SEL_NUECOSREJ_HPP_

#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_sel_nuecosrej structure for the 
 * "/rec.sel.nuecosrej" table in corresponding HDF5 files.
 */
struct rec_sel_nuecosrej {

    float cosdang; /* cosdang column */
    float cospidcontain; /* cospidcontain column */
    float cospidcontainxy; /* cospidcontainxy column */
    float cospidlight; /* cospidlight column */
    std::int32_t cycle; /* cycle column */
    float distallpngback; /* distallpngback column */
    float distallpngbottom; /* distallpngbottom column */
    float distallpngeast; /* distallpngeast column */
    float distallpngfront; /* distallpngfront column */
    float distallpngtop; /* distallpngtop column */
    float distallpngwest; /* distallpngwest column */
    float hitsperplane; /* hitsperplane column */
    float hitsperplaneasymm; /* hitsperplaneasymm column */
    float hitsperplaneasymmslice; /* hitsperplaneasymmslice column */
    float muanglediffbydist; /* muanglediffbydist column */
    float muanglediffbytime; /* muanglediffbytime column */
    float muclosestapproachbydist; /* muclosestapproachbydist column */
    float muclosestapproachbytime; /* muclosestapproachbytime column */
    std::int32_t musliceidxbydist; /* musliceidxbydist column */
    std::int32_t musliceidxbytime; /* musliceidxbytime column */
    float mutimediffbydist; /* mutimediffbydist column */
    float mutimediffbytime; /* mutimediffbytime column */
    float partptp; /* partptp column */
    float photptp; /* photptp column */
    float photpxp; /* photpxp column */
    float photpyp; /* photpyp column */
    float pngptp; /* pngptp column */
    float prongmaxx; /* prongmaxx column */
    float prongmaxy; /* prongmaxy column */
    float prongmaxz; /* prongmaxz column */
    float prongminx; /* prongminx column */
    float prongminy; /* prongminy column */
    float prongminz; /* prongminz column */
    float sparsenessasymm; /* sparsenessasymm column */
    float sparsenessasymmslice; /* sparsenessasymmslice column */
    float startback; /* startback column */
    float startbottom; /* startbottom column */
    float starteast; /* starteast column */
    float startfront; /* startfront column */
    float starttop; /* starttop column */
    float startwest; /* startwest column */
    float stopback; /* stopback column */
    float stopbottom; /* stopbottom column */
    float stopeast; /* stopeast column */
    float stopfront; /* stopfront column */
    float stoptop; /* stoptop column */
    float stopwest; /* stopwest column */
    float vtxdoca; /* vtxdoca column */
    std::uint16_t subevt; /* subevt column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & cosdang;
        ar & cospidcontain;
        ar & cospidcontainxy;
        ar & cospidlight;
        ar & cycle;
        ar & distallpngback;
        ar & distallpngbottom;
        ar & distallpngeast;
        ar & distallpngfront;
        ar & distallpngtop;
        ar & distallpngwest;
        ar & hitsperplane;
        ar & hitsperplaneasymm;
        ar & hitsperplaneasymmslice;
        ar & muanglediffbydist;
        ar & muanglediffbytime;
        ar & muclosestapproachbydist;
        ar & muclosestapproachbytime;
        ar & musliceidxbydist;
        ar & musliceidxbytime;
        ar & mutimediffbydist;
        ar & mutimediffbytime;
        ar & partptp;
        ar & photptp;
        ar & photpxp;
        ar & photpyp;
        ar & pngptp;
        ar & prongmaxx;
        ar & prongmaxy;
        ar & prongmaxz;
        ar & prongminx;
        ar & prongminy;
        ar & prongminz;
        ar & sparsenessasymm;
        ar & sparsenessasymmslice;
        ar & startback;
        ar & startbottom;
        ar & starteast;
        ar & startfront;
        ar & starttop;
        ar & startwest;
        ar & stopback;
        ar & stopbottom;
        ar & stopeast;
        ar & stopfront;
        ar & stoptop;
        ar & stopwest;
        ar & vtxdoca;
        ar & subevt;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_sel_nuecosrej& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_sel_nuecosrej current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<float> col_cosdang; /* cosdang column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/cosdang", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cosdang.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cosdang.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_cospidcontain; /* cospidcontain column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/cospidcontain", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cospidcontain.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cospidcontain.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_cospidcontainxy; /* cospidcontainxy column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/cospidcontainxy", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cospidcontainxy.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cospidcontainxy.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_cospidlight; /* cospidlight column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/cospidlight", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cospidlight.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cospidlight.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_distallpngback; /* distallpngback column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/distallpngback", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_distallpngback.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_distallpngback.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_distallpngbottom; /* distallpngbottom column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/distallpngbottom", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_distallpngbottom.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_distallpngbottom.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_distallpngeast; /* distallpngeast column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/distallpngeast", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_distallpngeast.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_distallpngeast.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_distallpngfront; /* distallpngfront column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/distallpngfront", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_distallpngfront.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_distallpngfront.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_distallpngtop; /* distallpngtop column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/distallpngtop", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_distallpngtop.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_distallpngtop.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_distallpngwest; /* distallpngwest column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/distallpngwest", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_distallpngwest.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_distallpngwest.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_hitsperplane; /* hitsperplane column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/hitsperplane", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_hitsperplane.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_hitsperplane.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_hitsperplaneasymm; /* hitsperplaneasymm column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/hitsperplaneasymm", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_hitsperplaneasymm.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_hitsperplaneasymm.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_hitsperplaneasymmslice; /* hitsperplaneasymmslice column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/hitsperplaneasymmslice", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_hitsperplaneasymmslice.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_hitsperplaneasymmslice.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_muanglediffbydist; /* muanglediffbydist column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/muanglediffbydist", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muanglediffbydist.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muanglediffbydist.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_muanglediffbytime; /* muanglediffbytime column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/muanglediffbytime", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muanglediffbytime.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muanglediffbytime.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_muclosestapproachbydist; /* muclosestapproachbydist column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/muclosestapproachbydist", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muclosestapproachbydist.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muclosestapproachbydist.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_muclosestapproachbytime; /* muclosestapproachbytime column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/muclosestapproachbytime", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muclosestapproachbytime.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muclosestapproachbytime.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_musliceidxbydist; /* musliceidxbydist column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/musliceidxbydist", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_musliceidxbydist.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_musliceidxbydist.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_musliceidxbytime; /* musliceidxbytime column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/musliceidxbytime", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_musliceidxbytime.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_musliceidxbytime.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_mutimediffbydist; /* mutimediffbydist column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/mutimediffbydist", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_mutimediffbydist.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_mutimediffbydist.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_mutimediffbytime; /* mutimediffbytime column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/mutimediffbytime", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_mutimediffbytime.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_mutimediffbytime.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_partptp; /* partptp column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/partptp", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_partptp.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_partptp.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_photptp; /* photptp column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/photptp", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_photptp.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_photptp.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_photpxp; /* photpxp column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/photpxp", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_photpxp.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_photpxp.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_photpyp; /* photpyp column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/photpyp", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_photpyp.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_photpyp.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pngptp; /* pngptp column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/pngptp", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pngptp.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pngptp.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_prongmaxx; /* prongmaxx column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/prongmaxx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_prongmaxx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_prongmaxx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_prongmaxy; /* prongmaxy column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/prongmaxy", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_prongmaxy.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_prongmaxy.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_prongmaxz; /* prongmaxz column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/prongmaxz", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_prongmaxz.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_prongmaxz.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_prongminx; /* prongminx column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/prongminx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_prongminx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_prongminx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_prongminy; /* prongminy column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/prongminy", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_prongminy.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_prongminy.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_prongminz; /* prongminz column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/prongminz", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_prongminz.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_prongminz.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sparsenessasymm; /* sparsenessasymm column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/sparsenessasymm", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sparsenessasymm.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sparsenessasymm.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sparsenessasymmslice; /* sparsenessasymmslice column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/sparsenessasymmslice", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sparsenessasymmslice.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sparsenessasymmslice.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_startback; /* startback column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/startback", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_startback.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_startback.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_startbottom; /* startbottom column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/startbottom", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_startbottom.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_startbottom.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_starteast; /* starteast column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/starteast", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_starteast.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_starteast.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_startfront; /* startfront column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/startfront", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_startfront.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_startfront.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_starttop; /* starttop column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/starttop", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_starttop.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_starttop.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_startwest; /* startwest column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/startwest", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_startwest.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_startwest.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stopback; /* stopback column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/stopback", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stopback.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stopback.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stopbottom; /* stopbottom column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/stopbottom", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stopbottom.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stopbottom.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stopeast; /* stopeast column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/stopeast", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stopeast.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stopeast.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stopfront; /* stopfront column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/stopfront", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stopfront.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stopfront.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stoptop; /* stoptop column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/stoptop", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stoptop.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stoptop.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_stopwest; /* stopwest column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/stopwest", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_stopwest.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_stopwest.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_vtxdoca; /* vtxdoca column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/vtxdoca", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_vtxdoca.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_vtxdoca.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        /* column for run indices */
        std::vector<unsigned> col_run;
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_run.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_run.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        std::vector<unsigned> col_subrun;
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subrun.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subrun.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        std::vector<unsigned> col_evt;
        dataset = H5Dopen(file, "/rec.sel.nuecosrej/evt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.cosdang = col_cosdang[i];
            current.cospidcontain = col_cospidcontain[i];
            current.cospidcontainxy = col_cospidcontainxy[i];
            current.cospidlight = col_cospidlight[i];
            current.cycle = col_cycle[i];
            current.distallpngback = col_distallpngback[i];
            current.distallpngbottom = col_distallpngbottom[i];
            current.distallpngeast = col_distallpngeast[i];
            current.distallpngfront = col_distallpngfront[i];
            current.distallpngtop = col_distallpngtop[i];
            current.distallpngwest = col_distallpngwest[i];
            current.hitsperplane = col_hitsperplane[i];
            current.hitsperplaneasymm = col_hitsperplaneasymm[i];
            current.hitsperplaneasymmslice = col_hitsperplaneasymmslice[i];
            current.muanglediffbydist = col_muanglediffbydist[i];
            current.muanglediffbytime = col_muanglediffbytime[i];
            current.muclosestapproachbydist = col_muclosestapproachbydist[i];
            current.muclosestapproachbytime = col_muclosestapproachbytime[i];
            current.musliceidxbydist = col_musliceidxbydist[i];
            current.musliceidxbytime = col_musliceidxbytime[i];
            current.mutimediffbydist = col_mutimediffbydist[i];
            current.mutimediffbytime = col_mutimediffbytime[i];
            current.partptp = col_partptp[i];
            current.photptp = col_photptp[i];
            current.photpxp = col_photpxp[i];
            current.photpyp = col_photpyp[i];
            current.pngptp = col_pngptp[i];
            current.prongmaxx = col_prongmaxx[i];
            current.prongmaxy = col_prongmaxy[i];
            current.prongmaxz = col_prongmaxz[i];
            current.prongminx = col_prongminx[i];
            current.prongminy = col_prongminy[i];
            current.prongminz = col_prongminz[i];
            current.sparsenessasymm = col_sparsenessasymm[i];
            current.sparsenessasymmslice = col_sparsenessasymmslice[i];
            current.startback = col_startback[i];
            current.startbottom = col_startbottom[i];
            current.starteast = col_starteast[i];
            current.startfront = col_startfront[i];
            current.starttop = col_starttop[i];
            current.startwest = col_startwest[i];
            current.stopback = col_stopback[i];
            current.stopbottom = col_stopbottom[i];
            current.stopeast = col_stopeast[i];
            current.stopfront = col_stopfront[i];
            current.stoptop = col_stoptop[i];
            current.stopwest = col_stopwest[i];
            current.vtxdoca = col_vtxdoca[i];
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