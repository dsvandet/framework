cmake_minimum_required(VERSION 3.12)

if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR})
    message(FATAL_ERROR
        "Building of the code within the source directory is not currently allowed"
        "\n Please remove any CMakeCache.txt files created in the root of the source directory"
    )
endif()

# ------------------------------------------------------------------------------
# Policies
#
# Make any need policy settings here. This should be updated once a final
# structure is approved i.e. use policies to inforce the rules!

cmake_policy(VERSION 3.12)

# ------------------------------------------------------------------------------
# Macros
#
# Load up any macros
# Project level macros should be place in build_files/cmake/macros.cmake

include(build_files/cmake/macros.cmake)

# ------------------------------------------------------------------------------
# Project Initialization

project(Framework VERSION 0.0.1)

# ------------------------------------------------------------------------------
# Set Options

set(CMAKE_CXX_STANDARD 20 CACHE STRING "C++ version selection")
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ------------------------------------------------------------------------------
# Set compile flags

# ------------------------------------------------------------------------------
# Add code subdirectories to make libraries

#add_subdirectory(intern)
add_subdirectory(extern)
add_subdirectory(src)

# Make Pybind python bindings

set(DISTANCE_BINDINGS_SRC "src/framework/analysis/bindings/distance_bindings.cpp")
pybind11_add_module(_c_distance ${DISTANCE_BINDINGS_SRC})
target_link_libraries(_c_distance PRIVATE libdistance)

set(SIMPLE_BINDINGS_SRC "src/framework/linear/bindings/simple_bindings.cpp")
pybind11_add_module(_c_simple ${SIMPLE_BINDINGS_SRC})
target_link_libraries(_c_simple PRIVATE libsimple)

# ------------------------------------------------------------------------------
# Add test subdirectories

add_subdirectory(tests)


