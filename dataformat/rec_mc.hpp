/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_MC_HPP_
#define __REC_MC_HPP_

#include <tuple>
#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_mc structure for the 
 * "/rec.mc" table in corresponding HDF5 files.
 */
struct rec_mc {

    std::int32_t cycle; /* cycle column */
    std::int16_t faveidxeff; /* faveidxeff column */
    std::int16_t faveidxeffpur; /* faveidxeffpur column */
    std::int16_t faveidxeffthenpur; /* faveidxeffthenpur column */
    std::int16_t faveidxenergy; /* faveidxenergy column */
    std::int16_t faveidxpur; /* faveidxpur column */
    std::int16_t nallcosmics; /* nallcosmics column */
    std::int16_t nallnus; /* nallnus column */
    std::int16_t ncosmic; /* ncosmic column */
    std::int16_t nnu; /* nnu column */
    std::uint16_t subevt; /* subevt column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & cycle;
        ar & faveidxeff;
        ar & faveidxeffpur;
        ar & faveidxeffthenpur;
        ar & faveidxenergy;
        ar & faveidxpur;
        ar & nallcosmics;
        ar & nallnus;
        ar & ncosmic;
        ar & nnu;
        ar & subevt;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_mc& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_mc current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;
        _read_indices(file, col_run, col_subrun, col_evt);

        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.mc/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int16_t> col_faveidxeff; /* faveidxeff column */
        dataset = H5Dopen(file, "/rec.mc/faveidxeff", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_faveidxeff.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_faveidxeff.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int16_t> col_faveidxeffpur; /* faveidxeffpur column */
        dataset = H5Dopen(file, "/rec.mc/faveidxeffpur", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_faveidxeffpur.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_faveidxeffpur.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int16_t> col_faveidxeffthenpur; /* faveidxeffthenpur column */
        dataset = H5Dopen(file, "/rec.mc/faveidxeffthenpur", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_faveidxeffthenpur.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_faveidxeffthenpur.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int16_t> col_faveidxenergy; /* faveidxenergy column */
        dataset = H5Dopen(file, "/rec.mc/faveidxenergy", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_faveidxenergy.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_faveidxenergy.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int16_t> col_faveidxpur; /* faveidxpur column */
        dataset = H5Dopen(file, "/rec.mc/faveidxpur", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_faveidxpur.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_faveidxpur.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int16_t> col_nallcosmics; /* nallcosmics column */
        dataset = H5Dopen(file, "/rec.mc/nallcosmics", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nallcosmics.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nallcosmics.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int16_t> col_nallnus; /* nallnus column */
        dataset = H5Dopen(file, "/rec.mc/nallnus", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nallnus.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nallnus.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int16_t> col_ncosmic; /* ncosmic column */
        dataset = H5Dopen(file, "/rec.mc/ncosmic", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ncosmic.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ncosmic.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int16_t> col_nnu; /* nnu column */
        dataset = H5Dopen(file, "/rec.mc/nnu", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nnu.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nnu.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.mc/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.cycle = col_cycle[i];
            current.faveidxeff = col_faveidxeff[i];
            current.faveidxeffpur = col_faveidxeffpur[i];
            current.faveidxeffthenpur = col_faveidxeffthenpur[i];
            current.faveidxenergy = col_faveidxenergy[i];
            current.faveidxpur = col_faveidxpur[i];
            current.nallcosmics = col_nallcosmics[i];
            current.nallnus = col_nallnus[i];
            current.ncosmic = col_ncosmic[i];
            current.nnu = col_nnu[i];
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
            std::vector<rec_mc>
           > from_hdf5(hid_t file) {
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;
        std::vector<rec_mc> content;
        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;

        _read_indices(file, col_run, col_subrun, col_evt);

        content.resize(col_run.size());

        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.mc/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int16_t> col_faveidxeff; /* faveidxeff column */
        dataset = H5Dopen(file, "/rec.mc/faveidxeff", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_faveidxeff.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_faveidxeff.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int16_t> col_faveidxeffpur; /* faveidxeffpur column */
        dataset = H5Dopen(file, "/rec.mc/faveidxeffpur", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_faveidxeffpur.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_faveidxeffpur.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int16_t> col_faveidxeffthenpur; /* faveidxeffthenpur column */
        dataset = H5Dopen(file, "/rec.mc/faveidxeffthenpur", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_faveidxeffthenpur.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_faveidxeffthenpur.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int16_t> col_faveidxenergy; /* faveidxenergy column */
        dataset = H5Dopen(file, "/rec.mc/faveidxenergy", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_faveidxenergy.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_faveidxenergy.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int16_t> col_faveidxpur; /* faveidxpur column */
        dataset = H5Dopen(file, "/rec.mc/faveidxpur", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_faveidxpur.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_faveidxpur.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int16_t> col_nallcosmics; /* nallcosmics column */
        dataset = H5Dopen(file, "/rec.mc/nallcosmics", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nallcosmics.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nallcosmics.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int16_t> col_nallnus; /* nallnus column */
        dataset = H5Dopen(file, "/rec.mc/nallnus", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nallnus.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nallnus.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int16_t> col_ncosmic; /* ncosmic column */
        dataset = H5Dopen(file, "/rec.mc/ncosmic", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ncosmic.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ncosmic.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int16_t> col_nnu; /* nnu column */
        dataset = H5Dopen(file, "/rec.mc/nnu", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nnu.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nnu.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.mc/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            content[i].cycle = col_cycle[i];
            content[i].faveidxeff = col_faveidxeff[i];
            content[i].faveidxeffpur = col_faveidxeffpur[i];
            content[i].faveidxeffthenpur = col_faveidxeffthenpur[i];
            content[i].faveidxenergy = col_faveidxenergy[i];
            content[i].faveidxpur = col_faveidxpur[i];
            content[i].nallcosmics = col_nallcosmics[i];
            content[i].nallnus = col_nallnus[i];
            content[i].ncosmic = col_ncosmic[i];
            content[i].nnu = col_nnu[i];
            content[i].subevt = col_subevt[i];
            
        }

        return { col_run, col_subrun, col_evt, content };
    }

    static std::tuple<
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<rec_mc>
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
        dataset = H5Dopen(file, "/rec.mc/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        runs.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(runs.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        dataset = H5Dopen(file, "/rec.mc/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        subruns.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(subruns.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        dataset = H5Dopen(file, "/rec.mc/evt", H5P_DEFAULT);
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