/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __SPILL_HPP_
#define __SPILL_HPP_

#include <tuple>
#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated spill structure for the 
 * "/spill" table in corresponding HDF5 files.
 */
struct spill {

    std::int64_t deltaspilltimensec; /* deltaspilltimensec column */
    std::uint64_t gpsspilltimensec; /* gpsspilltimensec column */
    std::uint64_t gpsspilltimesec; /* gpsspilltimesec column */
    std::uint64_t spilltimensec; /* spilltimensec column */
    std::uint64_t spilltimesec; /* spilltimesec column */
    float dcmedgematchfrac; /* dcmedgematchfrac column */
    std::int32_t emptydatablock; /* emptydatablock column */
    float fracdcm3hits; /* fracdcm3hits column */
    float hornI; /* hornI column */
    float livetime; /* livetime column */
    std::int32_t nanosliceadcerror; /* nanosliceadcerror column */
    std::int32_t nanoslicebufferempty; /* nanoslicebufferempty column */
    std::int32_t nanoslicebufferfull; /* nanoslicebufferfull column */
    std::int32_t nanoslicecommerror; /* nanoslicecommerror column */
    std::int32_t nanoslicedatanotpresent; /* nanoslicedatanotpresent column */
    std::int32_t nanoslicenolinkstatus; /* nanoslicenolinkstatus column */
    std::int32_t nanosliceoverflowerror; /* nanosliceoverflowerror column */
    std::int32_t nanoslicepacketerror; /* nanoslicepacketerror column */
    std::uint32_t nbaddcmslg; /* nbaddcmslg column */
    std::int32_t ndatablockmissingdata; /* ndatablockmissingdata column */
    std::int32_t ndcms; /* ndcms column */
    std::int32_t ndiblocks; /* ndiblocks column */
    std::int32_t ndroppedmicroblocks; /* ndroppedmicroblocks column */
    std::int32_t nemptymicroslice; /* nemptymicroslice column */
    std::int32_t nmicroblocks; /* nmicroblocks column */
    std::int32_t nmicroslicedatanotpresent; /* nmicroslicedatanotpresent column */
    std::uint32_t nmicroslices; /* nmicroslices column */
    std::uint32_t nmissingdcms; /* nmissingdcms column */
    std::uint32_t nmissingdcmslg; /* nmissingdcmslg column */
    std::int32_t nnanoslices; /* nnanoslices column */
    std::uint32_t nnoisyapds; /* nnoisyapds column */
    std::uint32_t nouttimehits; /* nouttimehits column */
    float posx; /* posx column */
    float posy; /* posy column */
    float spillpot; /* spillpot column */
    float widthx; /* widthx column */
    float widthy; /* widthy column */
    std::uint16_t det; /* det column */
    std::uint16_t dibfirst; /* dibfirst column */
    std::uint16_t diblast; /* diblast column */
    std::uint16_t dibmask; /* dibmask column */
    std::uint16_t eventincomplete; /* eventincomplete column */
    std::uint16_t is0HC; /* is0HC column */
    std::uint16_t isFHC; /* isFHC column */
    std::uint16_t isRHC; /* isRHC column */
    std::uint16_t isgoodspill; /* isgoodspill column */
    std::uint16_t ismc; /* ismc column */
    std::uint16_t maskstatus; /* maskstatus column */
    std::uint8_t trigger; /* trigger column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & deltaspilltimensec;
        ar & gpsspilltimensec;
        ar & gpsspilltimesec;
        ar & spilltimensec;
        ar & spilltimesec;
        ar & dcmedgematchfrac;
        ar & emptydatablock;
        ar & fracdcm3hits;
        ar & hornI;
        ar & livetime;
        ar & nanosliceadcerror;
        ar & nanoslicebufferempty;
        ar & nanoslicebufferfull;
        ar & nanoslicecommerror;
        ar & nanoslicedatanotpresent;
        ar & nanoslicenolinkstatus;
        ar & nanosliceoverflowerror;
        ar & nanoslicepacketerror;
        ar & nbaddcmslg;
        ar & ndatablockmissingdata;
        ar & ndcms;
        ar & ndiblocks;
        ar & ndroppedmicroblocks;
        ar & nemptymicroslice;
        ar & nmicroblocks;
        ar & nmicroslicedatanotpresent;
        ar & nmicroslices;
        ar & nmissingdcms;
        ar & nmissingdcmslg;
        ar & nnanoslices;
        ar & nnoisyapds;
        ar & nouttimehits;
        ar & posx;
        ar & posy;
        ar & spillpot;
        ar & widthx;
        ar & widthy;
        ar & det;
        ar & dibfirst;
        ar & diblast;
        ar & dibmask;
        ar & eventincomplete;
        ar & is0HC;
        ar & isFHC;
        ar & isRHC;
        ar & isgoodspill;
        ar & ismc;
        ar & maskstatus;
        ar & trigger;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const spill& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        spill current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;
        _read_indices(file, col_run, col_subrun, col_evt);

        std::vector<std::int64_t> col_deltaspilltimensec; /* deltaspilltimensec column */
        dataset = H5Dopen(file, "/spill/deltaspilltimensec", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_deltaspilltimensec.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT64, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_deltaspilltimensec.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint64_t> col_gpsspilltimensec; /* gpsspilltimensec column */
        dataset = H5Dopen(file, "/spill/gpsspilltimensec", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_gpsspilltimensec.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT64, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_gpsspilltimensec.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint64_t> col_gpsspilltimesec; /* gpsspilltimesec column */
        dataset = H5Dopen(file, "/spill/gpsspilltimesec", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_gpsspilltimesec.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT64, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_gpsspilltimesec.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint64_t> col_spilltimensec; /* spilltimensec column */
        dataset = H5Dopen(file, "/spill/spilltimensec", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_spilltimensec.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT64, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_spilltimensec.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint64_t> col_spilltimesec; /* spilltimesec column */
        dataset = H5Dopen(file, "/spill/spilltimesec", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_spilltimesec.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT64, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_spilltimesec.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dcmedgematchfrac; /* dcmedgematchfrac column */
        dataset = H5Dopen(file, "/spill/dcmedgematchfrac", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dcmedgematchfrac.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dcmedgematchfrac.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_emptydatablock; /* emptydatablock column */
        dataset = H5Dopen(file, "/spill/emptydatablock", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_emptydatablock.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_emptydatablock.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_fracdcm3hits; /* fracdcm3hits column */
        dataset = H5Dopen(file, "/spill/fracdcm3hits", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_fracdcm3hits.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_fracdcm3hits.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_hornI; /* hornI column */
        dataset = H5Dopen(file, "/spill/hornI", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_hornI.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_hornI.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_livetime; /* livetime column */
        dataset = H5Dopen(file, "/spill/livetime", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_livetime.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_livetime.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nanosliceadcerror; /* nanosliceadcerror column */
        dataset = H5Dopen(file, "/spill/nanosliceadcerror", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nanosliceadcerror.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nanosliceadcerror.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nanoslicebufferempty; /* nanoslicebufferempty column */
        dataset = H5Dopen(file, "/spill/nanoslicebufferempty", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nanoslicebufferempty.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nanoslicebufferempty.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nanoslicebufferfull; /* nanoslicebufferfull column */
        dataset = H5Dopen(file, "/spill/nanoslicebufferfull", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nanoslicebufferfull.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nanoslicebufferfull.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nanoslicecommerror; /* nanoslicecommerror column */
        dataset = H5Dopen(file, "/spill/nanoslicecommerror", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nanoslicecommerror.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nanoslicecommerror.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nanoslicedatanotpresent; /* nanoslicedatanotpresent column */
        dataset = H5Dopen(file, "/spill/nanoslicedatanotpresent", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nanoslicedatanotpresent.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nanoslicedatanotpresent.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nanoslicenolinkstatus; /* nanoslicenolinkstatus column */
        dataset = H5Dopen(file, "/spill/nanoslicenolinkstatus", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nanoslicenolinkstatus.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nanoslicenolinkstatus.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nanosliceoverflowerror; /* nanosliceoverflowerror column */
        dataset = H5Dopen(file, "/spill/nanosliceoverflowerror", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nanosliceoverflowerror.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nanosliceoverflowerror.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nanoslicepacketerror; /* nanoslicepacketerror column */
        dataset = H5Dopen(file, "/spill/nanoslicepacketerror", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nanoslicepacketerror.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nanoslicepacketerror.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nbaddcmslg; /* nbaddcmslg column */
        dataset = H5Dopen(file, "/spill/nbaddcmslg", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nbaddcmslg.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nbaddcmslg.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_ndatablockmissingdata; /* ndatablockmissingdata column */
        dataset = H5Dopen(file, "/spill/ndatablockmissingdata", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndatablockmissingdata.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndatablockmissingdata.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_ndcms; /* ndcms column */
        dataset = H5Dopen(file, "/spill/ndcms", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndcms.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndcms.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_ndiblocks; /* ndiblocks column */
        dataset = H5Dopen(file, "/spill/ndiblocks", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndiblocks.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndiblocks.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_ndroppedmicroblocks; /* ndroppedmicroblocks column */
        dataset = H5Dopen(file, "/spill/ndroppedmicroblocks", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndroppedmicroblocks.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndroppedmicroblocks.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nemptymicroslice; /* nemptymicroslice column */
        dataset = H5Dopen(file, "/spill/nemptymicroslice", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nemptymicroslice.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nemptymicroslice.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nmicroblocks; /* nmicroblocks column */
        dataset = H5Dopen(file, "/spill/nmicroblocks", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nmicroblocks.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nmicroblocks.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nmicroslicedatanotpresent; /* nmicroslicedatanotpresent column */
        dataset = H5Dopen(file, "/spill/nmicroslicedatanotpresent", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nmicroslicedatanotpresent.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nmicroslicedatanotpresent.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nmicroslices; /* nmicroslices column */
        dataset = H5Dopen(file, "/spill/nmicroslices", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nmicroslices.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nmicroslices.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nmissingdcms; /* nmissingdcms column */
        dataset = H5Dopen(file, "/spill/nmissingdcms", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nmissingdcms.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nmissingdcms.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nmissingdcmslg; /* nmissingdcmslg column */
        dataset = H5Dopen(file, "/spill/nmissingdcmslg", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nmissingdcmslg.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nmissingdcmslg.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nnanoslices; /* nnanoslices column */
        dataset = H5Dopen(file, "/spill/nnanoslices", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nnanoslices.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nnanoslices.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nnoisyapds; /* nnoisyapds column */
        dataset = H5Dopen(file, "/spill/nnoisyapds", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nnoisyapds.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nnoisyapds.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nouttimehits; /* nouttimehits column */
        dataset = H5Dopen(file, "/spill/nouttimehits", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nouttimehits.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nouttimehits.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_posx; /* posx column */
        dataset = H5Dopen(file, "/spill/posx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_posx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_posx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_posy; /* posy column */
        dataset = H5Dopen(file, "/spill/posy", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_posy.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_posy.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_spillpot; /* spillpot column */
        dataset = H5Dopen(file, "/spill/spillpot", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_spillpot.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_spillpot.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_widthx; /* widthx column */
        dataset = H5Dopen(file, "/spill/widthx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_widthx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_widthx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_widthy; /* widthy column */
        dataset = H5Dopen(file, "/spill/widthy", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_widthy.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_widthy.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_det; /* det column */
        dataset = H5Dopen(file, "/spill/det", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_det.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_det.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_dibfirst; /* dibfirst column */
        dataset = H5Dopen(file, "/spill/dibfirst", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dibfirst.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dibfirst.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_diblast; /* diblast column */
        dataset = H5Dopen(file, "/spill/diblast", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_diblast.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_diblast.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_dibmask; /* dibmask column */
        dataset = H5Dopen(file, "/spill/dibmask", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dibmask.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dibmask.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_eventincomplete; /* eventincomplete column */
        dataset = H5Dopen(file, "/spill/eventincomplete", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_eventincomplete.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_eventincomplete.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_is0HC; /* is0HC column */
        dataset = H5Dopen(file, "/spill/is0HC", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_is0HC.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_is0HC.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_isFHC; /* isFHC column */
        dataset = H5Dopen(file, "/spill/isFHC", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_isFHC.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_isFHC.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_isRHC; /* isRHC column */
        dataset = H5Dopen(file, "/spill/isRHC", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_isRHC.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_isRHC.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_isgoodspill; /* isgoodspill column */
        dataset = H5Dopen(file, "/spill/isgoodspill", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_isgoodspill.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_isgoodspill.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_ismc; /* ismc column */
        dataset = H5Dopen(file, "/spill/ismc", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ismc.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ismc.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_maskstatus; /* maskstatus column */
        dataset = H5Dopen(file, "/spill/maskstatus", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_maskstatus.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_maskstatus.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint8_t> col_trigger; /* trigger column */
        dataset = H5Dopen(file, "/spill/trigger", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trigger.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT8, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trigger.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.deltaspilltimensec = col_deltaspilltimensec[i];
            current.gpsspilltimensec = col_gpsspilltimensec[i];
            current.gpsspilltimesec = col_gpsspilltimesec[i];
            current.spilltimensec = col_spilltimensec[i];
            current.spilltimesec = col_spilltimesec[i];
            current.dcmedgematchfrac = col_dcmedgematchfrac[i];
            current.emptydatablock = col_emptydatablock[i];
            current.fracdcm3hits = col_fracdcm3hits[i];
            current.hornI = col_hornI[i];
            current.livetime = col_livetime[i];
            current.nanosliceadcerror = col_nanosliceadcerror[i];
            current.nanoslicebufferempty = col_nanoslicebufferempty[i];
            current.nanoslicebufferfull = col_nanoslicebufferfull[i];
            current.nanoslicecommerror = col_nanoslicecommerror[i];
            current.nanoslicedatanotpresent = col_nanoslicedatanotpresent[i];
            current.nanoslicenolinkstatus = col_nanoslicenolinkstatus[i];
            current.nanosliceoverflowerror = col_nanosliceoverflowerror[i];
            current.nanoslicepacketerror = col_nanoslicepacketerror[i];
            current.nbaddcmslg = col_nbaddcmslg[i];
            current.ndatablockmissingdata = col_ndatablockmissingdata[i];
            current.ndcms = col_ndcms[i];
            current.ndiblocks = col_ndiblocks[i];
            current.ndroppedmicroblocks = col_ndroppedmicroblocks[i];
            current.nemptymicroslice = col_nemptymicroslice[i];
            current.nmicroblocks = col_nmicroblocks[i];
            current.nmicroslicedatanotpresent = col_nmicroslicedatanotpresent[i];
            current.nmicroslices = col_nmicroslices[i];
            current.nmissingdcms = col_nmissingdcms[i];
            current.nmissingdcmslg = col_nmissingdcmslg[i];
            current.nnanoslices = col_nnanoslices[i];
            current.nnoisyapds = col_nnoisyapds[i];
            current.nouttimehits = col_nouttimehits[i];
            current.posx = col_posx[i];
            current.posy = col_posy[i];
            current.spillpot = col_spillpot[i];
            current.widthx = col_widthx[i];
            current.widthy = col_widthy[i];
            current.det = col_det[i];
            current.dibfirst = col_dibfirst[i];
            current.diblast = col_diblast[i];
            current.dibmask = col_dibmask[i];
            current.eventincomplete = col_eventincomplete[i];
            current.is0HC = col_is0HC[i];
            current.isFHC = col_isFHC[i];
            current.isRHC = col_isRHC[i];
            current.isgoodspill = col_isgoodspill[i];
            current.ismc = col_ismc[i];
            current.maskstatus = col_maskstatus[i];
            current.trigger = col_trigger[i];
            
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
            std::vector<spill>
           > from_hdf5(hid_t file) {
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;
        std::vector<spill> content;
        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;

        _read_indices(file, col_run, col_subrun, col_evt);

        content.resize(col_run.size());

        std::vector<std::int64_t> col_deltaspilltimensec; /* deltaspilltimensec column */
        dataset = H5Dopen(file, "/spill/deltaspilltimensec", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_deltaspilltimensec.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT64, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_deltaspilltimensec.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint64_t> col_gpsspilltimensec; /* gpsspilltimensec column */
        dataset = H5Dopen(file, "/spill/gpsspilltimensec", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_gpsspilltimensec.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT64, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_gpsspilltimensec.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint64_t> col_gpsspilltimesec; /* gpsspilltimesec column */
        dataset = H5Dopen(file, "/spill/gpsspilltimesec", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_gpsspilltimesec.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT64, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_gpsspilltimesec.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint64_t> col_spilltimensec; /* spilltimensec column */
        dataset = H5Dopen(file, "/spill/spilltimensec", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_spilltimensec.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT64, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_spilltimensec.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint64_t> col_spilltimesec; /* spilltimesec column */
        dataset = H5Dopen(file, "/spill/spilltimesec", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_spilltimesec.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT64, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_spilltimesec.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_dcmedgematchfrac; /* dcmedgematchfrac column */
        dataset = H5Dopen(file, "/spill/dcmedgematchfrac", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dcmedgematchfrac.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dcmedgematchfrac.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_emptydatablock; /* emptydatablock column */
        dataset = H5Dopen(file, "/spill/emptydatablock", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_emptydatablock.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_emptydatablock.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_fracdcm3hits; /* fracdcm3hits column */
        dataset = H5Dopen(file, "/spill/fracdcm3hits", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_fracdcm3hits.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_fracdcm3hits.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_hornI; /* hornI column */
        dataset = H5Dopen(file, "/spill/hornI", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_hornI.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_hornI.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_livetime; /* livetime column */
        dataset = H5Dopen(file, "/spill/livetime", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_livetime.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_livetime.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nanosliceadcerror; /* nanosliceadcerror column */
        dataset = H5Dopen(file, "/spill/nanosliceadcerror", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nanosliceadcerror.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nanosliceadcerror.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nanoslicebufferempty; /* nanoslicebufferempty column */
        dataset = H5Dopen(file, "/spill/nanoslicebufferempty", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nanoslicebufferempty.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nanoslicebufferempty.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nanoslicebufferfull; /* nanoslicebufferfull column */
        dataset = H5Dopen(file, "/spill/nanoslicebufferfull", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nanoslicebufferfull.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nanoslicebufferfull.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nanoslicecommerror; /* nanoslicecommerror column */
        dataset = H5Dopen(file, "/spill/nanoslicecommerror", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nanoslicecommerror.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nanoslicecommerror.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nanoslicedatanotpresent; /* nanoslicedatanotpresent column */
        dataset = H5Dopen(file, "/spill/nanoslicedatanotpresent", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nanoslicedatanotpresent.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nanoslicedatanotpresent.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nanoslicenolinkstatus; /* nanoslicenolinkstatus column */
        dataset = H5Dopen(file, "/spill/nanoslicenolinkstatus", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nanoslicenolinkstatus.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nanoslicenolinkstatus.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nanosliceoverflowerror; /* nanosliceoverflowerror column */
        dataset = H5Dopen(file, "/spill/nanosliceoverflowerror", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nanosliceoverflowerror.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nanosliceoverflowerror.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nanoslicepacketerror; /* nanoslicepacketerror column */
        dataset = H5Dopen(file, "/spill/nanoslicepacketerror", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nanoslicepacketerror.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nanoslicepacketerror.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nbaddcmslg; /* nbaddcmslg column */
        dataset = H5Dopen(file, "/spill/nbaddcmslg", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nbaddcmslg.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nbaddcmslg.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_ndatablockmissingdata; /* ndatablockmissingdata column */
        dataset = H5Dopen(file, "/spill/ndatablockmissingdata", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndatablockmissingdata.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndatablockmissingdata.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_ndcms; /* ndcms column */
        dataset = H5Dopen(file, "/spill/ndcms", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndcms.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndcms.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_ndiblocks; /* ndiblocks column */
        dataset = H5Dopen(file, "/spill/ndiblocks", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndiblocks.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndiblocks.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_ndroppedmicroblocks; /* ndroppedmicroblocks column */
        dataset = H5Dopen(file, "/spill/ndroppedmicroblocks", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndroppedmicroblocks.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndroppedmicroblocks.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nemptymicroslice; /* nemptymicroslice column */
        dataset = H5Dopen(file, "/spill/nemptymicroslice", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nemptymicroslice.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nemptymicroslice.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nmicroblocks; /* nmicroblocks column */
        dataset = H5Dopen(file, "/spill/nmicroblocks", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nmicroblocks.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nmicroblocks.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nmicroslicedatanotpresent; /* nmicroslicedatanotpresent column */
        dataset = H5Dopen(file, "/spill/nmicroslicedatanotpresent", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nmicroslicedatanotpresent.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nmicroslicedatanotpresent.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nmicroslices; /* nmicroslices column */
        dataset = H5Dopen(file, "/spill/nmicroslices", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nmicroslices.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nmicroslices.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nmissingdcms; /* nmissingdcms column */
        dataset = H5Dopen(file, "/spill/nmissingdcms", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nmissingdcms.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nmissingdcms.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nmissingdcmslg; /* nmissingdcmslg column */
        dataset = H5Dopen(file, "/spill/nmissingdcmslg", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nmissingdcmslg.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nmissingdcmslg.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nnanoslices; /* nnanoslices column */
        dataset = H5Dopen(file, "/spill/nnanoslices", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nnanoslices.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nnanoslices.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nnoisyapds; /* nnoisyapds column */
        dataset = H5Dopen(file, "/spill/nnoisyapds", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nnoisyapds.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nnoisyapds.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nouttimehits; /* nouttimehits column */
        dataset = H5Dopen(file, "/spill/nouttimehits", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nouttimehits.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nouttimehits.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_posx; /* posx column */
        dataset = H5Dopen(file, "/spill/posx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_posx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_posx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_posy; /* posy column */
        dataset = H5Dopen(file, "/spill/posy", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_posy.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_posy.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_spillpot; /* spillpot column */
        dataset = H5Dopen(file, "/spill/spillpot", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_spillpot.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_spillpot.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_widthx; /* widthx column */
        dataset = H5Dopen(file, "/spill/widthx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_widthx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_widthx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_widthy; /* widthy column */
        dataset = H5Dopen(file, "/spill/widthy", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_widthy.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_widthy.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_det; /* det column */
        dataset = H5Dopen(file, "/spill/det", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_det.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_det.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_dibfirst; /* dibfirst column */
        dataset = H5Dopen(file, "/spill/dibfirst", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dibfirst.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dibfirst.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_diblast; /* diblast column */
        dataset = H5Dopen(file, "/spill/diblast", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_diblast.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_diblast.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_dibmask; /* dibmask column */
        dataset = H5Dopen(file, "/spill/dibmask", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dibmask.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dibmask.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_eventincomplete; /* eventincomplete column */
        dataset = H5Dopen(file, "/spill/eventincomplete", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_eventincomplete.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_eventincomplete.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_is0HC; /* is0HC column */
        dataset = H5Dopen(file, "/spill/is0HC", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_is0HC.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_is0HC.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_isFHC; /* isFHC column */
        dataset = H5Dopen(file, "/spill/isFHC", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_isFHC.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_isFHC.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_isRHC; /* isRHC column */
        dataset = H5Dopen(file, "/spill/isRHC", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_isRHC.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_isRHC.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_isgoodspill; /* isgoodspill column */
        dataset = H5Dopen(file, "/spill/isgoodspill", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_isgoodspill.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_isgoodspill.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_ismc; /* ismc column */
        dataset = H5Dopen(file, "/spill/ismc", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ismc.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ismc.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_maskstatus; /* maskstatus column */
        dataset = H5Dopen(file, "/spill/maskstatus", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_maskstatus.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_maskstatus.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint8_t> col_trigger; /* trigger column */
        dataset = H5Dopen(file, "/spill/trigger", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trigger.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT8, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trigger.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            content[i].deltaspilltimensec = col_deltaspilltimensec[i];
            content[i].gpsspilltimensec = col_gpsspilltimensec[i];
            content[i].gpsspilltimesec = col_gpsspilltimesec[i];
            content[i].spilltimensec = col_spilltimensec[i];
            content[i].spilltimesec = col_spilltimesec[i];
            content[i].dcmedgematchfrac = col_dcmedgematchfrac[i];
            content[i].emptydatablock = col_emptydatablock[i];
            content[i].fracdcm3hits = col_fracdcm3hits[i];
            content[i].hornI = col_hornI[i];
            content[i].livetime = col_livetime[i];
            content[i].nanosliceadcerror = col_nanosliceadcerror[i];
            content[i].nanoslicebufferempty = col_nanoslicebufferempty[i];
            content[i].nanoslicebufferfull = col_nanoslicebufferfull[i];
            content[i].nanoslicecommerror = col_nanoslicecommerror[i];
            content[i].nanoslicedatanotpresent = col_nanoslicedatanotpresent[i];
            content[i].nanoslicenolinkstatus = col_nanoslicenolinkstatus[i];
            content[i].nanosliceoverflowerror = col_nanosliceoverflowerror[i];
            content[i].nanoslicepacketerror = col_nanoslicepacketerror[i];
            content[i].nbaddcmslg = col_nbaddcmslg[i];
            content[i].ndatablockmissingdata = col_ndatablockmissingdata[i];
            content[i].ndcms = col_ndcms[i];
            content[i].ndiblocks = col_ndiblocks[i];
            content[i].ndroppedmicroblocks = col_ndroppedmicroblocks[i];
            content[i].nemptymicroslice = col_nemptymicroslice[i];
            content[i].nmicroblocks = col_nmicroblocks[i];
            content[i].nmicroslicedatanotpresent = col_nmicroslicedatanotpresent[i];
            content[i].nmicroslices = col_nmicroslices[i];
            content[i].nmissingdcms = col_nmissingdcms[i];
            content[i].nmissingdcmslg = col_nmissingdcmslg[i];
            content[i].nnanoslices = col_nnanoslices[i];
            content[i].nnoisyapds = col_nnoisyapds[i];
            content[i].nouttimehits = col_nouttimehits[i];
            content[i].posx = col_posx[i];
            content[i].posy = col_posy[i];
            content[i].spillpot = col_spillpot[i];
            content[i].widthx = col_widthx[i];
            content[i].widthy = col_widthy[i];
            content[i].det = col_det[i];
            content[i].dibfirst = col_dibfirst[i];
            content[i].diblast = col_diblast[i];
            content[i].dibmask = col_dibmask[i];
            content[i].eventincomplete = col_eventincomplete[i];
            content[i].is0HC = col_is0HC[i];
            content[i].isFHC = col_isFHC[i];
            content[i].isRHC = col_isRHC[i];
            content[i].isgoodspill = col_isgoodspill[i];
            content[i].ismc = col_ismc[i];
            content[i].maskstatus = col_maskstatus[i];
            content[i].trigger = col_trigger[i];
            
        }

        return { col_run, col_subrun, col_evt, content };
    }

    static std::tuple<
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<spill>
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
        dataset = H5Dopen(file, "/spill/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        runs.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(runs.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        dataset = H5Dopen(file, "/spill/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        subruns.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(subruns.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        dataset = H5Dopen(file, "/spill/evt", H5P_DEFAULT);
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