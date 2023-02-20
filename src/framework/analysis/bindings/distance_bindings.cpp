#include <pybind11/pybind11.h>
#include "distance.hpp"

PYBIND11_MODULE(_c_distance, m) {
    m.doc() = "Analysis wrapper module";
    m.def("_c_distance_one", &distance_one, "Distance one function");
    m.def("_c_distance_two", &distance_two, "Distance two function");
}