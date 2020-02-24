/*
 * (C) 2019 The University of Chicago
 * 
 * See COPYRIGHT in top-level directory.
 */
#ifndef __REC_HDR_HPP_
#define __REC_HDR_HPP_

#include <string>
#include <vector>
#include <cstdint>
#include <hdf5.h>

namespace hep {

/**
 * Auto-generated rec_hdr structure for the 
 * "/rec.hdr" table in corresponding HDF5 files.
 */
struct rec_hdr {
  std::int32_t run; /* run column */ // this was added by hand
  std::int32_t subrun; /* subrun column */ // this was added by hand
    std::int32_t batch; /* batch column */
    std::int32_t cycle; /* cycle column */
    std::uint32_t nbadchan; /* nbadchan column */
    std::uint32_t ntotchan; /* ntotchan column */
    float subevtendtime; /* subevtendtime column */
    float subevtmeantime; /* subevtmeantime column */
    float subevtstarttime; /* subevtstarttime column */
    float unixtime; /* unixtime column */
    std::uint16_t blind; /* blind column */
    std::uint16_t day; /* day column */
    std::uint16_t det; /* det column */
    std::uint16_t dibfirst; /* dibfirst column */
    std::uint16_t diblast; /* diblast column */
    std::uint16_t dibmask; /* dibmask column */
    std::uint16_t doy; /* doy column */
    std::uint16_t filt; /* filt column */
    std::uint16_t finetiming; /* finetiming column */
    std::uint16_t gain; /* gain column */
    std::uint16_t hour; /* hour column */
    std::uint16_t ismc; /* ismc column */
    std::uint16_t maskstatus; /* maskstatus column */
    std::uint16_t minute; /* minute column */
    std::uint16_t month; /* month column */
    std::uint16_t second; /* second column */
    std::uint16_t subevt; /* subevt column */
    std::uint16_t year; /* year column */
    
    /**
     * Serialization function for Boost
     * @tparam A Archive type
     * @param ar Archive (input or output)
     */
    template<typename A>
    void serialize(A& ar, const unsigned int version) {
      ar & run; // this was added by hand
      ar & subrun; // this was added by hand
        ar & batch;
        ar & cycle;
        ar & nbadchan;
        ar & ntotchan;
        ar & subevtendtime;
        ar & subevtmeantime;
        ar & subevtstarttime;
        ar & unixtime;
        ar & blind;
        ar & day;
        ar & det;
        ar & dibfirst;
        ar & diblast;
        ar & dibmask;
        ar & doy;
        ar & filt;
        ar & finetiming;
        ar & gain;
        ar & hour;
        ar & ismc;
        ar & maskstatus;
        ar & minute;
        ar & month;
        ar & second;
        ar & subevt;
        ar & year;
        
    }

    /**
     * Extract objects of this type from an HDF5 file
     * and call the callback on each object. The callback
     * must have the following signature:
     *    (?) f(uint64_t run, uint64_t subrun, uint64_t event, const rec_hdr& value)
     *
     * @tparam F type of callback
     * @param file HDF5 from which to extract the objects
     * @param callback callback to call on each object
     */
    template<typename F>
    static void from_hdf5(hid_t file, F&& callback) {
        rec_hdr current;
        hid_t dataset;
        hid_t dataspace;
        hsize_t dims[2];
        herr_t err;
        int ndims;

        std::vector<std::int32_t> col_batch; /* batch column */
        dataset = H5Dopen(file, "/rec.hdr/batch", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_batch.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_batch.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::int32_t> col_cycle; /* cycle column */
        dataset = H5Dopen(file, "/rec.hdr/cycle", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_cycle.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_INT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_cycle.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_nbadchan; /* nbadchan column */
        dataset = H5Dopen(file, "/rec.hdr/nbadchan", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_nbadchan.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_nbadchan.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint32_t> col_ntotchan; /* ntotchan column */
        dataset = H5Dopen(file, "/rec.hdr/ntotchan", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ntotchan.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT32, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ntotchan.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_subevtendtime; /* subevtendtime column */
        dataset = H5Dopen(file, "/rec.hdr/subevtendtime", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevtendtime.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevtendtime.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_subevtmeantime; /* subevtmeantime column */
        dataset = H5Dopen(file, "/rec.hdr/subevtmeantime", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevtmeantime.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevtmeantime.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_subevtstarttime; /* subevtstarttime column */
        dataset = H5Dopen(file, "/rec.hdr/subevtstarttime", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevtstarttime.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevtstarttime.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<float> col_unixtime; /* unixtime column */
        dataset = H5Dopen(file, "/rec.hdr/unixtime", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_unixtime.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_unixtime.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_blind; /* blind column */
        dataset = H5Dopen(file, "/rec.hdr/blind", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_blind.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_blind.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_day; /* day column */
        dataset = H5Dopen(file, "/rec.hdr/day", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_day.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_day.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_det; /* det column */
        dataset = H5Dopen(file, "/rec.hdr/det", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_det.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_det.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_dibfirst; /* dibfirst column */
        dataset = H5Dopen(file, "/rec.hdr/dibfirst", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dibfirst.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dibfirst.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_diblast; /* diblast column */
        dataset = H5Dopen(file, "/rec.hdr/diblast", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_diblast.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_diblast.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_dibmask; /* dibmask column */
        dataset = H5Dopen(file, "/rec.hdr/dibmask", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_dibmask.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_dibmask.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_doy; /* doy column */
        dataset = H5Dopen(file, "/rec.hdr/doy", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_doy.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_doy.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_filt; /* filt column */
        dataset = H5Dopen(file, "/rec.hdr/filt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_filt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_filt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_finetiming; /* finetiming column */
        dataset = H5Dopen(file, "/rec.hdr/finetiming", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_finetiming.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_finetiming.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_gain; /* gain column */
        dataset = H5Dopen(file, "/rec.hdr/gain", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_gain.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_gain.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_hour; /* hour column */
        dataset = H5Dopen(file, "/rec.hdr/hour", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_hour.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_hour.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_ismc; /* ismc column */
        dataset = H5Dopen(file, "/rec.hdr/ismc", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_ismc.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_ismc.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_maskstatus; /* maskstatus column */
        dataset = H5Dopen(file, "/rec.hdr/maskstatus", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_maskstatus.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_maskstatus.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_minute; /* minute column */
        dataset = H5Dopen(file, "/rec.hdr/minute", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_minute.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_minute.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_month; /* month column */
        dataset = H5Dopen(file, "/rec.hdr/month", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_month.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_month.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_second; /* second column */
        dataset = H5Dopen(file, "/rec.hdr/second", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_second.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_second.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_subevt; /* subevt column */
        dataset = H5Dopen(file, "/rec.hdr/subevt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subevt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subevt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        std::vector<std::uint16_t> col_year; /* year column */
        dataset = H5Dopen(file, "/rec.hdr/year", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_year.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT16, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_year.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        

        /* column for run indices */
        std::vector<unsigned> col_run;
        dataset = H5Dopen(file, "/rec.hdr/run", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_run.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_run.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for subrun indices */
        std::vector<unsigned> col_subrun;
        dataset = H5Dopen(file, "/rec.hdr/subrun", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_subrun.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_subrun.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);
        /* column for event indices */
        std::vector<unsigned> col_evt;
        dataset = H5Dopen(file, "/rec.hdr/evt", H5P_DEFAULT);
        dataspace = H5Dget_space(dataset);
        ndims = H5Sget_simple_extent_dims(dataspace, dims, NULL);
        col_evt.resize(dims[0]);
        err = H5Dread(dataset, H5T_NATIVE_UINT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
                static_cast<void*>(col_evt.data()));
        H5Sclose(dataspace);
        H5Dclose(dataset);

        for(uint64_t i = 0; i < dims[0]; i++) {
	  current.run = col_run[i]; // this was added by hand
	  current.subrun = col_subrun[i]; // this was added by hand
            current.batch = col_batch[i];
            current.cycle = col_cycle[i];
            current.nbadchan = col_nbadchan[i];
            current.ntotchan = col_ntotchan[i];
            current.subevtendtime = col_subevtendtime[i];
            current.subevtmeantime = col_subevtmeantime[i];
            current.subevtstarttime = col_subevtstarttime[i];
            current.unixtime = col_unixtime[i];
            current.blind = col_blind[i];
            current.day = col_day[i];
            current.det = col_det[i];
            current.dibfirst = col_dibfirst[i];
            current.diblast = col_diblast[i];
            current.dibmask = col_dibmask[i];
            current.doy = col_doy[i];
            current.filt = col_filt[i];
            current.finetiming = col_finetiming[i];
            current.gain = col_gain[i];
            current.hour = col_hour[i];
            current.ismc = col_ismc[i];
            current.maskstatus = col_maskstatus[i];
            current.minute = col_minute[i];
            current.month = col_month[i];
            current.second = col_second[i];
            current.subevt = col_subevt[i];
            current.year = col_year[i];
            
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
