/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_TRAINING_HPP_
#define __REC_TRAINING_HPP_

#include <string>
#include <vector>
#include <cstdint>
#include <H5Cpp.h>

namespace hep {

/**
 * Auto-generated rec_training structure for the 
 * "/rec.training" table in corresponding HDF5 files.
 */
struct rec_training {

    std::int32_t cycle; /* cycle column */
    std::uint16_t subevt; /* subevt column */
    std::uint8_t slicemap; /* slicemap column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {

        ar & cycle;
        ar & subevt;
        ar & slicemap;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_training& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(H5::H5File& file, F&& callback) {
        rec_training current;
        H5::DataSet dataset;
        H5::DataSpace dataspace;
        hsize_t dims[2];
        int ndims;

        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = file.openDataSet("/rec.training/cycle");
        dataspace = dataset.getSpace();
        ndims = dataspace.getSimpleExtentDims(dims, NULL);
        col_cycle.resize(dims[0]);
        dataset.read(static_cast<void*>(col_cycle.data()), H5::PredType::NATIVE_INT32);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = file.openDataSet("/rec.training/subevt");
        dataspace = dataset.getSpace();
        ndims = dataspace.getSimpleExtentDims(dims, NULL);
        col_subevt.resize(dims[0]);
        dataset.read(static_cast<void*>(col_subevt.data()), H5::PredType::NATIVE_UINT16);
        std::vector<std::uint8_t> col_slicemap; /* slicemap column */
        dataset = file.openDataSet("/rec.training/slicemap");
        dataspace = dataset.getSpace();
        ndims = dataspace.getSimpleExtentDims(dims, NULL);
        col_slicemap.resize(dims[0]);
        dataset.read(static_cast<void*>(col_slicemap.data()), H5::PredType::NATIVE_UINT8);
        

        /* column for run indices */
        std::vector<unsigned> col_run;
        dataset = file.openDataSet("/rec.training/run");
        dataspace = dataset.getSpace();
        ndims = dataspace.getSimpleExtentDims(dims, NULL);
        col_run.resize(dims[0]);
        dataset.read(static_cast<void*>(col_run.data()), H5::PredType::NATIVE_UINT);
        /* column for subrun indices */
        std::vector<unsigned> col_subrun;
        dataset = file.openDataSet("/rec.training/subrun");
        dataspace = dataset.getSpace();
        ndims = dataspace.getSimpleExtentDims(dims, NULL);
        col_subrun.resize(dims[0]);
        dataset.read(static_cast<void*>(col_subrun.data()), H5::PredType::NATIVE_UINT);
        /* column for event indices */
        std::vector<unsigned> col_evt;
        dataset = file.openDataSet("/rec.training/evt");
        dataspace = dataset.getSpace();
        ndims = dataspace.getSimpleExtentDims(dims, NULL);
        col_evt.resize(dims[0]);
        dataset.read(static_cast<void*>(col_evt.data()), H5::PredType::NATIVE_UINT);

        for(uint64_t i = 0; i < dims[0]; i++) {
            current.cycle = col_cycle[i];
            current.subevt = col_subevt[i];
            current.slicemap = col_slicemap[i];
            
            callback(col_run[i], col_subrun[i], col_evt[i], current);
        }
    }

    template<typename F>
    static void from_hdf5(const std::string& filename, F&& callback) {
        H5::H5File file(filename, H5F_ACC_RDONLY);
        from_hdf5(file, std::forward<F>(callback));
    }
};

}
#endif