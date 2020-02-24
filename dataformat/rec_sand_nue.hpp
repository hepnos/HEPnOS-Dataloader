/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_SAND_NUE_HPP_
#define __REC_SAND_NUE_HPP_

#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_sand_nue structure for the 
 * "/rec.sand.nue" table in corresponding HDF5 files.
 */
struct rec_sand_nue {

    std::uint64_t njm; /* njm column */
    float E; /* E column */
    float anglecosmic; /* anglecosmic column */
    float conv0; /* conv0 column */
    float conv1; /* conv1 column */
    std::int32_t cycle; /* cycle column */
    float dedxpng1; /* dedxpng1 column */
    float dedxpng2; /* dedxpng2 column */
    float depE; /* depE column */
    float ecfNu; /* ecfNu column */
    float eedge10cell; /* eedge10cell column */
    float eedge2cell; /* eedge2cell column */
    float eedge5cell; /* eedge5cell column */
    float elll; /* elll column */
    float evtetot; /* evtetot column */
    float evtgaptns; /* evtgaptns column */
    float evtmaxx; /* evtmaxx column */
    float evtmaxy; /* evtmaxy column */
    float evtmaxz; /* evtmaxz column */
    float evtminx; /* evtminx column */
    float evtminy; /* evtminy column */
    float evtminz; /* evtminz column */
    std::uint32_t evtncell; /* evtncell column */
    std::int32_t evtncelltoedge; /* evtncelltoedge column */
    float evtsumcostheta; /* evtsumcostheta column */
    float evtsump; /* evtsump column */
    float evtsump0; /* evtsump0 column */
    float evtsumpt; /* evtsumpt column */
    float evtsumpt0; /* evtsumpt0 column */
    float fracangchanges; /* fracangchanges column */
    float fracangchangesloose; /* fracangchangesloose column */
    float fracmodalhits; /* fracmodalhits column */
    float fracnoncontig; /* fracnoncontig column */
    float fracnoncontigloose; /* fracnoncontigloose column */
    std::int32_t maxgap; /* maxgap column */
    std::int32_t maxhitsx; /* maxhitsx column */
    std::int32_t maxhitsy; /* maxhitsy column */
    float mincellavg; /* mincellavg column */
    float mincellcosmic; /* mincellcosmic column */
    float mincellkalman; /* mincellkalman column */
    float mincellwallcosmic; /* mincellwallcosmic column */
    float mipmax_x; /* mipmax.x column */
    float mipmax_y; /* mipmax.y column */
    float mipmax_z; /* mipmax.z column */
    float mipmin_x; /* mipmin.x column */
    float mipmin_y; /* mipmin.y column */
    float mipmin_z; /* mipmin.z column */
    std::int32_t ncellrow; /* ncellrow column */
    std::int32_t ncellsum; /* ncellsum column */
    std::int32_t nmiphits; /* nmiphits column */
    std::int32_t npi0; /* npi0 column */
    std::int32_t npim; /* npim column */
    std::int32_t npip; /* npip column */
    std::int32_t nplanesfilled; /* nplanesfilled column */
    std::uint32_t nxplanes; /* nxplanes column */
    std::uint32_t nyplanes; /* nyplanes column */
    float opencos; /* opencos column */
    float phot0E; /* phot0E column */
    float phot1E; /* phot1E column */
    float pi0E; /* pi0E column */
    float pimE; /* pimE column */
    float pipE; /* pipE column */
    float sh1d2edge; /* sh1d2edge column */
    float sh1dir_x; /* sh1dir.x column */
    float sh1dir_y; /* sh1dir.y column */
    float sh1dir_z; /* sh1dir.z column */
    float sh1energy; /* sh1energy column */
    float sh1exclenergy; /* sh1exclenergy column */
    float sh1gap; /* sh1gap column */
    std::uint32_t sh1ncell; /* sh1ncell column */
    std::int32_t sh1ncelltoedge; /* sh1ncelltoedge column */
    std::uint32_t sh1nplane; /* sh1nplane column */
    std::int32_t sh1pid; /* sh1pid column */
    float sh1sh2dang; /* sh1sh2dang column */
    float sh1start_x; /* sh1start.x column */
    float sh1start_y; /* sh1start.y column */
    float sh1start_z; /* sh1start.z column */
    float sh1stop_x; /* sh1stop.x column */
    float sh1stop_y; /* sh1stop.y column */
    float sh1stop_z; /* sh1stop.z column */
    float sh1totalL; /* sh1totalL column */
    float sh1vtxdoca; /* sh1vtxdoca column */
    std::uint32_t sh1xncell; /* sh1xncell column */
    std::uint32_t sh1xnplane; /* sh1xnplane column */
    std::uint32_t sh1yncell; /* sh1yncell column */
    std::uint32_t sh1ynplane; /* sh1ynplane column */
    float sh2dir_x; /* sh2dir.x column */
    float sh2dir_y; /* sh2dir.y column */
    float sh2dir_z; /* sh2dir.z column */
    float sh2energy; /* sh2energy column */
    float sh2exclenergy; /* sh2exclenergy column */
    float sh2gap; /* sh2gap column */
    std::uint32_t sh2ncell; /* sh2ncell column */
    std::int32_t sh2ncelltoedge; /* sh2ncelltoedge column */
    std::uint32_t sh2nplane; /* sh2nplane column */
    std::int32_t sh2pid; /* sh2pid column */
    float sh2start_x; /* sh2start.x column */
    float sh2start_y; /* sh2start.y column */
    float sh2start_z; /* sh2start.z column */
    float sh2stop_x; /* sh2stop.x column */
    float sh2stop_y; /* sh2stop.y column */
    float sh2stop_z; /* sh2stop.z column */
    float sh2totalL; /* sh2totalL column */
    float sh2vtxdoca; /* sh2vtxdoca column */
    std::uint32_t sh2xncell; /* sh2xncell column */
    std::uint32_t sh2xnplane; /* sh2xnplane column */
    std::uint32_t sh2yncell; /* sh2yncell column */
    std::uint32_t sh2ynplane; /* sh2ynplane column */
    float shwE; /* shwE column */
    float slicemeanx; /* slicemeanx column */
    float slicemeany; /* slicemeany column */
    float slicemeanz; /* slicemeanz column */
    float time; /* time column */
    float vtx_x; /* vtx.x column */
    float vtx_y; /* vtx.y column */
    float vtx_z; /* vtx.z column */
    std::uint16_t infid; /* infid column */
    std::uint16_t subevt; /* subevt column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & njm;
        ar & E;
        ar & anglecosmic;
        ar & conv0;
        ar & conv1;
        ar & cycle;
        ar & dedxpng1;
        ar & dedxpng2;
        ar & depE;
        ar & ecfNu;
        ar & eedge10cell;
        ar & eedge2cell;
        ar & eedge5cell;
        ar & elll;
        ar & evtetot;
        ar & evtgaptns;
        ar & evtmaxx;
        ar & evtmaxy;
        ar & evtmaxz;
        ar & evtminx;
        ar & evtminy;
        ar & evtminz;
        ar & evtncell;
        ar & evtncelltoedge;
        ar & evtsumcostheta;
        ar & evtsump;
        ar & evtsump0;
        ar & evtsumpt;
        ar & evtsumpt0;
        ar & fracangchanges;
        ar & fracangchangesloose;
        ar & fracmodalhits;
        ar & fracnoncontig;
        ar & fracnoncontigloose;
        ar & maxgap;
        ar & maxhitsx;
        ar & maxhitsy;
        ar & mincellavg;
        ar & mincellcosmic;
        ar & mincellkalman;
        ar & mincellwallcosmic;
        ar & mipmax_x;
        ar & mipmax_y;
        ar & mipmax_z;
        ar & mipmin_x;
        ar & mipmin_y;
        ar & mipmin_z;
        ar & ncellrow;
        ar & ncellsum;
        ar & nmiphits;
        ar & npi0;
        ar & npim;
        ar & npip;
        ar & nplanesfilled;
        ar & nxplanes;
        ar & nyplanes;
        ar & opencos;
        ar & phot0E;
        ar & phot1E;
        ar & pi0E;
        ar & pimE;
        ar & pipE;
        ar & sh1d2edge;
        ar & sh1dir_x;
        ar & sh1dir_y;
        ar & sh1dir_z;
        ar & sh1energy;
        ar & sh1exclenergy;
        ar & sh1gap;
        ar & sh1ncell;
        ar & sh1ncelltoedge;
        ar & sh1nplane;
        ar & sh1pid;
        ar & sh1sh2dang;
        ar & sh1start_x;
        ar & sh1start_y;
        ar & sh1start_z;
        ar & sh1stop_x;
        ar & sh1stop_y;
        ar & sh1stop_z;
        ar & sh1totalL;
        ar & sh1vtxdoca;
        ar & sh1xncell;
        ar & sh1xnplane;
        ar & sh1yncell;
        ar & sh1ynplane;
        ar & sh2dir_x;
        ar & sh2dir_y;
        ar & sh2dir_z;
        ar & sh2energy;
        ar & sh2exclenergy;
        ar & sh2gap;
        ar & sh2ncell;
        ar & sh2ncelltoedge;
        ar & sh2nplane;
        ar & sh2pid;
        ar & sh2start_x;
        ar & sh2start_y;
        ar & sh2start_z;
        ar & sh2stop_x;
        ar & sh2stop_y;
        ar & sh2stop_z;
        ar & sh2totalL;
        ar & sh2vtxdoca;
        ar & sh2xncell;
        ar & sh2xnplane;
        ar & sh2yncell;
        ar & sh2ynplane;
        ar & shwE;
        ar & slicemeanx;
        ar & slicemeany;
        ar & slicemeanz;
        ar & time;
        ar & vtx_x;
        ar & vtx_y;
        ar & vtx_z;
        ar & infid;
        ar & subevt;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_sand_nue& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_sand_nue current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<std::uint64_t> col_njm; /* njm column */
        dataset = H5Dopen(file, "/rec.sand.nue/njm", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_njm.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT64, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_njm.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_E; /* E column */
        dataset = H5Dopen(file, "/rec.sand.nue/E", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_E.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_E.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_anglecosmic; /* anglecosmic column */
        dataset = H5Dopen(file, "/rec.sand.nue/anglecosmic", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_anglecosmic.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_anglecosmic.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_conv0; /* conv0 column */
        dataset = H5Dopen(file, "/rec.sand.nue/conv0", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_conv0.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_conv0.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_conv1; /* conv1 column */
        dataset = H5Dopen(file, "/rec.sand.nue/conv1", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_conv1.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_conv1.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.sand.nue/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedxpng1; /* dedxpng1 column */
        dataset = H5Dopen(file, "/rec.sand.nue/dedxpng1", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedxpng1.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedxpng1.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dedxpng2; /* dedxpng2 column */
        dataset = H5Dopen(file, "/rec.sand.nue/dedxpng2", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dedxpng2.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dedxpng2.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_depE; /* depE column */
        dataset = H5Dopen(file, "/rec.sand.nue/depE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_depE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_depE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ecfNu; /* ecfNu column */
        dataset = H5Dopen(file, "/rec.sand.nue/ecfNu", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ecfNu.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ecfNu.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_eedge10cell; /* eedge10cell column */
        dataset = H5Dopen(file, "/rec.sand.nue/eedge10cell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_eedge10cell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_eedge10cell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_eedge2cell; /* eedge2cell column */
        dataset = H5Dopen(file, "/rec.sand.nue/eedge2cell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_eedge2cell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_eedge2cell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_eedge5cell; /* eedge5cell column */
        dataset = H5Dopen(file, "/rec.sand.nue/eedge5cell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_eedge5cell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_eedge5cell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_elll; /* elll column */
        dataset = H5Dopen(file, "/rec.sand.nue/elll", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_elll.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_elll.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_evtetot; /* evtetot column */
        dataset = H5Dopen(file, "/rec.sand.nue/evtetot", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evtetot.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evtetot.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_evtgaptns; /* evtgaptns column */
        dataset = H5Dopen(file, "/rec.sand.nue/evtgaptns", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evtgaptns.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evtgaptns.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_evtmaxx; /* evtmaxx column */
        dataset = H5Dopen(file, "/rec.sand.nue/evtmaxx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evtmaxx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evtmaxx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_evtmaxy; /* evtmaxy column */
        dataset = H5Dopen(file, "/rec.sand.nue/evtmaxy", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evtmaxy.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evtmaxy.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_evtmaxz; /* evtmaxz column */
        dataset = H5Dopen(file, "/rec.sand.nue/evtmaxz", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evtmaxz.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evtmaxz.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_evtminx; /* evtminx column */
        dataset = H5Dopen(file, "/rec.sand.nue/evtminx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evtminx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evtminx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_evtminy; /* evtminy column */
        dataset = H5Dopen(file, "/rec.sand.nue/evtminy", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evtminy.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evtminy.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_evtminz; /* evtminz column */
        dataset = H5Dopen(file, "/rec.sand.nue/evtminz", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evtminz.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evtminz.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_evtncell; /* evtncell column */
        dataset = H5Dopen(file, "/rec.sand.nue/evtncell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evtncell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evtncell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_evtncelltoedge; /* evtncelltoedge column */
        dataset = H5Dopen(file, "/rec.sand.nue/evtncelltoedge", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evtncelltoedge.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evtncelltoedge.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_evtsumcostheta; /* evtsumcostheta column */
        dataset = H5Dopen(file, "/rec.sand.nue/evtsumcostheta", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evtsumcostheta.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evtsumcostheta.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_evtsump; /* evtsump column */
        dataset = H5Dopen(file, "/rec.sand.nue/evtsump", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evtsump.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evtsump.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_evtsump0; /* evtsump0 column */
        dataset = H5Dopen(file, "/rec.sand.nue/evtsump0", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evtsump0.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evtsump0.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_evtsumpt; /* evtsumpt column */
        dataset = H5Dopen(file, "/rec.sand.nue/evtsumpt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evtsumpt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evtsumpt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_evtsumpt0; /* evtsumpt0 column */
        dataset = H5Dopen(file, "/rec.sand.nue/evtsumpt0", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evtsumpt0.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evtsumpt0.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_fracangchanges; /* fracangchanges column */
        dataset = H5Dopen(file, "/rec.sand.nue/fracangchanges", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_fracangchanges.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_fracangchanges.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_fracangchangesloose; /* fracangchangesloose column */
        dataset = H5Dopen(file, "/rec.sand.nue/fracangchangesloose", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_fracangchangesloose.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_fracangchangesloose.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_fracmodalhits; /* fracmodalhits column */
        dataset = H5Dopen(file, "/rec.sand.nue/fracmodalhits", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_fracmodalhits.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_fracmodalhits.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_fracnoncontig; /* fracnoncontig column */
        dataset = H5Dopen(file, "/rec.sand.nue/fracnoncontig", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_fracnoncontig.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_fracnoncontig.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_fracnoncontigloose; /* fracnoncontigloose column */
        dataset = H5Dopen(file, "/rec.sand.nue/fracnoncontigloose", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_fracnoncontigloose.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_fracnoncontigloose.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_maxgap; /* maxgap column */
        dataset = H5Dopen(file, "/rec.sand.nue/maxgap", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_maxgap.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_maxgap.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_maxhitsx; /* maxhitsx column */
        dataset = H5Dopen(file, "/rec.sand.nue/maxhitsx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_maxhitsx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_maxhitsx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_maxhitsy; /* maxhitsy column */
        dataset = H5Dopen(file, "/rec.sand.nue/maxhitsy", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_maxhitsy.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_maxhitsy.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_mincellavg; /* mincellavg column */
        dataset = H5Dopen(file, "/rec.sand.nue/mincellavg", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_mincellavg.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_mincellavg.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_mincellcosmic; /* mincellcosmic column */
        dataset = H5Dopen(file, "/rec.sand.nue/mincellcosmic", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_mincellcosmic.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_mincellcosmic.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_mincellkalman; /* mincellkalman column */
        dataset = H5Dopen(file, "/rec.sand.nue/mincellkalman", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_mincellkalman.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_mincellkalman.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_mincellwallcosmic; /* mincellwallcosmic column */
        dataset = H5Dopen(file, "/rec.sand.nue/mincellwallcosmic", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_mincellwallcosmic.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_mincellwallcosmic.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_mipmax_x; /* mipmax.x column */
        dataset = H5Dopen(file, "/rec.sand.nue/mipmax.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_mipmax_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_mipmax_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_mipmax_y; /* mipmax.y column */
        dataset = H5Dopen(file, "/rec.sand.nue/mipmax.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_mipmax_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_mipmax_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_mipmax_z; /* mipmax.z column */
        dataset = H5Dopen(file, "/rec.sand.nue/mipmax.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_mipmax_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_mipmax_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_mipmin_x; /* mipmin.x column */
        dataset = H5Dopen(file, "/rec.sand.nue/mipmin.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_mipmin_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_mipmin_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_mipmin_y; /* mipmin.y column */
        dataset = H5Dopen(file, "/rec.sand.nue/mipmin.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_mipmin_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_mipmin_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_mipmin_z; /* mipmin.z column */
        dataset = H5Dopen(file, "/rec.sand.nue/mipmin.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_mipmin_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_mipmin_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_ncellrow; /* ncellrow column */
        dataset = H5Dopen(file, "/rec.sand.nue/ncellrow", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ncellrow.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ncellrow.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_ncellsum; /* ncellsum column */
        dataset = H5Dopen(file, "/rec.sand.nue/ncellsum", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ncellsum.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ncellsum.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nmiphits; /* nmiphits column */
        dataset = H5Dopen(file, "/rec.sand.nue/nmiphits", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nmiphits.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nmiphits.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_npi0; /* npi0 column */
        dataset = H5Dopen(file, "/rec.sand.nue/npi0", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_npi0.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_npi0.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_npim; /* npim column */
        dataset = H5Dopen(file, "/rec.sand.nue/npim", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_npim.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_npim.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_npip; /* npip column */
        dataset = H5Dopen(file, "/rec.sand.nue/npip", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_npip.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_npip.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nplanesfilled; /* nplanesfilled column */
        dataset = H5Dopen(file, "/rec.sand.nue/nplanesfilled", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nplanesfilled.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nplanesfilled.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nxplanes; /* nxplanes column */
        dataset = H5Dopen(file, "/rec.sand.nue/nxplanes", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nxplanes.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nxplanes.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nyplanes; /* nyplanes column */
        dataset = H5Dopen(file, "/rec.sand.nue/nyplanes", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nyplanes.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nyplanes.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_opencos; /* opencos column */
        dataset = H5Dopen(file, "/rec.sand.nue/opencos", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_opencos.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_opencos.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_phot0E; /* phot0E column */
        dataset = H5Dopen(file, "/rec.sand.nue/phot0E", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_phot0E.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_phot0E.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_phot1E; /* phot1E column */
        dataset = H5Dopen(file, "/rec.sand.nue/phot1E", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_phot1E.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_phot1E.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pi0E; /* pi0E column */
        dataset = H5Dopen(file, "/rec.sand.nue/pi0E", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pi0E.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pi0E.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pimE; /* pimE column */
        dataset = H5Dopen(file, "/rec.sand.nue/pimE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pimE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pimE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pipE; /* pipE column */
        dataset = H5Dopen(file, "/rec.sand.nue/pipE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pipE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pipE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sh1d2edge; /* sh1d2edge column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh1d2edge", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh1d2edge.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh1d2edge.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sh1dir_x; /* sh1dir.x column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh1dir.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh1dir_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh1dir_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sh1dir_y; /* sh1dir.y column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh1dir.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh1dir_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh1dir_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sh1dir_z; /* sh1dir.z column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh1dir.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh1dir_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh1dir_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sh1energy; /* sh1energy column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh1energy", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh1energy.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh1energy.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sh1exclenergy; /* sh1exclenergy column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh1exclenergy", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh1exclenergy.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh1exclenergy.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sh1gap; /* sh1gap column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh1gap", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh1gap.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh1gap.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_sh1ncell; /* sh1ncell column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh1ncell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh1ncell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh1ncell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_sh1ncelltoedge; /* sh1ncelltoedge column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh1ncelltoedge", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh1ncelltoedge.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh1ncelltoedge.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_sh1nplane; /* sh1nplane column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh1nplane", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh1nplane.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh1nplane.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_sh1pid; /* sh1pid column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh1pid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh1pid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh1pid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sh1sh2dang; /* sh1sh2dang column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh1sh2dang", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh1sh2dang.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh1sh2dang.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sh1start_x; /* sh1start.x column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh1start.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh1start_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh1start_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sh1start_y; /* sh1start.y column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh1start.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh1start_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh1start_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sh1start_z; /* sh1start.z column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh1start.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh1start_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh1start_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sh1stop_x; /* sh1stop.x column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh1stop.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh1stop_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh1stop_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sh1stop_y; /* sh1stop.y column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh1stop.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh1stop_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh1stop_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sh1stop_z; /* sh1stop.z column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh1stop.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh1stop_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh1stop_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sh1totalL; /* sh1totalL column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh1totalL", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh1totalL.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh1totalL.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sh1vtxdoca; /* sh1vtxdoca column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh1vtxdoca", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh1vtxdoca.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh1vtxdoca.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_sh1xncell; /* sh1xncell column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh1xncell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh1xncell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh1xncell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_sh1xnplane; /* sh1xnplane column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh1xnplane", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh1xnplane.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh1xnplane.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_sh1yncell; /* sh1yncell column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh1yncell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh1yncell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh1yncell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_sh1ynplane; /* sh1ynplane column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh1ynplane", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh1ynplane.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh1ynplane.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sh2dir_x; /* sh2dir.x column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh2dir.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh2dir_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh2dir_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sh2dir_y; /* sh2dir.y column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh2dir.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh2dir_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh2dir_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sh2dir_z; /* sh2dir.z column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh2dir.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh2dir_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh2dir_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sh2energy; /* sh2energy column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh2energy", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh2energy.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh2energy.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sh2exclenergy; /* sh2exclenergy column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh2exclenergy", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh2exclenergy.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh2exclenergy.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sh2gap; /* sh2gap column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh2gap", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh2gap.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh2gap.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_sh2ncell; /* sh2ncell column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh2ncell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh2ncell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh2ncell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_sh2ncelltoedge; /* sh2ncelltoedge column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh2ncelltoedge", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh2ncelltoedge.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh2ncelltoedge.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_sh2nplane; /* sh2nplane column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh2nplane", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh2nplane.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh2nplane.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_sh2pid; /* sh2pid column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh2pid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh2pid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh2pid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sh2start_x; /* sh2start.x column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh2start.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh2start_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh2start_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sh2start_y; /* sh2start.y column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh2start.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh2start_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh2start_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sh2start_z; /* sh2start.z column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh2start.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh2start_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh2start_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sh2stop_x; /* sh2stop.x column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh2stop.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh2stop_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh2stop_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sh2stop_y; /* sh2stop.y column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh2stop.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh2stop_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh2stop_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sh2stop_z; /* sh2stop.z column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh2stop.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh2stop_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh2stop_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sh2totalL; /* sh2totalL column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh2totalL", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh2totalL.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh2totalL.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_sh2vtxdoca; /* sh2vtxdoca column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh2vtxdoca", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh2vtxdoca.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh2vtxdoca.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_sh2xncell; /* sh2xncell column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh2xncell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh2xncell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh2xncell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_sh2xnplane; /* sh2xnplane column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh2xnplane", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh2xnplane.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh2xnplane.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_sh2yncell; /* sh2yncell column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh2yncell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh2yncell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh2yncell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_sh2ynplane; /* sh2ynplane column */
        dataset = H5Dopen(file, "/rec.sand.nue/sh2ynplane", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_sh2ynplane.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_sh2ynplane.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_shwE; /* shwE column */
        dataset = H5Dopen(file, "/rec.sand.nue/shwE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_shwE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_shwE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_slicemeanx; /* slicemeanx column */
        dataset = H5Dopen(file, "/rec.sand.nue/slicemeanx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_slicemeanx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_slicemeanx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_slicemeany; /* slicemeany column */
        dataset = H5Dopen(file, "/rec.sand.nue/slicemeany", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_slicemeany.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_slicemeany.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_slicemeanz; /* slicemeanz column */
        dataset = H5Dopen(file, "/rec.sand.nue/slicemeanz", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_slicemeanz.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_slicemeanz.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_time; /* time column */
        dataset = H5Dopen(file, "/rec.sand.nue/time", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_time.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_time.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_vtx_x; /* vtx.x column */
        dataset = H5Dopen(file, "/rec.sand.nue/vtx.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_vtx_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_vtx_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_vtx_y; /* vtx.y column */
        dataset = H5Dopen(file, "/rec.sand.nue/vtx.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_vtx_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_vtx_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_vtx_z; /* vtx.z column */
        dataset = H5Dopen(file, "/rec.sand.nue/vtx.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_vtx_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_vtx_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_infid; /* infid column */
        dataset = H5Dopen(file, "/rec.sand.nue/infid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_infid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_infid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.sand.nue/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        /* column for run indices */
        std::vector<unsigned> col_run;
        dataset = H5Dopen(file, "/rec.sand.nue/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_run.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_run.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        std::vector<unsigned> col_subrun;
        dataset = H5Dopen(file, "/rec.sand.nue/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subrun.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subrun.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        std::vector<unsigned> col_evt;
        dataset = H5Dopen(file, "/rec.sand.nue/evt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.njm = col_njm[i];
            current.E = col_E[i];
            current.anglecosmic = col_anglecosmic[i];
            current.conv0 = col_conv0[i];
            current.conv1 = col_conv1[i];
            current.cycle = col_cycle[i];
            current.dedxpng1 = col_dedxpng1[i];
            current.dedxpng2 = col_dedxpng2[i];
            current.depE = col_depE[i];
            current.ecfNu = col_ecfNu[i];
            current.eedge10cell = col_eedge10cell[i];
            current.eedge2cell = col_eedge2cell[i];
            current.eedge5cell = col_eedge5cell[i];
            current.elll = col_elll[i];
            current.evtetot = col_evtetot[i];
            current.evtgaptns = col_evtgaptns[i];
            current.evtmaxx = col_evtmaxx[i];
            current.evtmaxy = col_evtmaxy[i];
            current.evtmaxz = col_evtmaxz[i];
            current.evtminx = col_evtminx[i];
            current.evtminy = col_evtminy[i];
            current.evtminz = col_evtminz[i];
            current.evtncell = col_evtncell[i];
            current.evtncelltoedge = col_evtncelltoedge[i];
            current.evtsumcostheta = col_evtsumcostheta[i];
            current.evtsump = col_evtsump[i];
            current.evtsump0 = col_evtsump0[i];
            current.evtsumpt = col_evtsumpt[i];
            current.evtsumpt0 = col_evtsumpt0[i];
            current.fracangchanges = col_fracangchanges[i];
            current.fracangchangesloose = col_fracangchangesloose[i];
            current.fracmodalhits = col_fracmodalhits[i];
            current.fracnoncontig = col_fracnoncontig[i];
            current.fracnoncontigloose = col_fracnoncontigloose[i];
            current.maxgap = col_maxgap[i];
            current.maxhitsx = col_maxhitsx[i];
            current.maxhitsy = col_maxhitsy[i];
            current.mincellavg = col_mincellavg[i];
            current.mincellcosmic = col_mincellcosmic[i];
            current.mincellkalman = col_mincellkalman[i];
            current.mincellwallcosmic = col_mincellwallcosmic[i];
            current.mipmax_x = col_mipmax_x[i];
            current.mipmax_y = col_mipmax_y[i];
            current.mipmax_z = col_mipmax_z[i];
            current.mipmin_x = col_mipmin_x[i];
            current.mipmin_y = col_mipmin_y[i];
            current.mipmin_z = col_mipmin_z[i];
            current.ncellrow = col_ncellrow[i];
            current.ncellsum = col_ncellsum[i];
            current.nmiphits = col_nmiphits[i];
            current.npi0 = col_npi0[i];
            current.npim = col_npim[i];
            current.npip = col_npip[i];
            current.nplanesfilled = col_nplanesfilled[i];
            current.nxplanes = col_nxplanes[i];
            current.nyplanes = col_nyplanes[i];
            current.opencos = col_opencos[i];
            current.phot0E = col_phot0E[i];
            current.phot1E = col_phot1E[i];
            current.pi0E = col_pi0E[i];
            current.pimE = col_pimE[i];
            current.pipE = col_pipE[i];
            current.sh1d2edge = col_sh1d2edge[i];
            current.sh1dir_x = col_sh1dir_x[i];
            current.sh1dir_y = col_sh1dir_y[i];
            current.sh1dir_z = col_sh1dir_z[i];
            current.sh1energy = col_sh1energy[i];
            current.sh1exclenergy = col_sh1exclenergy[i];
            current.sh1gap = col_sh1gap[i];
            current.sh1ncell = col_sh1ncell[i];
            current.sh1ncelltoedge = col_sh1ncelltoedge[i];
            current.sh1nplane = col_sh1nplane[i];
            current.sh1pid = col_sh1pid[i];
            current.sh1sh2dang = col_sh1sh2dang[i];
            current.sh1start_x = col_sh1start_x[i];
            current.sh1start_y = col_sh1start_y[i];
            current.sh1start_z = col_sh1start_z[i];
            current.sh1stop_x = col_sh1stop_x[i];
            current.sh1stop_y = col_sh1stop_y[i];
            current.sh1stop_z = col_sh1stop_z[i];
            current.sh1totalL = col_sh1totalL[i];
            current.sh1vtxdoca = col_sh1vtxdoca[i];
            current.sh1xncell = col_sh1xncell[i];
            current.sh1xnplane = col_sh1xnplane[i];
            current.sh1yncell = col_sh1yncell[i];
            current.sh1ynplane = col_sh1ynplane[i];
            current.sh2dir_x = col_sh2dir_x[i];
            current.sh2dir_y = col_sh2dir_y[i];
            current.sh2dir_z = col_sh2dir_z[i];
            current.sh2energy = col_sh2energy[i];
            current.sh2exclenergy = col_sh2exclenergy[i];
            current.sh2gap = col_sh2gap[i];
            current.sh2ncell = col_sh2ncell[i];
            current.sh2ncelltoedge = col_sh2ncelltoedge[i];
            current.sh2nplane = col_sh2nplane[i];
            current.sh2pid = col_sh2pid[i];
            current.sh2start_x = col_sh2start_x[i];
            current.sh2start_y = col_sh2start_y[i];
            current.sh2start_z = col_sh2start_z[i];
            current.sh2stop_x = col_sh2stop_x[i];
            current.sh2stop_y = col_sh2stop_y[i];
            current.sh2stop_z = col_sh2stop_z[i];
            current.sh2totalL = col_sh2totalL[i];
            current.sh2vtxdoca = col_sh2vtxdoca[i];
            current.sh2xncell = col_sh2xncell[i];
            current.sh2xnplane = col_sh2xnplane[i];
            current.sh2yncell = col_sh2yncell[i];
            current.sh2ynplane = col_sh2ynplane[i];
            current.shwE = col_shwE[i];
            current.slicemeanx = col_slicemeanx[i];
            current.slicemeany = col_slicemeany[i];
            current.slicemeanz = col_slicemeanz[i];
            current.time = col_time[i];
            current.vtx_x = col_vtx_x[i];
            current.vtx_y = col_vtx_y[i];
            current.vtx_z = col_vtx_z[i];
            current.infid = col_infid[i];
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