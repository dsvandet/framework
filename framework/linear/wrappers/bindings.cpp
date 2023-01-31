#include <iostream>

#include <pybind11/pybind11.h>

#include "linear/simple.hpp"

PYBIND11_MODULE(linear_wrappers, m) {
    m.doc() = "Linear wrapper module";
    m.def("cpp_simple_one", &simple_one, "Simple one function");
    m.def("cpp_simple_two", &simple_two, "Simple two function");
    m.attr("compiled_flag") = 1; // Flag set to 1 to indicate that module is compiled
}