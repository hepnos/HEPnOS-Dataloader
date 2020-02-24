/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_VTX_ELASTIC_FUZZYK_PNG_CVNPART2GENIELIKEBAL_HPP_
#define __REC_VTX_ELASTIC_FUZZYK_PNG_CVNPART2GENIELIKEBAL_HPP_

#include <tuple>
#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_vtx_elastic_fuzzyk_png_cvnpart2GenieLikeBal structure for the 
 * "/rec.vtx.elastic.fuzzyk.png.cvnpart2GenieLikeBal" table in corresponding HDF5 files.
 */
struct rec_vtx_elastic_fuzzyk_png_cvnpart2GenieLikeBal {

    std::int32_t cycle; /* cycle column */
    float electronid; /* electronid column */
    float maxval; /* maxval column */
    float muonid; /* muonid column */
    float neutronid; /* neutronid column */
    float otherid; /* otherid column */
    std::uint32_t pdgmax; /* pdgmax column */
    float photonid; /* photonid column */
    float pionid; /* pionid column */
    float pizeroid; /* pizeroid column */
    float protonid; /* protonid column */
    std::uint32_t rec_vtx_elastic_fuzzyk_png_idx; /* rec.vtx.elastic.fuzzyk.png_idx column */
    std::uint32_t rec_vtx_elastic_idx; /* rec.vtx.elastic_idx column */
    std::uint16_t subevt; /* subevt column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & cycle;
        ar & electronid;
        ar & maxval;
        ar & muonid;
        ar & neutronid;
        ar & otherid;
        ar & pdgmax;
        ar & photonid;
        ar & pionid;
        ar & pizeroid;
        ar & protonid;
        ar & rec_vtx_elastic_fuzzyk_png_idx;
        ar & rec_vtx_elastic_idx;
        ar & subevt;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_vtx_elastic_fuzzyk_png_cvnpart2GenieLikeBal& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_vtx_elastic_fuzzyk_png_cvnpart2GenieLikeBal current;
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
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.cvnpart2GenieLikeBal/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_electronid; /* electronid column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.cvnpart2GenieLikeBal/electronid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_electronid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_electronid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_maxval; /* maxval column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.cvnpart2GenieLikeBal/maxval", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_maxval.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_maxval.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_muonid; /* muonid column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.cvnpart2GenieLikeBal/muonid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muonid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muonid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_neutronid; /* neutronid column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.cvnpart2GenieLikeBal/neutronid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_neutronid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_neutronid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_otherid; /* otherid column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.cvnpart2GenieLikeBal/otherid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_otherid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_otherid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_pdgmax; /* pdgmax column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.cvnpart2GenieLikeBal/pdgmax", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pdgmax.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pdgmax.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_photonid; /* photonid column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.cvnpart2GenieLikeBal/photonid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_photonid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_photonid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pionid; /* pionid column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.cvnpart2GenieLikeBal/pionid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pionid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pionid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pizeroid; /* pizeroid column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.cvnpart2GenieLikeBal/pizeroid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pizeroid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pizeroid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_protonid; /* protonid column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.cvnpart2GenieLikeBal/protonid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_protonid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_protonid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_vtx_elastic_fuzzyk_png_idx; /* rec.vtx.elastic.fuzzyk.png_idx column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.cvnpart2GenieLikeBal/rec.vtx.elastic.fuzzyk.png_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_vtx_elastic_fuzzyk_png_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_vtx_elastic_fuzzyk_png_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_vtx_elastic_idx; /* rec.vtx.elastic_idx column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.cvnpart2GenieLikeBal/rec.vtx.elastic_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_vtx_elastic_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_vtx_elastic_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.cvnpart2GenieLikeBal/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.cycle = col_cycle[i];
            current.electronid = col_electronid[i];
            current.maxval = col_maxval[i];
            current.muonid = col_muonid[i];
            current.neutronid = col_neutronid[i];
            current.otherid = col_otherid[i];
            current.pdgmax = col_pdgmax[i];
            current.photonid = col_photonid[i];
            current.pionid = col_pionid[i];
            current.pizeroid = col_pizeroid[i];
            current.protonid = col_protonid[i];
            current.rec_vtx_elastic_fuzzyk_png_idx = col_rec_vtx_elastic_fuzzyk_png_idx[i];
            current.rec_vtx_elastic_idx = col_rec_vtx_elastic_idx[i];
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
            std::vector<rec_vtx_elastic_fuzzyk_png_cvnpart2GenieLikeBal>
           > from_hdf5(hid_t file) {
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;
        std::vector<rec_vtx_elastic_fuzzyk_png_cvnpart2GenieLikeBal> content;
        std::vector<unsigned> col_run;
        std::vector<unsigned> col_subrun;
        std::vector<unsigned> col_evt;

        _read_indices(file, col_run, col_subrun, col_evt);

        content.resize(col_run.size());

        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.cvnpart2GenieLikeBal/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_electronid; /* electronid column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.cvnpart2GenieLikeBal/electronid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_electronid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_electronid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_maxval; /* maxval column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.cvnpart2GenieLikeBal/maxval", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_maxval.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_maxval.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_muonid; /* muonid column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.cvnpart2GenieLikeBal/muonid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_muonid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_muonid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_neutronid; /* neutronid column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.cvnpart2GenieLikeBal/neutronid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_neutronid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_neutronid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_otherid; /* otherid column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.cvnpart2GenieLikeBal/otherid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_otherid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_otherid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_pdgmax; /* pdgmax column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.cvnpart2GenieLikeBal/pdgmax", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pdgmax.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pdgmax.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_photonid; /* photonid column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.cvnpart2GenieLikeBal/photonid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_photonid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_photonid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pionid; /* pionid column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.cvnpart2GenieLikeBal/pionid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pionid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pionid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_pizeroid; /* pizeroid column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.cvnpart2GenieLikeBal/pizeroid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_pizeroid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_pizeroid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_protonid; /* protonid column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.cvnpart2GenieLikeBal/protonid", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_protonid.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_protonid.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_vtx_elastic_fuzzyk_png_idx; /* rec.vtx.elastic.fuzzyk.png_idx column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.cvnpart2GenieLikeBal/rec.vtx.elastic.fuzzyk.png_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_vtx_elastic_fuzzyk_png_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_vtx_elastic_fuzzyk_png_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_rec_vtx_elastic_idx; /* rec.vtx.elastic_idx column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.cvnpart2GenieLikeBal/rec.vtx.elastic_idx", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_rec_vtx_elastic_idx.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_rec_vtx_elastic_idx.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.cvnpart2GenieLikeBal/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        for(uint64_t i = 0; i < dims[0]; i++) {
            content[i].cycle = col_cycle[i];
            content[i].electronid = col_electronid[i];
            content[i].maxval = col_maxval[i];
            content[i].muonid = col_muonid[i];
            content[i].neutronid = col_neutronid[i];
            content[i].otherid = col_otherid[i];
            content[i].pdgmax = col_pdgmax[i];
            content[i].photonid = col_photonid[i];
            content[i].pionid = col_pionid[i];
            content[i].pizeroid = col_pizeroid[i];
            content[i].protonid = col_protonid[i];
            content[i].rec_vtx_elastic_fuzzyk_png_idx = col_rec_vtx_elastic_fuzzyk_png_idx[i];
            content[i].rec_vtx_elastic_idx = col_rec_vtx_elastic_idx[i];
            content[i].subevt = col_subevt[i];
            
        }

        return { col_run, col_subrun, col_evt, content };
    }

    static std::tuple<
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<unsigned>,
            std::vector<rec_vtx_elastic_fuzzyk_png_cvnpart2GenieLikeBal>
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
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.cvnpart2GenieLikeBal/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        runs.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(runs.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.cvnpart2GenieLikeBal/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        subruns.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(subruns.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        dataset = H5Dopen(file, "/rec.vtx.elastic.fuzzyk.png.cvnpart2GenieLikeBal/evt", H5P_DEFAULT);
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