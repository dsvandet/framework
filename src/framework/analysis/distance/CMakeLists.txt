cmake_minimum_required(VERSION 3.12)
project(Distance)

set(SRC
    intern/distance.cpp
    
    distance.hpp
)

add_library(libdistance
    STATIC
    ${SRC}
)

target_include_directories(libdistance
    PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}"
)

# Set prefix to "" since lib is already in project name
set_target_properties(libdistance PROPERTIES PREFIX "")
