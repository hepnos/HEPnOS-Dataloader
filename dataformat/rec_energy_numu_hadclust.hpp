/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_ENERGY_NUMU_HADCLUST_HPP_
#define __REC_ENERGY_NUMU_HADCLUST_HPP_

#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_energy_numu_hadclust structure for the 
 * "/rec.energy.numu.hadclust" table in corresponding HDF5 files.
 */
struct rec_energy_numu_hadclust {

    float boxmax_x; /* boxmax.x column */
    float boxmax_y; /* boxmax.y column */
    float boxmax_z; /* boxmax.z column */
    float boxmin_x; /* boxmin.x column */
    float boxmin_y; /* boxmin.y column */
    float boxmin_z; /* boxmin.z column */
    float calE; /* calE column */
    std::int32_t cycle; /* cycle column */
    std::uint32_t firstcell; /* firstcell column */
    std::uint32_t firstplane; /* firstplane column */
    std::uint32_t lastcell; /* lastcell column */
    std::uint32_t lastplane; /* lastplane column */
    float meanpos_x; /* meanpos.x column */
    float meanpos_y; /* meanpos.y column */
    float meanpos_z; /* meanpos.z column */
    std::uint32_t ncalhit; /* ncalhit column */
    std::uint32_t ncellsfromedge; /* ncellsfromedge column */
    std::uint32_t ncontplanes; /* ncontplanes column */
    std::uint32_t nhit; /* nhit column */
    std::uint32_t nmiphit; /* nmiphit column */
    std::uint16_t subevt; /* subevt column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & boxmax_x;
        ar & boxmax_y;
        ar & boxmax_z;
        ar & boxmin_x;
        ar & boxmin_y;
        ar & boxmin_z;
        ar & calE;
        ar & cycle;
        ar & firstcell;
        ar & firstplane;
        ar & lastcell;
        ar & lastplane;
        ar & meanpos_x;
        ar & meanpos_y;
        ar & meanpos_z;
        ar & ncalhit;
        ar & ncellsfromedge;
        ar & ncontplanes;
        ar & nhit;
        ar & nmiphit;
        ar & subevt;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_energy_numu_hadclust& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_energy_numu_hadclust current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<float> col_boxmax_x; /* boxmax.x column */
        dataset = H5Dopen(file, "/rec.energy.numu.hadclust/boxmax.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_boxmax_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_boxmax_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_boxmax_y; /* boxmax.y column */
        dataset = H5Dopen(file, "/rec.energy.numu.hadclust/boxmax.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_boxmax_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_boxmax_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_boxmax_z; /* boxmax.z column */
        dataset = H5Dopen(file, "/rec.energy.numu.hadclust/boxmax.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_boxmax_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_boxmax_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_boxmin_x; /* boxmin.x column */
        dataset = H5Dopen(file, "/rec.energy.numu.hadclust/boxmin.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_boxmin_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_boxmin_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_boxmin_y; /* boxmin.y column */
        dataset = H5Dopen(file, "/rec.energy.numu.hadclust/boxmin.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_boxmin_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_boxmin_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_boxmin_z; /* boxmin.z column */
        dataset = H5Dopen(file, "/rec.energy.numu.hadclust/boxmin.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_boxmin_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_boxmin_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_calE; /* calE column */
        dataset = H5Dopen(file, "/rec.energy.numu.hadclust/calE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_calE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_calE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.energy.numu.hadclust/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_firstcell; /* firstcell column */
        dataset = H5Dopen(file, "/rec.energy.numu.hadclust/firstcell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_firstcell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_firstcell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_firstplane; /* firstplane column */
        dataset = H5Dopen(file, "/rec.energy.numu.hadclust/firstplane", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_firstplane.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_firstplane.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_lastcell; /* lastcell column */
        dataset = H5Dopen(file, "/rec.energy.numu.hadclust/lastcell", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_lastcell.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_lastcell.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_lastplane; /* lastplane column */
        dataset = H5Dopen(file, "/rec.energy.numu.hadclust/lastplane", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_lastplane.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_lastplane.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_meanpos_x; /* meanpos.x column */
        dataset = H5Dopen(file, "/rec.energy.numu.hadclust/meanpos.x", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_meanpos_x.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_meanpos_x.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_meanpos_y; /* meanpos.y column */
        dataset = H5Dopen(file, "/rec.energy.numu.hadclust/meanpos.y", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_meanpos_y.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_meanpos_y.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_meanpos_z; /* meanpos.z column */
        dataset = H5Dopen(file, "/rec.energy.numu.hadclust/meanpos.z", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_meanpos_z.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_meanpos_z.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_ncalhit; /* ncalhit column */
        dataset = H5Dopen(file, "/rec.energy.numu.hadclust/ncalhit", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ncalhit.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ncalhit.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_ncellsfromedge; /* ncellsfromedge column */
        dataset = H5Dopen(file, "/rec.energy.numu.hadclust/ncellsfromedge", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ncellsfromedge.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ncellsfromedge.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_ncontplanes; /* ncontplanes column */
        dataset = H5Dopen(file, "/rec.energy.numu.hadclust/ncontplanes", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ncontplanes.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ncontplanes.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nhit; /* nhit column */
        dataset = H5Dopen(file, "/rec.energy.numu.hadclust/nhit", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nhit.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nhit.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nmiphit; /* nmiphit column */
        dataset = H5Dopen(file, "/rec.energy.numu.hadclust/nmiphit", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nmiphit.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nmiphit.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.energy.numu.hadclust/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        /* column for run indices */
        std::vector<unsigned> col_run;
        dataset = H5Dopen(file, "/rec.energy.numu.hadclust/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_run.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_run.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        std::vector<unsigned> col_subrun;
        dataset = H5Dopen(file, "/rec.energy.numu.hadclust/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subrun.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subrun.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        std::vector<unsigned> col_evt;
        dataset = H5Dopen(file, "/rec.energy.numu.hadclust/evt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.boxmax_x = col_boxmax_x[i];
            current.boxmax_y = col_boxmax_y[i];
            current.boxmax_z = col_boxmax_z[i];
            current.boxmin_x = col_boxmin_x[i];
            current.boxmin_y = col_boxmin_y[i];
            current.boxmin_z = col_boxmin_z[i];
            current.calE = col_calE[i];
            current.cycle = col_cycle[i];
            current.firstcell = col_firstcell[i];
            current.firstplane = col_firstplane[i];
            current.lastcell = col_lastcell[i];
            current.lastplane = col_lastplane[i];
            current.meanpos_x = col_meanpos_x[i];
            current.meanpos_y = col_meanpos_y[i];
            current.meanpos_z = col_meanpos_z[i];
            current.ncalhit = col_ncalhit[i];
            current.ncellsfromedge = col_ncellsfromedge[i];
            current.ncontplanes = col_ncontplanes[i];
            current.nhit = col_nhit[i];
            current.nmiphit = col_nmiphit[i];
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