/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_TRAINING_CVNMAPS_HPP_
#define __REC_TRAINING_CVNMAPS_HPP_

#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_training_cvnmaps structure for the 
 * "/rec.training.cvnmaps" table in corresponding HDF5 files.
 */
struct rec_training_cvnmaps {

    std::int32_t cycle; /* cycle column */
    std::uint32_t firstcellx; /* firstcellx column */
    std::uint32_t firstcelly; /* firstcelly column */
    std::uint32_t firstplane; /* firstplane column */
    float hitfracx; /* hitfracx column */
    float hitfracy; /* hitfracy column */
    std::uint32_t lastcellx; /* lastcellx column */
    std::uint32_t lastcelly; /* lastcelly column */
    std::uint32_t lastplane; /* lastplane column */
    std::uint32_t ncells; /* ncells column */
    std::uint32_t nchan; /* nchan column */
    std::uint32_t nplanes; /* nplanes column */
    std::uint32_t rec_training_cvnmaps_idx; /* rec.training.cvnmaps_idx column */
    std::uint16_t subevt; /* subevt column */
    std::uint8_t cvnlabmap; /* cvnlabmap column */
    std::uint8_t cvnmap; /* cvnmap column */
    std::uint8_t cvnobjmap; /* cvnobjmap column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & cycle;
        ar & firstcellx;
        ar & firstcelly;
        ar & firstplane;
        ar & hitfracx;
        ar & hitfracy;
        ar & lastcellx;
        ar & lastcelly;
        ar & lastplane;
        ar & ncells;
        ar & nchan;
        ar & nplanes;
        ar & rec_training_cvnmaps_idx;
        ar & subevt;
        ar & cvnlabmap;
        ar & cvnmap;
        ar & cvnobjmap;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_training_cvnmaps& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_training_cvnmaps current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.training.cvnmaps/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_firstcellx; /* firstcellx column */
        dataset = H5Dopen(file, "/rec.training.cvnmaps/firstcellx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_firstcellx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_firstcellx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_firstcelly; /* firstcelly column */
        dataset = H5Dopen(file, "/rec.training.cvnmaps/firstcelly", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_firstcelly.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_firstcelly.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_firstplane; /* firstplane column */
        dataset = H5Dopen(file, "/rec.training.cvnmaps/firstplane", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_firstplane.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_firstplane.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_hitfracx; /* hitfracx column */
        dataset = H5Dopen(file, "/rec.training.cvnmaps/hitfracx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_hitfracx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_hitfracx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_hitfracy; /* hitfracy column */
        dataset = H5Dopen(file, "/rec.training.cvnmaps/hitfracy", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_hitfracy.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_hitfracy.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_lastcellx; /* lastcellx column */
        dataset = H5Dopen(file, "/rec.training.cvnmaps/lastcellx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_lastcellx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_lastcellx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_lastcelly; /* lastcelly column */
        dataset = H5Dopen(file, "/rec.training.cvnmaps/lastcelly", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_lastcelly.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_lastcelly.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_lastplane; /* lastplane column */
        dataset = H5Dopen(file, "/rec.training.cvnmaps/lastplane", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_lastplane.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_lastplane.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_ncells; /* ncells column */
        dataset = H5Dopen(file, "/rec.training.cvnmaps/ncells", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ncells.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ncells.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nchan; /* nchan column */
        dataset = H5Dopen(file, "/rec.training.cvnmaps/nchan", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nchan.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nchan.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nplanes; /* nplanes column */
        dataset = H5Dopen(file, "/rec.training.cvnmaps/nplanes", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nplanes.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nplanes.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_training_cvnmaps_idx; /* rec.training.cvnmaps_idx column */
        dataset = H5Dopen(file, "/rec.training.cvnmaps/rec.training.cvnmaps_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_training_cvnmaps_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_training_cvnmaps_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.training.cvnmaps/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint8_t> col_cvnlabmap; /* cvnlabmap column */
        dataset = H5Dopen(file, "/rec.training.cvnmaps/cvnlabmap", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cvnlabmap.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT8, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cvnlabmap.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint8_t> col_cvnmap; /* cvnmap column */
        dataset = H5Dopen(file, "/rec.training.cvnmaps/cvnmap", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cvnmap.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT8, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cvnmap.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint8_t> col_cvnobjmap; /* cvnobjmap column */
        dataset = H5Dopen(file, "/rec.training.cvnmaps/cvnobjmap", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cvnobjmap.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT8, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cvnobjmap.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        /* column for run indices */
        std::vector<unsigned> col_run;
        dataset = H5Dopen(file, "/rec.training.cvnmaps/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_run.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_run.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        std::vector<unsigned> col_subrun;
        dataset = H5Dopen(file, "/rec.training.cvnmaps/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subrun.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subrun.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        std::vector<unsigned> col_evt;
        dataset = H5Dopen(file, "/rec.training.cvnmaps/evt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.cycle = col_cycle[i];
            current.firstcellx = col_firstcellx[i];
            current.firstcelly = col_firstcelly[i];
            current.firstplane = col_firstplane[i];
            current.hitfracx = col_hitfracx[i];
            current.hitfracy = col_hitfracy[i];
            current.lastcellx = col_lastcellx[i];
            current.lastcelly = col_lastcelly[i];
            current.lastplane = col_lastplane[i];
            current.ncells = col_ncells[i];
            current.nchan = col_nchan[i];
            current.nplanes = col_nplanes[i];
            current.rec_training_cvnmaps_idx = col_rec_training_cvnmaps_idx[i];
            current.subevt = col_subevt[i];
            current.cvnlabmap = col_cvnlabmap[i];
            current.cvnmap = col_cvnmap[i];
            current.cvnobjmap = col_cvnobjmap[i];
            
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