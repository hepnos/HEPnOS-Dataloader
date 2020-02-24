/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_ENERGY_NUMU_BPFENERGY_HPP_
#define __REC_ENERGY_NUMU_BPFENERGY_HPP_

#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_energy_numu_bpfenergy structure for the 
 * "/rec.energy.numu.bpfenergy" table in corresponding HDF5 files.
 */
struct rec_energy_numu_bpfenergy {

    float DirZMuon; /* DirZMuon column */
    float E1; /* E1 column */
    float E2; /* E2 column */
    float E3; /* E3 column */
    float EFuzzyK3D; /* EFuzzyK3D column */
    float ERemain; /* ERemain column */
    float Eres1; /* Eres1 column */
    float Eres2; /* Eres2 column */
    float Eres3; /* Eres3 column */
    float EventID; /* EventID column */
    float N3DProngs; /* N3DProngs column */
    float PMuon; /* PMuon column */
    float SumPE; /* SumPE column */
    std::int32_t cycle; /* cycle column */
    std::uint16_t subevt; /* subevt column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & DirZMuon;
        ar & E1;
        ar & E2;
        ar & E3;
        ar & EFuzzyK3D;
        ar & ERemain;
        ar & Eres1;
        ar & Eres2;
        ar & Eres3;
        ar & EventID;
        ar & N3DProngs;
        ar & PMuon;
        ar & SumPE;
        ar & cycle;
        ar & subevt;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_energy_numu_bpfenergy& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_energy_numu_bpfenergy current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<float> col_DirZMuon; /* DirZMuon column */
        dataset = H5Dopen(file, "/rec.energy.numu.bpfenergy/DirZMuon", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_DirZMuon.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_DirZMuon.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_E1; /* E1 column */
        dataset = H5Dopen(file, "/rec.energy.numu.bpfenergy/E1", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_E1.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_E1.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_E2; /* E2 column */
        dataset = H5Dopen(file, "/rec.energy.numu.bpfenergy/E2", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_E2.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_E2.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_E3; /* E3 column */
        dataset = H5Dopen(file, "/rec.energy.numu.bpfenergy/E3", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_E3.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_E3.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_EFuzzyK3D; /* EFuzzyK3D column */
        dataset = H5Dopen(file, "/rec.energy.numu.bpfenergy/EFuzzyK3D", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_EFuzzyK3D.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_EFuzzyK3D.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ERemain; /* ERemain column */
        dataset = H5Dopen(file, "/rec.energy.numu.bpfenergy/ERemain", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ERemain.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ERemain.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_Eres1; /* Eres1 column */
        dataset = H5Dopen(file, "/rec.energy.numu.bpfenergy/Eres1", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_Eres1.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_Eres1.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_Eres2; /* Eres2 column */
        dataset = H5Dopen(file, "/rec.energy.numu.bpfenergy/Eres2", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_Eres2.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_Eres2.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_Eres3; /* Eres3 column */
        dataset = H5Dopen(file, "/rec.energy.numu.bpfenergy/Eres3", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_Eres3.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_Eres3.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_EventID; /* EventID column */
        dataset = H5Dopen(file, "/rec.energy.numu.bpfenergy/EventID", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_EventID.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_EventID.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_N3DProngs; /* N3DProngs column */
        dataset = H5Dopen(file, "/rec.energy.numu.bpfenergy/N3DProngs", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_N3DProngs.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_N3DProngs.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_PMuon; /* PMuon column */
        dataset = H5Dopen(file, "/rec.energy.numu.bpfenergy/PMuon", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_PMuon.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_PMuon.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_SumPE; /* SumPE column */
        dataset = H5Dopen(file, "/rec.energy.numu.bpfenergy/SumPE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_SumPE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_SumPE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.energy.numu.bpfenergy/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.energy.numu.bpfenergy/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        /* column for run indices */
        std::vector<unsigned> col_run;
        dataset = H5Dopen(file, "/rec.energy.numu.bpfenergy/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_run.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_run.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        std::vector<unsigned> col_subrun;
        dataset = H5Dopen(file, "/rec.energy.numu.bpfenergy/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subrun.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subrun.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        std::vector<unsigned> col_evt;
        dataset = H5Dopen(file, "/rec.energy.numu.bpfenergy/evt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.DirZMuon = col_DirZMuon[i];
            current.E1 = col_E1[i];
            current.E2 = col_E2[i];
            current.E3 = col_E3[i];
            current.EFuzzyK3D = col_EFuzzyK3D[i];
            current.ERemain = col_ERemain[i];
            current.Eres1 = col_Eres1[i];
            current.Eres2 = col_Eres2[i];
            current.Eres3 = col_Eres3[i];
            current.EventID = col_EventID[i];
            current.N3DProngs = col_N3DProngs[i];
            current.PMuon = col_PMuon[i];
            current.SumPE = col_SumPE[i];
            current.cycle = col_cycle[i];
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