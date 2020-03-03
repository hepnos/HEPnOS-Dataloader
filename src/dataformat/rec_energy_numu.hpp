/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_ENERGY_NUMU_HPP_
#define __REC_ENERGY_NUMU_HPP_

#include <tuple>
#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_energy_numu structure for the 
 * "/rec.energy.numu" table in corresponding HDF5 files.
 */
struct rec_energy_numu {

    float E; /* E column */
    float angleE; /* angleE column */
    float angleerror; /* angleerror column */
    float calccE; /* calccE column */
    std::int32_t cycle; /* cycle column */
    float hadcalE; /* hadcalE column */
    float hadtrkE; /* hadtrkE column */
    float ndhadcalactE; /* ndhadcalactE column */
    float ndhadcalcatE; /* ndhadcalcatE column */
    float ndhadcaltranE; /* ndhadcaltranE column */
    float ndhadtrkactE; /* ndhadtrkactE column */
    float ndhadtrkcatE; /* ndhadtrkcatE column */
    float ndhadtrktranE; /* ndhadtrktranE column */
    float ndtrkcalactE; /* ndtrkcalactE column */
    float ndtrkcalcatE; /* ndtrkcalcatE column */
    float ndtrkcaltranE; /* ndtrkcaltranE column */
    float ndtrklenact; /* ndtrklenact column */
    float ndtrklencat; /* ndtrklencat column */
    float ndtrktranx; /* ndtrktranx column */
    float ndtrktrany; /* ndtrktrany column */
    float recomuonE; /* recomuonE column */
    float recotrkcchadE; /* recotrkcchadE column */
    float shiftedtrkccE; /* shiftedtrkccE column */
    float trkccE; /* trkccE column */
    float trknonqeE; /* trknonqeE column */
    float trkqeE; /* trkqeE column */
    float ucrecomuonE; /* ucrecomuonE column */
    float ucrecomuonE1trk; /* ucrecomuonE1trk column */
    std::uint16_t subevt; /* subevt column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & E;
        ar & angleE;
        ar & angleerror;
        ar & calccE;
        ar & cycle;
        ar & hadcalE;
        ar & hadtrkE;
        ar & ndhadcalactE;
        ar & ndhadcalcatE;
        ar & ndhadcaltranE;
        ar & ndhadtrkactE;
        ar & ndhadtrkcatE;
        ar & ndhadtrktranE;
        ar & ndtrkcalactE;
        ar & ndtrkcalcatE;
        ar & ndtrkcaltranE;
        ar & ndtrklenact;
        ar & ndtrklencat;
        ar & ndtrktranx;
        ar & ndtrktrany;
        ar & recomuonE;
        ar & recotrkcchadE;
        ar & shiftedtrkccE;
        ar & trkccE;
        ar & trknonqeE;
        ar & trkqeE;
        ar & ucrecomuonE;
        ar & ucrecomuonE1trk;
        ar & subevt;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_energy_numu& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_energy_numu current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;
        _read_indices(file, col_run, col_subrun, col_evt);

        std::vector<float> col_E; /* E column */
        dataset = H5Dopen(file, "/rec.energy.numu/E", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_E.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_E.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_angleE; /* angleE column */
        dataset = H5Dopen(file, "/rec.energy.numu/angleE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_angleE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_angleE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_angleerror; /* angleerror column */
        dataset = H5Dopen(file, "/rec.energy.numu/angleerror", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_angleerror.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_angleerror.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_calccE; /* calccE column */
        dataset = H5Dopen(file, "/rec.energy.numu/calccE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_calccE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_calccE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.energy.numu/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_hadcalE; /* hadcalE column */
        dataset = H5Dopen(file, "/rec.energy.numu/hadcalE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_hadcalE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_hadcalE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_hadtrkE; /* hadtrkE column */
        dataset = H5Dopen(file, "/rec.energy.numu/hadtrkE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_hadtrkE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_hadtrkE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ndhadcalactE; /* ndhadcalactE column */
        dataset = H5Dopen(file, "/rec.energy.numu/ndhadcalactE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndhadcalactE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndhadcalactE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ndhadcalcatE; /* ndhadcalcatE column */
        dataset = H5Dopen(file, "/rec.energy.numu/ndhadcalcatE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndhadcalcatE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndhadcalcatE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ndhadcaltranE; /* ndhadcaltranE column */
        dataset = H5Dopen(file, "/rec.energy.numu/ndhadcaltranE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndhadcaltranE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndhadcaltranE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ndhadtrkactE; /* ndhadtrkactE column */
        dataset = H5Dopen(file, "/rec.energy.numu/ndhadtrkactE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndhadtrkactE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndhadtrkactE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ndhadtrkcatE; /* ndhadtrkcatE column */
        dataset = H5Dopen(file, "/rec.energy.numu/ndhadtrkcatE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndhadtrkcatE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndhadtrkcatE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ndhadtrktranE; /* ndhadtrktranE column */
        dataset = H5Dopen(file, "/rec.energy.numu/ndhadtrktranE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndhadtrktranE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndhadtrktranE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ndtrkcalactE; /* ndtrkcalactE column */
        dataset = H5Dopen(file, "/rec.energy.numu/ndtrkcalactE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndtrkcalactE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndtrkcalactE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ndtrkcalcatE; /* ndtrkcalcatE column */
        dataset = H5Dopen(file, "/rec.energy.numu/ndtrkcalcatE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndtrkcalcatE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndtrkcalcatE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ndtrkcaltranE; /* ndtrkcaltranE column */
        dataset = H5Dopen(file, "/rec.energy.numu/ndtrkcaltranE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndtrkcaltranE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndtrkcaltranE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ndtrklenact; /* ndtrklenact column */
        dataset = H5Dopen(file, "/rec.energy.numu/ndtrklenact", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndtrklenact.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndtrklenact.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ndtrklencat; /* ndtrklencat column */
        dataset = H5Dopen(file, "/rec.energy.numu/ndtrklencat", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndtrklencat.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndtrklencat.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ndtrktranx; /* ndtrktranx column */
        dataset = H5Dopen(file, "/rec.energy.numu/ndtrktranx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndtrktranx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndtrktranx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ndtrktrany; /* ndtrktrany column */
        dataset = H5Dopen(file, "/rec.energy.numu/ndtrktrany", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndtrktrany.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndtrktrany.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_recomuonE; /* recomuonE column */
        dataset = H5Dopen(file, "/rec.energy.numu/recomuonE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_recomuonE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_recomuonE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_recotrkcchadE; /* recotrkcchadE column */
        dataset = H5Dopen(file, "/rec.energy.numu/recotrkcchadE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_recotrkcchadE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_recotrkcchadE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_shiftedtrkccE; /* shiftedtrkccE column */
        dataset = H5Dopen(file, "/rec.energy.numu/shiftedtrkccE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_shiftedtrkccE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_shiftedtrkccE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_trkccE; /* trkccE column */
        dataset = H5Dopen(file, "/rec.energy.numu/trkccE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkccE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkccE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_trknonqeE; /* trknonqeE column */
        dataset = H5Dopen(file, "/rec.energy.numu/trknonqeE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trknonqeE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trknonqeE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_trkqeE; /* trkqeE column */
        dataset = H5Dopen(file, "/rec.energy.numu/trkqeE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkqeE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkqeE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ucrecomuonE; /* ucrecomuonE column */
        dataset = H5Dopen(file, "/rec.energy.numu/ucrecomuonE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ucrecomuonE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ucrecomuonE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ucrecomuonE1trk; /* ucrecomuonE1trk column */
        dataset = H5Dopen(file, "/rec.energy.numu/ucrecomuonE1trk", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ucrecomuonE1trk.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ucrecomuonE1trk.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.energy.numu/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.E = col_E[i];
            current.angleE = col_angleE[i];
            current.angleerror = col_angleerror[i];
            current.calccE = col_calccE[i];
            current.cycle = col_cycle[i];
            current.hadcalE = col_hadcalE[i];
            current.hadtrkE = col_hadtrkE[i];
            current.ndhadcalactE = col_ndhadcalactE[i];
            current.ndhadcalcatE = col_ndhadcalcatE[i];
            current.ndhadcaltranE = col_ndhadcaltranE[i];
            current.ndhadtrkactE = col_ndhadtrkactE[i];
            current.ndhadtrkcatE = col_ndhadtrkcatE[i];
            current.ndhadtrktranE = col_ndhadtrktranE[i];
            current.ndtrkcalactE = col_ndtrkcalactE[i];
            current.ndtrkcalcatE = col_ndtrkcalcatE[i];
            current.ndtrkcaltranE = col_ndtrkcaltranE[i];
            current.ndtrklenact = col_ndtrklenact[i];
            current.ndtrklencat = col_ndtrklencat[i];
            current.ndtrktranx = col_ndtrktranx[i];
            current.ndtrktrany = col_ndtrktrany[i];
            current.recomuonE = col_recomuonE[i];
            current.recotrkcchadE = col_recotrkcchadE[i];
            current.shiftedtrkccE = col_shiftedtrkccE[i];
            current.trkccE = col_trkccE[i];
            current.trknonqeE = col_trknonqeE[i];
            current.trkqeE = col_trkqeE[i];
            current.ucrecomuonE = col_ucrecomuonE[i];
            current.ucrecomuonE1trk = col_ucrecomuonE1trk[i];
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
            std::vector<rec_energy_numu>
           > from_hdf5(hid_t file) {
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;
        std::vector<rec_energy_numu> content;
        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;

        _read_indices(file, col_run, col_subrun, col_evt);

        content.resize(col_run.size());

        std::vector<float> col_E; /* E column */
        dataset = H5Dopen(file, "/rec.energy.numu/E", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_E.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_E.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_angleE; /* angleE column */
        dataset = H5Dopen(file, "/rec.energy.numu/angleE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_angleE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_angleE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_angleerror; /* angleerror column */
        dataset = H5Dopen(file, "/rec.energy.numu/angleerror", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_angleerror.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_angleerror.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_calccE; /* calccE column */
        dataset = H5Dopen(file, "/rec.energy.numu/calccE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_calccE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_calccE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.energy.numu/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_hadcalE; /* hadcalE column */
        dataset = H5Dopen(file, "/rec.energy.numu/hadcalE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_hadcalE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_hadcalE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_hadtrkE; /* hadtrkE column */
        dataset = H5Dopen(file, "/rec.energy.numu/hadtrkE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_hadtrkE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_hadtrkE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ndhadcalactE; /* ndhadcalactE column */
        dataset = H5Dopen(file, "/rec.energy.numu/ndhadcalactE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndhadcalactE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndhadcalactE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ndhadcalcatE; /* ndhadcalcatE column */
        dataset = H5Dopen(file, "/rec.energy.numu/ndhadcalcatE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndhadcalcatE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndhadcalcatE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ndhadcaltranE; /* ndhadcaltranE column */
        dataset = H5Dopen(file, "/rec.energy.numu/ndhadcaltranE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndhadcaltranE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndhadcaltranE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ndhadtrkactE; /* ndhadtrkactE column */
        dataset = H5Dopen(file, "/rec.energy.numu/ndhadtrkactE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndhadtrkactE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndhadtrkactE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ndhadtrkcatE; /* ndhadtrkcatE column */
        dataset = H5Dopen(file, "/rec.energy.numu/ndhadtrkcatE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndhadtrkcatE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndhadtrkcatE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ndhadtrktranE; /* ndhadtrktranE column */
        dataset = H5Dopen(file, "/rec.energy.numu/ndhadtrktranE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndhadtrktranE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndhadtrktranE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ndtrkcalactE; /* ndtrkcalactE column */
        dataset = H5Dopen(file, "/rec.energy.numu/ndtrkcalactE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndtrkcalactE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndtrkcalactE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ndtrkcalcatE; /* ndtrkcalcatE column */
        dataset = H5Dopen(file, "/rec.energy.numu/ndtrkcalcatE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndtrkcalcatE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndtrkcalcatE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ndtrkcaltranE; /* ndtrkcaltranE column */
        dataset = H5Dopen(file, "/rec.energy.numu/ndtrkcaltranE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndtrkcaltranE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndtrkcaltranE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ndtrklenact; /* ndtrklenact column */
        dataset = H5Dopen(file, "/rec.energy.numu/ndtrklenact", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndtrklenact.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndtrklenact.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ndtrklencat; /* ndtrklencat column */
        dataset = H5Dopen(file, "/rec.energy.numu/ndtrklencat", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndtrklencat.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndtrklencat.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ndtrktranx; /* ndtrktranx column */
        dataset = H5Dopen(file, "/rec.energy.numu/ndtrktranx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndtrktranx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndtrktranx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ndtrktrany; /* ndtrktrany column */
        dataset = H5Dopen(file, "/rec.energy.numu/ndtrktrany", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ndtrktrany.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ndtrktrany.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_recomuonE; /* recomuonE column */
        dataset = H5Dopen(file, "/rec.energy.numu/recomuonE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_recomuonE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_recomuonE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_recotrkcchadE; /* recotrkcchadE column */
        dataset = H5Dopen(file, "/rec.energy.numu/recotrkcchadE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_recotrkcchadE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_recotrkcchadE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_shiftedtrkccE; /* shiftedtrkccE column */
        dataset = H5Dopen(file, "/rec.energy.numu/shiftedtrkccE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_shiftedtrkccE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_shiftedtrkccE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_trkccE; /* trkccE column */
        dataset = H5Dopen(file, "/rec.energy.numu/trkccE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkccE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkccE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_trknonqeE; /* trknonqeE column */
        dataset = H5Dopen(file, "/rec.energy.numu/trknonqeE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trknonqeE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trknonqeE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_trkqeE; /* trkqeE column */
        dataset = H5Dopen(file, "/rec.energy.numu/trkqeE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_trkqeE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_trkqeE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ucrecomuonE; /* ucrecomuonE column */
        dataset = H5Dopen(file, "/rec.energy.numu/ucrecomuonE", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ucrecomuonE.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ucrecomuonE.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_ucrecomuonE1trk; /* ucrecomuonE1trk column */
        dataset = H5Dopen(file, "/rec.energy.numu/ucrecomuonE1trk", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ucrecomuonE1trk.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ucrecomuonE1trk.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.energy.numu/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            content[i].E = col_E[i];
            content[i].angleE = col_angleE[i];
            content[i].angleerror = col_angleerror[i];
            content[i].calccE = col_calccE[i];
            content[i].cycle = col_cycle[i];
            content[i].hadcalE = col_hadcalE[i];
            content[i].hadtrkE = col_hadtrkE[i];
            content[i].ndhadcalactE = col_ndhadcalactE[i];
            content[i].ndhadcalcatE = col_ndhadcalcatE[i];
            content[i].ndhadcaltranE = col_ndhadcaltranE[i];
            content[i].ndhadtrkactE = col_ndhadtrkactE[i];
            content[i].ndhadtrkcatE = col_ndhadtrkcatE[i];
            content[i].ndhadtrktranE = col_ndhadtrktranE[i];
            content[i].ndtrkcalactE = col_ndtrkcalactE[i];
            content[i].ndtrkcalcatE = col_ndtrkcalcatE[i];
            content[i].ndtrkcaltranE = col_ndtrkcaltranE[i];
            content[i].ndtrklenact = col_ndtrklenact[i];
            content[i].ndtrklencat = col_ndtrklencat[i];
            content[i].ndtrktranx = col_ndtrktranx[i];
            content[i].ndtrktrany = col_ndtrktrany[i];
            content[i].recomuonE = col_recomuonE[i];
            content[i].recotrkcchadE = col_recotrkcchadE[i];
            content[i].shiftedtrkccE = col_shiftedtrkccE[i];
            content[i].trkccE = col_trkccE[i];
            content[i].trknonqeE = col_trknonqeE[i];
            content[i].trkqeE = col_trkqeE[i];
            content[i].ucrecomuonE = col_ucrecomuonE[i];
            content[i].ucrecomuonE1trk = col_ucrecomuonE1trk[i];
            content[i].subevt = col_subevt[i];
            
        }

        return { col_run, col_subrun, col_evt, content };
    }

    static std::tuple<
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<rec_energy_numu>
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
        dataset = H5Dopen(file, "/rec.energy.numu/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        runs.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(runs.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        dataset = H5Dopen(file, "/rec.energy.numu/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        subruns.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(subruns.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        dataset = H5Dopen(file, "/rec.energy.numu/evt", H5P_DEFAULT);
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