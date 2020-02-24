/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_TRAINING_CVNMAP_HPP_
#define __REC_TRAINING_CVNMAP_HPP_

#include <string>
#include <vector>
#include <cstdint>
#include <H5Cpp.h>

namespace hep {

/**
 * Auto-generated rec_training_cvnmap structure for the 
 * "/rec.training.cvnmap" table in corresponding HDF5 files.
 */
struct rec_training_cvnmap {

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
    std::uint16_t subevt; /* subevt column */
    std::uint8_t values; /* values column */
    
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
        ar & subevt;
        ar & values;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_training_cvnmap& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(H5::H5File& file, F&& callback) {
        rec_training_cvnmap current;
        H5::DataSet dataset;
        H5::DataSpace dataspace;
        hsize_t dims[2];
        int ndims;

        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = file.openDataSet("/rec.training.cvnmap/cycle");
        dataspace = dataset.getSpace();
        ndims = dataspace.getSimpleExtentDims(dims, NULL);
        col_cycle.resize(dims[0]);
        dataset.read(static_cast<void*>(col_cycle.data()), H5::PredType::NATIVE_INT32);
        std::vector<std::uint32_t> col_firstcellx; /* firstcellx column */
        dataset = file.openDataSet("/rec.training.cvnmap/firstcellx");
        dataspace = dataset.getSpace();
        ndims = dataspace.getSimpleExtentDims(dims, NULL);
        col_firstcellx.resize(dims[0]);
        dataset.read(static_cast<void*>(col_firstcellx.data()), H5::PredType::NATIVE_UINT32);
        std::vector<std::uint32_t> col_firstcelly; /* firstcelly column */
        dataset = file.openDataSet("/rec.training.cvnmap/firstcelly");
        dataspace = dataset.getSpace();
        ndims = dataspace.getSimpleExtentDims(dims, NULL);
        col_firstcelly.resize(dims[0]);
        dataset.read(static_cast<void*>(col_firstcelly.data()), H5::PredType::NATIVE_UINT32);
        std::vector<std::uint32_t> col_firstplane; /* firstplane column */
        dataset = file.openDataSet("/rec.training.cvnmap/firstplane");
        dataspace = dataset.getSpace();
        ndims = dataspace.getSimpleExtentDims(dims, NULL);
        col_firstplane.resize(dims[0]);
        dataset.read(static_cast<void*>(col_firstplane.data()), H5::PredType::NATIVE_UINT32);
        std::vector<float> col_hitfracx; /* hitfracx column */
        dataset = file.openDataSet("/rec.training.cvnmap/hitfracx");
        dataspace = dataset.getSpace();
        ndims = dataspace.getSimpleExtentDims(dims, NULL);
        col_hitfracx.resize(dims[0]);
        dataset.read(static_cast<void*>(col_hitfracx.data()), H5::PredType::NATIVE_FLOAT);
        std::vector<float> col_hitfracy; /* hitfracy column */
        dataset = file.openDataSet("/rec.training.cvnmap/hitfracy");
        dataspace = dataset.getSpace();
        ndims = dataspace.getSimpleExtentDims(dims, NULL);
        col_hitfracy.resize(dims[0]);
        dataset.read(static_cast<void*>(col_hitfracy.data()), H5::PredType::NATIVE_FLOAT);
        std::vector<std::uint32_t> col_lastcellx; /* lastcellx column */
        dataset = file.openDataSet("/rec.training.cvnmap/lastcellx");
        dataspace = dataset.getSpace();
        ndims = dataspace.getSimpleExtentDims(dims, NULL);
        col_lastcellx.resize(dims[0]);
        dataset.read(static_cast<void*>(col_lastcellx.data()), H5::PredType::NATIVE_UINT32);
        std::vector<std::uint32_t> col_lastcelly; /* lastcelly column */
        dataset = file.openDataSet("/rec.training.cvnmap/lastcelly");
        dataspace = dataset.getSpace();
        ndims = dataspace.getSimpleExtentDims(dims, NULL);
        col_lastcelly.resize(dims[0]);
        dataset.read(static_cast<void*>(col_lastcelly.data()), H5::PredType::NATIVE_UINT32);
        std::vector<std::uint32_t> col_lastplane; /* lastplane column */
        dataset = file.openDataSet("/rec.training.cvnmap/lastplane");
        dataspace = dataset.getSpace();
        ndims = dataspace.getSimpleExtentDims(dims, NULL);
        col_lastplane.resize(dims[0]);
        dataset.read(static_cast<void*>(col_lastplane.data()), H5::PredType::NATIVE_UINT32);
        std::vector<std::uint32_t> col_ncells; /* ncells column */
        dataset = file.openDataSet("/rec.training.cvnmap/ncells");
        dataspace = dataset.getSpace();
        ndims = dataspace.getSimpleExtentDims(dims, NULL);
        col_ncells.resize(dims[0]);
        dataset.read(static_cast<void*>(col_ncells.data()), H5::PredType::NATIVE_UINT32);
        std::vector<std::uint32_t> col_nchan; /* nchan column */
        dataset = file.openDataSet("/rec.training.cvnmap/nchan");
        dataspace = dataset.getSpace();
        ndims = dataspace.getSimpleExtentDims(dims, NULL);
        col_nchan.resize(dims[0]);
        dataset.read(static_cast<void*>(col_nchan.data()), H5::PredType::NATIVE_UINT32);
        std::vector<std::uint32_t> col_nplanes; /* nplanes column */
        dataset = file.openDataSet("/rec.training.cvnmap/nplanes");
        dataspace = dataset.getSpace();
        ndims = dataspace.getSimpleExtentDims(dims, NULL);
        col_nplanes.resize(dims[0]);
        dataset.read(static_cast<void*>(col_nplanes.data()), H5::PredType::NATIVE_UINT32);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = file.openDataSet("/rec.training.cvnmap/subevt");
        dataspace = dataset.getSpace();
        ndims = dataspace.getSimpleExtentDims(dims, NULL);
        col_subevt.resize(dims[0]);
        dataset.read(static_cast<void*>(col_subevt.data()), H5::PredType::NATIVE_UINT16);
        std::vector<std::uint8_t> col_values; /* values column */
        dataset = file.openDataSet("/rec.training.cvnmap/values");
        dataspace = dataset.getSpace();
        ndims = dataspace.getSimpleExtentDims(dims, NULL);
        col_values.resize(dims[0]);
        dataset.read(static_cast<void*>(col_values.data()), H5::PredType::NATIVE_UINT8);
        

        /* column for run indices */
        std::vector<unsigned> col_run;
        dataset = file.openDataSet("/rec.training.cvnmap/run");
        dataspace = dataset.getSpace();
        ndims = dataspace.getSimpleExtentDims(dims, NULL);
        col_run.resize(dims[0]);
        dataset.read(static_cast<void*>(col_run.data()), H5::PredType::NATIVE_UINT);
        /* column for subrun indices */
        std::vector<unsigned> col_subrun;
        dataset = file.openDataSet("/rec.training.cvnmap/subrun");
        dataspace = dataset.getSpace();
        ndims = dataspace.getSimpleExtentDims(dims, NULL);
        col_subrun.resize(dims[0]);
        dataset.read(static_cast<void*>(col_subrun.data()), H5::PredType::NATIVE_UINT);
        /* column for event indices */
        std::vector<unsigned> col_evt;
        dataset = file.openDataSet("/rec.training.cvnmap/evt");
        dataspace = dataset.getSpace();
        ndims = dataspace.getSimpleExtentDims(dims, NULL);
        col_evt.resize(dims[0]);
        dataset.read(static_cast<void*>(col_evt.data()), H5::PredType::NATIVE_UINT);

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
            current.subevt = col_subevt[i];
            current.values = col_values[i];
            
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