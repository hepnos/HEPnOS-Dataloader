/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_MC_COSMIC_MICHEL_HPP_
#define __REC_MC_COSMIC_MICHEL_HPP_

#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_mc_cosmic_michel structure for the 
 * "/rec.mc.cosmic.michel" table in corresponding HDF5 files.
 */
struct rec_mc_cosmic_michel {

    float E; /* E column */
    std::int32_t cycle; /* cycle column */
    float mustop_E; /* mustop.E column */
    float mustop_px; /* mustop.px column */
    float mustop_py; /* mustop.py column */
    float mustop_pz; /* mustop.pz column */
    float p_E; /* p.E column */
    float p_px; /* p.px column */
    float p_py; /* p.py column */
    float p_pz; /* p.pz column */
    std::uint32_t rec_mc_cosmic_michel_idx; /* rec.mc.cosmic.michel_idx column */
    std::uint32_t rec_mc_cosmic_idx; /* rec.mc.cosmic_idx column */
    float time; /* time column */
    float visE; /* visE column */
    std::uint16_t subevt; /* subevt column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & E;
        ar & cycle;
        ar & mustop_E;
        ar & mustop_px;
        ar & mustop_py;
        ar & mustop_pz;
        ar & p_E;
        ar & p_px;
        ar & p_py;
        ar & p_pz;
        ar & rec_mc_cosmic_michel_idx;
        ar & rec_mc_cosmic_idx;
        ar & time;
        ar & visE;
        ar & subevt;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_mc_cosmic_michel& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_mc_cosmic_michel current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<float> col_E; /* E column */
        dataset = H5Dopen(file, "/rec.mc.cosmic.michel/E", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_E.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_E.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.mc.cosmic.michel/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_mustop_E; /* mustop.E column */
        dataset = H5Dopen(file, "/rec.mc.cosmic.michel/mustop.E", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_mustop_E.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_mustop_E.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_mustop_px; /* mustop.px column */
        dataset = H5Dopen(file, "/rec.mc.cosmic.michel/mustop.px", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_mustop_px.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_mustop_px.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_mustop_py; /* mustop.py column */
        dataset = H5Dopen(file, "/rec.mc.cosmic.michel/mustop.py", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_mustop_py.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_mustop_py.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_mustop_pz; /* mustop.pz column */
        dataset = H5Dopen(file, "/rec.mc.cosmic.michel/mustop.pz", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_mustop_pz.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_mustop_pz.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p_E; /* p.E column */
        dataset = H5Dopen(file, "/rec.mc.cosmic.michel/p.E", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p_E.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p_E.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p_px; /* p.px column */
        dataset = H5Dopen(file, "/rec.mc.cosmic.michel/p.px", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p_px.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p_px.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p_py; /* p.py column */
        dataset = H5Dopen(file, "/rec.mc.cosmic.michel/p.py", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p_py.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p_py.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_p_pz; /* p.pz column */
        dataset = H5Dopen(file, "/rec.mc.cosmic.michel/p.pz", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_p_pz.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_p_pz.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_mc_cosmic_michel_idx; /* rec.mc.cosmic.michel_idx column */
        dataset = H5Dopen(file, "/rec.mc.cosmic.michel/rec.mc.cosmic.michel_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_mc_cosmic_michel_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_mc_cosmic_michel_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_mc_cosmic_idx; /* rec.mc.cosmic_idx column */
        dataset = H5Dopen(file, "/rec.mc.cosmic.michel/rec.mc.cosmic_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_mc_cosmic_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_mc_cosmic_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_time; /* time column */
        dataset = H5Dopen(file, "/rec.mc.cosmic.michel/time", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_time.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_time.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_visE; /* visE column */
        dataset = H5Dopen(file, "/rec.mc.cosmic.michel/visE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_visE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_visE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.mc.cosmic.michel/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        /* column for run indices */
        std::vector<unsigned> col_run;
        dataset = H5Dopen(file, "/rec.mc.cosmic.michel/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_run.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_run.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        std::vector<unsigned> col_subrun;
        dataset = H5Dopen(file, "/rec.mc.cosmic.michel/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subrun.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subrun.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        std::vector<unsigned> col_evt;
        dataset = H5Dopen(file, "/rec.mc.cosmic.michel/evt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.E = col_E[i];
            current.cycle = col_cycle[i];
            current.mustop_E = col_mustop_E[i];
            current.mustop_px = col_mustop_px[i];
            current.mustop_py = col_mustop_py[i];
            current.mustop_pz = col_mustop_pz[i];
            current.p_E = col_p_E[i];
            current.p_px = col_p_px[i];
            current.p_py = col_p_py[i];
            current.p_pz = col_p_pz[i];
            current.rec_mc_cosmic_michel_idx = col_rec_mc_cosmic_michel_idx[i];
            current.rec_mc_cosmic_idx = col_rec_mc_cosmic_idx[i];
            current.time = col_time[i];
            current.visE = col_visE[i];
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