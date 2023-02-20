#include <pybind11/pybind11.h>
#include "simple.hpp"

PYBIND11_MODULE(_c_simple, m) {
    m.doc() = "Linear wrapper module";
    m.def("_c_simple_one", &simple_one, "Simple one function");
    m.def("_c_simple_two", &simple_two, "Simple two function");
}