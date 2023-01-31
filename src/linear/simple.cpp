#include "simple.hpp"

int simple_one(int a, int b) {
    std::cout << "cpp: simple_one:" << a+b+3 << std::endl;
    return a+b+3;
}

int simple_two(int a, int b) {
    std::cout << "cpp: simple_two:" << a+b+4 << std::endl;
    return a+b+4;
}