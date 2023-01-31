project(analysis_wrappers)

set(ANALYSIS_WRAPPERS_SOURCE_FILES
    bindings.cpp)

add_library(${PROJECT_NAME}
    ${ANALYSIS_WRAPPERS_SOURCE_FILES}
)

target_link_libraries(${PROJECT_NAME}
    libanalysis
)

find_package(Pybind11 REQUIRED)

pybind11_add_module(analysis_wrappers 
    ${ANALYSIS_WRAPPERS_SOURCE_FILES}
)