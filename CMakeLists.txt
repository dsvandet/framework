cmake_minimum_required(VERSION 3.8 FATAL_ERROR)
file(STRINGS "framework/VERSION.txt" VERSION_NUM)

include(CheckLanguage)
project(framework_libs VERSION ${VERSION_NUM} LANGUAGES CXX C)

set(FRAMEWORK_INCLUDE_DIR "${PROJECT_SOURCE_DIR}/include")
set(FRAMEWORK_LIB_DIR "${PROJECT_SOURCE_DIR}/lib")

set(CMAKE_PREFIX_PATH "build/framework ${CMAKE_PREFIX_PATH}")

add_subdirectory(src/analysis)
add_subdirectory(src/linear)

add_subdirectory(framework/linear/wrappers)



