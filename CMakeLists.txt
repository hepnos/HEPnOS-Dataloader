project(dataloader)
cmake_minimum_required(VERSION 3.9)

# add our cmake module directory to the path
set (CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH}
     "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

# C++14
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

option (ONLY_TEST_CLASSES "Build only a subset of NoVA classes" OFF)
if(${ONLY_TEST_CLASSES})
    add_definitions(-DONLY_TEST_CLASSES)
endif()

set(CMAKE_INCLUDE_SYSTEM_FLAG_CXX "-isystem")
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include
                    ${CMAKE_CURRENT_SOURCE_DIR}/src)

# MPI
find_package(MPI REQUIRED)
set(libraries ${libraries} ${MPI_C_LIBRARIES} ${MPI_CXX_LIBRARIES})
include_directories(${MPI_INCLUDE_PATH})

# TCLAP
find_package(TCLAP REQUIRED)
include_directories(${TCLAP_INCLUDE_PATH})

# SPDLOG
find_package(spdlog REQUIRED)
set(libraries ${libraries} spdlog::spdlog)

# HDF5
find_package(HDF5 REQUIRED COMPONENTS C)
include_directories(${HDF5_INCLUDE_DIRS})
set(libraries ${libraries} ${HDF5_C_LIBRARIES})

# Boost
find_package(Boost REQUIRED COMPONENTS serialization)
set(libraries ${libraries} Boost::serialization)

# HEPnOS
find_package(hepnos REQUIRED)
set(libraries ${libraries} hepnos)

# Executable
add_executable(hepnos-dataloader src/DataLoader.cpp)
target_link_libraries(hepnos-dataloader ${libraries})

install(TARGETS hepnos-dataloader
        DESTINATION bin)
