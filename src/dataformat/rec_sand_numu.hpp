/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_SAND_NUMU_HPP_
#define __REC_SAND_NUMU_HPP_

#include <tuple>
#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_sand_numu structure for the 
 * "/rec.sand.numu" table in corresponding HDF5 files.
 */
struct rec_sand_numu {

    float actVtx; /* actVtx column */
    float avedEdxtrk1; /* avedEdxtrk1 column */
    float avedEdxtrk1Last4Cells; /* avedEdxtrk1Last4Cells column */
    float avedEdxtrk1Last6Cells; /* avedEdxtrk1Last6Cells column */
    float avedEdxtrk1Last8Cells; /* avedEdxtrk1Last8Cells column */
    float avedEdxtrk2; /* avedEdxtrk2 column */
    float avedEdxtrk2Last4Cells; /* avedEdxtrk2Last4Cells column */
    float avedEdxtrk2Last6Cells; /* avedEdxtrk2Last6Cells column */
    float avedEdxtrk2Last8Cells; /* avedEdxtrk2Last8Cells column */
    std::int32_t cycle; /* cycle column */
    std::int32_t nhadCellsFromEdge; /* nhadCellsFromEdge column */
    std::int32_t nhadHits; /* nhadHits column */
    std::int32_t nmutrks; /* nmutrks column */
    std::int32_t nprotons; /* nprotons column */
    float offTrkFra; /* offTrkFra column */
    std::int32_t pimudecay; /* pimudecay column */
    float scattAngtrk1; /* scattAngtrk1 column */
    float scattAngtrk2; /* scattAngtrk2 column */
    float vtxE20; /* vtxE20 column */
    float vtxE40; /* vtxE40 column */
    float vtxE60; /* vtxE60 column */
    std::uint16_t subevt; /* subevt column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & actVtx;
        ar & avedEdxtrk1;
        ar & avedEdxtrk1Last4Cells;
        ar & avedEdxtrk1Last6Cells;
        ar & avedEdxtrk1Last8Cells;
        ar & avedEdxtrk2;
        ar & avedEdxtrk2Last4Cells;
        ar & avedEdxtrk2Last6Cells;
        ar & avedEdxtrk2Last8Cells;
        ar & cycle;
        ar & nhadCellsFromEdge;
        ar & nhadHits;
        ar & nmutrks;
        ar & nprotons;
        ar & offTrkFra;
        ar & pimudecay;
        ar & scattAngtrk1;
        ar & scattAngtrk2;
        ar & vtxE20;
        ar & vtxE40;
        ar & vtxE60;
        ar & subevt;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_sand_numu& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_sand_numu current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;
        _read_indices(file, col_run, col_subrun, col_evt);

        std::vector<float> col_actVtx; /* actVtx column */
        dataset = H5Dopen(file, "/rec.sand.numu/actVtx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_actVtx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_actVtx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_avedEdxtrk1; /* avedEdxtrk1 column */
        dataset = H5Dopen(file, "/rec.sand.numu/avedEdxtrk1", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_avedEdxtrk1.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_avedEdxtrk1.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_avedEdxtrk1Last4Cells; /* avedEdxtrk1Last4Cells column */
        dataset = H5Dopen(file, "/rec.sand.numu/avedEdxtrk1Last4Cells", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_avedEdxtrk1Last4Cells.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_avedEdxtrk1Last4Cells.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_avedEdxtrk1Last6Cells; /* avedEdxtrk1Last6Cells column */
        dataset = H5Dopen(file, "/rec.sand.numu/avedEdxtrk1Last6Cells", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_avedEdxtrk1Last6Cells.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_avedEdxtrk1Last6Cells.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_avedEdxtrk1Last8Cells; /* avedEdxtrk1Last8Cells column */
        dataset = H5Dopen(file, "/rec.sand.numu/avedEdxtrk1Last8Cells", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_avedEdxtrk1Last8Cells.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_avedEdxtrk1Last8Cells.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_avedEdxtrk2; /* avedEdxtrk2 column */
        dataset = H5Dopen(file, "/rec.sand.numu/avedEdxtrk2", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_avedEdxtrk2.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_avedEdxtrk2.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_avedEdxtrk2Last4Cells; /* avedEdxtrk2Last4Cells column */
        dataset = H5Dopen(file, "/rec.sand.numu/avedEdxtrk2Last4Cells", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_avedEdxtrk2Last4Cells.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_avedEdxtrk2Last4Cells.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_avedEdxtrk2Last6Cells; /* avedEdxtrk2Last6Cells column */
        dataset = H5Dopen(file, "/rec.sand.numu/avedEdxtrk2Last6Cells", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_avedEdxtrk2Last6Cells.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_avedEdxtrk2Last6Cells.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_avedEdxtrk2Last8Cells; /* avedEdxtrk2Last8Cells column */
        dataset = H5Dopen(file, "/rec.sand.numu/avedEdxtrk2Last8Cells", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_avedEdxtrk2Last8Cells.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_avedEdxtrk2Last8Cells.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.sand.numu/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nhadCellsFromEdge; /* nhadCellsFromEdge column */
        dataset = H5Dopen(file, "/rec.sand.numu/nhadCellsFromEdge", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nhadCellsFromEdge.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nhadCellsFromEdge.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nhadHits; /* nhadHits column */
        dataset = H5Dopen(file, "/rec.sand.numu/nhadHits", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nhadHits.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nhadHits.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nmutrks; /* nmutrks column */
        dataset = H5Dopen(file, "/rec.sand.numu/nmutrks", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nmutrks.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nmutrks.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nprotons; /* nprotons column */
        dataset = H5Dopen(file, "/rec.sand.numu/nprotons", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nprotons.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nprotons.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_offTrkFra; /* offTrkFra column */
        dataset = H5Dopen(file, "/rec.sand.numu/offTrkFra", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_offTrkFra.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_offTrkFra.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_pimudecay; /* pimudecay column */
        dataset = H5Dopen(file, "/rec.sand.numu/pimudecay", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pimudecay.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pimudecay.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_scattAngtrk1; /* scattAngtrk1 column */
        dataset = H5Dopen(file, "/rec.sand.numu/scattAngtrk1", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_scattAngtrk1.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_scattAngtrk1.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_scattAngtrk2; /* scattAngtrk2 column */
        dataset = H5Dopen(file, "/rec.sand.numu/scattAngtrk2", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_scattAngtrk2.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_scattAngtrk2.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_vtxE20; /* vtxE20 column */
        dataset = H5Dopen(file, "/rec.sand.numu/vtxE20", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_vtxE20.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_vtxE20.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_vtxE40; /* vtxE40 column */
        dataset = H5Dopen(file, "/rec.sand.numu/vtxE40", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_vtxE40.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_vtxE40.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_vtxE60; /* vtxE60 column */
        dataset = H5Dopen(file, "/rec.sand.numu/vtxE60", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_vtxE60.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_vtxE60.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.sand.numu/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.actVtx = col_actVtx[i];
            current.avedEdxtrk1 = col_avedEdxtrk1[i];
            current.avedEdxtrk1Last4Cells = col_avedEdxtrk1Last4Cells[i];
            current.avedEdxtrk1Last6Cells = col_avedEdxtrk1Last6Cells[i];
            current.avedEdxtrk1Last8Cells = col_avedEdxtrk1Last8Cells[i];
            current.avedEdxtrk2 = col_avedEdxtrk2[i];
            current.avedEdxtrk2Last4Cells = col_avedEdxtrk2Last4Cells[i];
            current.avedEdxtrk2Last6Cells = col_avedEdxtrk2Last6Cells[i];
            current.avedEdxtrk2Last8Cells = col_avedEdxtrk2Last8Cells[i];
            current.cycle = col_cycle[i];
            current.nhadCellsFromEdge = col_nhadCellsFromEdge[i];
            current.nhadHits = col_nhadHits[i];
            current.nmutrks = col_nmutrks[i];
            current.nprotons = col_nprotons[i];
            current.offTrkFra = col_offTrkFra[i];
            current.pimudecay = col_pimudecay[i];
            current.scattAngtrk1 = col_scattAngtrk1[i];
            current.scattAngtrk2 = col_scattAngtrk2[i];
            current.vtxE20 = col_vtxE20[i];
            current.vtxE40 = col_vtxE40[i];
            current.vtxE60 = col_vtxE60[i];
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
            std::vector<rec_sand_numu>
           > from_hdf5(hid_t file) {
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;
        std::vector<rec_sand_numu> content;
        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;

        _read_indices(file, col_run, col_subrun, col_evt);

        content.resize(col_run.size());

        std::vector<float> col_actVtx; /* actVtx column */
        dataset = H5Dopen(file, "/rec.sand.numu/actVtx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_actVtx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_actVtx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_avedEdxtrk1; /* avedEdxtrk1 column */
        dataset = H5Dopen(file, "/rec.sand.numu/avedEdxtrk1", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_avedEdxtrk1.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_avedEdxtrk1.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_avedEdxtrk1Last4Cells; /* avedEdxtrk1Last4Cells column */
        dataset = H5Dopen(file, "/rec.sand.numu/avedEdxtrk1Last4Cells", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_avedEdxtrk1Last4Cells.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_avedEdxtrk1Last4Cells.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_avedEdxtrk1Last6Cells; /* avedEdxtrk1Last6Cells column */
        dataset = H5Dopen(file, "/rec.sand.numu/avedEdxtrk1Last6Cells", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_avedEdxtrk1Last6Cells.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_avedEdxtrk1Last6Cells.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_avedEdxtrk1Last8Cells; /* avedEdxtrk1Last8Cells column */
        dataset = H5Dopen(file, "/rec.sand.numu/avedEdxtrk1Last8Cells", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_avedEdxtrk1Last8Cells.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_avedEdxtrk1Last8Cells.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_avedEdxtrk2; /* avedEdxtrk2 column */
        dataset = H5Dopen(file, "/rec.sand.numu/avedEdxtrk2", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_avedEdxtrk2.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_avedEdxtrk2.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_avedEdxtrk2Last4Cells; /* avedEdxtrk2Last4Cells column */
        dataset = H5Dopen(file, "/rec.sand.numu/avedEdxtrk2Last4Cells", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_avedEdxtrk2Last4Cells.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_avedEdxtrk2Last4Cells.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_avedEdxtrk2Last6Cells; /* avedEdxtrk2Last6Cells column */
        dataset = H5Dopen(file, "/rec.sand.numu/avedEdxtrk2Last6Cells", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_avedEdxtrk2Last6Cells.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_avedEdxtrk2Last6Cells.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_avedEdxtrk2Last8Cells; /* avedEdxtrk2Last8Cells column */
        dataset = H5Dopen(file, "/rec.sand.numu/avedEdxtrk2Last8Cells", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_avedEdxtrk2Last8Cells.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_avedEdxtrk2Last8Cells.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.sand.numu/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nhadCellsFromEdge; /* nhadCellsFromEdge column */
        dataset = H5Dopen(file, "/rec.sand.numu/nhadCellsFromEdge", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nhadCellsFromEdge.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nhadCellsFromEdge.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nhadHits; /* nhadHits column */
        dataset = H5Dopen(file, "/rec.sand.numu/nhadHits", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nhadHits.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nhadHits.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nmutrks; /* nmutrks column */
        dataset = H5Dopen(file, "/rec.sand.numu/nmutrks", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nmutrks.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nmutrks.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_nprotons; /* nprotons column */
        dataset = H5Dopen(file, "/rec.sand.numu/nprotons", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nprotons.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nprotons.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_offTrkFra; /* offTrkFra column */
        dataset = H5Dopen(file, "/rec.sand.numu/offTrkFra", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_offTrkFra.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_offTrkFra.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_pimudecay; /* pimudecay column */
        dataset = H5Dopen(file, "/rec.sand.numu/pimudecay", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pimudecay.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pimudecay.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_scattAngtrk1; /* scattAngtrk1 column */
        dataset = H5Dopen(file, "/rec.sand.numu/scattAngtrk1", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_scattAngtrk1.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_scattAngtrk1.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_scattAngtrk2; /* scattAngtrk2 column */
        dataset = H5Dopen(file, "/rec.sand.numu/scattAngtrk2", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_scattAngtrk2.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_scattAngtrk2.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_vtxE20; /* vtxE20 column */
        dataset = H5Dopen(file, "/rec.sand.numu/vtxE20", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_vtxE20.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_vtxE20.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_vtxE40; /* vtxE40 column */
        dataset = H5Dopen(file, "/rec.sand.numu/vtxE40", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_vtxE40.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_vtxE40.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_vtxE60; /* vtxE60 column */
        dataset = H5Dopen(file, "/rec.sand.numu/vtxE60", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_vtxE60.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_vtxE60.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.sand.numu/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            content[i].actVtx = col_actVtx[i];
            content[i].avedEdxtrk1 = col_avedEdxtrk1[i];
            content[i].avedEdxtrk1Last4Cells = col_avedEdxtrk1Last4Cells[i];
            content[i].avedEdxtrk1Last6Cells = col_avedEdxtrk1Last6Cells[i];
            content[i].avedEdxtrk1Last8Cells = col_avedEdxtrk1Last8Cells[i];
            content[i].avedEdxtrk2 = col_avedEdxtrk2[i];
            content[i].avedEdxtrk2Last4Cells = col_avedEdxtrk2Last4Cells[i];
            content[i].avedEdxtrk2Last6Cells = col_avedEdxtrk2Last6Cells[i];
            content[i].avedEdxtrk2Last8Cells = col_avedEdxtrk2Last8Cells[i];
            content[i].cycle = col_cycle[i];
            content[i].nhadCellsFromEdge = col_nhadCellsFromEdge[i];
            content[i].nhadHits = col_nhadHits[i];
            content[i].nmutrks = col_nmutrks[i];
            content[i].nprotons = col_nprotons[i];
            content[i].offTrkFra = col_offTrkFra[i];
            content[i].pimudecay = col_pimudecay[i];
            content[i].scattAngtrk1 = col_scattAngtrk1[i];
            content[i].scattAngtrk2 = col_scattAngtrk2[i];
            content[i].vtxE20 = col_vtxE20[i];
            content[i].vtxE40 = col_vtxE40[i];
            content[i].vtxE60 = col_vtxE60[i];
            content[i].subevt = col_subevt[i];
            
        }

        return { col_run, col_subrun, col_evt, content };
    }

    static std::tuple<
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<rec_sand_numu>
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
        dataset = H5Dopen(file, "/rec.sand.numu/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        runs.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(runs.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        dataset = H5Dopen(file, "/rec.sand.numu/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        subruns.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(subruns.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        dataset = H5Dopen(file, "/rec.sand.numu/evt", H5P_DEFAULT);
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