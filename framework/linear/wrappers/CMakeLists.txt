project(linear_wrappers)

set(LINEAR_WRAPPERS_SOURCE_FILES
    bindings.cpp)

add_library(${PROJECT_NAME}
    ${LINEAR_WRAPPERS_SOURCE_FILES}
)

target_link_libraries(${PROJECT_NAME}
    liblinear
)

find_package(Pybind11 REQUIRED)

pybind11_add_module(LINEAR_wrappers 
    ${LINEAR_WRAPPERS_SOURCE_FILES}
)