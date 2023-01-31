cmake_minimum_required(VERSION 3.8 FATAL_ERROR)

project(libanalysis)
set(MODULE_NAME "analysis")

set(ANALYSIS_SOURCE_FILES
    distance.cpp)

set(ANALYSIS_HEADER_FILES
    distance.hpp
)

add_library(${PROJECT_NAME}
    ${ANALYSIS_SOURCE_FILES}
)

# Since we have "lib" in the project name set the target
# prefix to "" so that the resulting library is ${PROJECT_NAME}.a
set_target_properties(libanalysis PROPERTIES PREFIX "")

set_target_properties(libanalysis PROPERTIES PUBLIC_HEADER ${ANALYSIS_HEADER_FILES})

target_include_directories(${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}
)



