#ifndef DATA_LOADER_CONFIG_HPP
#define DATA_LOADER_CONFIG_HPP

#include <cstdint>
#include <istream>
#include <ostream>
#include <vector>

#include <diy/mpi.hpp>
#include <diy/serialization.hpp>
#include <hepnos/DataSet.hpp>

struct DataLoaderConfig {
  std::array<char, 128> filename;
  DataLoaderConfig() : filename{0} {}
  DataLoaderConfig(std::array<char, 128> s) : filename(s) {}
};

inline std::ostream&
operator<<(std::ostream& ost, DataLoaderConfig const& ec)
{
  ost << ec.filename.begin();
  return ost;
}

namespace diy {
  template <>
  struct Serialization<DataLoaderConfig> {
    static void
    save(diy::BinaryBuffer& bb, const DataLoaderConfig& d)
    {
      diy::save(bb, d.filename);
    }
    static void
    load(diy::BinaryBuffer& bb, DataLoaderConfig& d)
    {
      diy::load(bb, d.filename);
    }
  };

  namespace mpi {
    namespace detail {
      template <std::size_t N>
      struct mpi_datatype<std::array<char, N>> {
        static MPI_Datatype
        datatype()
        {
          return MPI_BYTE;
        }
        static const void*
        address(std::array<char, N> const& x)
        {
          return &x;
        }
        static void*
        address(std::array<char, N>& x)
        {
          return &x;
        }
        static int
        count(std::array<char, N> const&)
        {
          return sizeof(std::array<char, N>);
        }
      };
      template <>
      struct mpi_datatype<DataLoaderConfig> {
        static MPI_Datatype
        datatype()
        {
          return MPI_BYTE;
        }
        static const void*
        address(DataLoaderConfig const& x)
        {
          return &x;
        }
        static void*
        address(DataLoaderConfig& x)
        {
          return &x;
        }
        static int
        count(DataLoaderConfig const&)
        {
          return sizeof(DataLoaderConfig);
        }
      };
    } // namespace detail
  }   // namespace mpi
};    // namespace diy
#endif
