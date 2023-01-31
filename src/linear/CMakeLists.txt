cmake_minimum_required(VERSION 3.8 FATAL_ERROR)

project(liblinear)
set(MODULE_NAME "linear")

set(LINEAR_SOURCE_FILES
    simple.cpp)

set(LINEAR_HEADER_FILES
    simple.hpp
)

add_library(${PROJECT_NAME}
    STATIC
    ${LINEAR_SOURCE_FILES}
)

# Since we have "lib" in the project name set the target
# prefix to "" so that the resulting library is ${PROJECT_NAME}.a
set_target_properties(liblinear PROPERTIES PREFIX "")

set_target_properties(liblinear PROPERTIES PUBLIC_HEADER ${LINEAR_HEADER_FILES})

target_include_directories(${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}
)