#include <iostream>

#include "distance.hpp"
#include "simple.hpp"

int main() {
    int x = 2;
    int y = 3;
    std::cout << distance_one(x,y) << std::endl;
    std::cout << distance_two(x,y) << std::endl;
    std::cout << simple_one(x,y) << std::endl;
    std::cout << simple_two(x,y) << std::endl;
    return x+y;
}