/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_ME_TRKDISCRETE_HPP_
#define __REC_ME_TRKDISCRETE_HPP_

#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_me_trkdiscrete structure for the 
 * "/rec.me.trkdiscrete" table in corresponding HDF5 files.
 */
struct rec_me_trkdiscrete {

    float adc; /* adc column */
    float calE; /* calE column */
    std::int32_t cycle; /* cycle column */
    float deltat; /* deltat column */
    float disttotrack; /* disttotrack column */
    float meanpos_x; /* meanpos.x column */
    float meanpos_y; /* meanpos.y column */
    float meanpos_z; /* meanpos.z column */
    float mid; /* mid column */
    std::uint32_t rec_me_trkdiscrete_idx; /* rec.me.trkdiscrete_idx column */
    std::uint16_t nhitx; /* nhitx column */
    std::uint16_t nhity; /* nhity column */
    std::uint16_t subevt; /* subevt column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & adc;
        ar & calE;
        ar & cycle;
        ar & deltat;
        ar & disttotrack;
        ar & meanpos_x;
        ar & meanpos_y;
        ar & meanpos_z;
        ar & mid;
        ar & rec_me_trkdiscrete_idx;
        ar & nhitx;
        ar & nhity;
        ar & subevt;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_me_trkdiscrete& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_me_trkdiscrete current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<float> col_adc; /* adc column */
        dataset = H5Dopen(file, "/rec.me.trkdiscrete/adc", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_adc.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_adc.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_calE; /* calE column */
        dataset = H5Dopen(file, "/rec.me.trkdiscrete/calE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_calE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_calE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.me.trkdiscrete/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_deltat; /* deltat column */
        dataset = H5Dopen(file, "/rec.me.trkdiscrete/deltat", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_deltat.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_deltat.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_disttotrack; /* disttotrack column */
        dataset = H5Dopen(file, "/rec.me.trkdiscrete/disttotrack", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_disttotrack.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_disttotrack.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_meanpos_x; /* meanpos.x column */
        dataset = H5Dopen(file, "/rec.me.trkdiscrete/meanpos.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_meanpos_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_meanpos_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_meanpos_y; /* meanpos.y column */
        dataset = H5Dopen(file, "/rec.me.trkdiscrete/meanpos.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_meanpos_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_meanpos_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_meanpos_z; /* meanpos.z column */
        dataset = H5Dopen(file, "/rec.me.trkdiscrete/meanpos.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_meanpos_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_meanpos_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_mid; /* mid column */
        dataset = H5Dopen(file, "/rec.me.trkdiscrete/mid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_mid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_mid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_me_trkdiscrete_idx; /* rec.me.trkdiscrete_idx column */
        dataset = H5Dopen(file, "/rec.me.trkdiscrete/rec.me.trkdiscrete_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_me_trkdiscrete_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_me_trkdiscrete_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_nhitx; /* nhitx column */
        dataset = H5Dopen(file, "/rec.me.trkdiscrete/nhitx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nhitx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nhitx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_nhity; /* nhity column */
        dataset = H5Dopen(file, "/rec.me.trkdiscrete/nhity", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nhity.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nhity.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.me.trkdiscrete/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        /* column for run indices */
        std::vector<unsigned> col_run;
        dataset = H5Dopen(file, "/rec.me.trkdiscrete/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_run.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_run.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        std::vector<unsigned> col_subrun;
        dataset = H5Dopen(file, "/rec.me.trkdiscrete/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subrun.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subrun.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        std::vector<unsigned> col_evt;
        dataset = H5Dopen(file, "/rec.me.trkdiscrete/evt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.adc = col_adc[i];
            current.calE = col_calE[i];
            current.cycle = col_cycle[i];
            current.deltat = col_deltat[i];
            current.disttotrack = col_disttotrack[i];
            current.meanpos_x = col_meanpos_x[i];
            current.meanpos_y = col_meanpos_y[i];
            current.meanpos_z = col_meanpos_z[i];
            current.mid = col_mid[i];
            current.rec_me_trkdiscrete_idx = col_rec_me_trkdiscrete_idx[i];
            current.nhitx = col_nhitx[i];
            current.nhity = col_nhity[i];
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