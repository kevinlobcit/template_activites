#include <iostream>

#include "gpa.hpp"

int main() {
    std::cout << "Hello, World!" << std::endl;

    gpa gpaReader = gpa();
    gpaReader.menu();
    return 0;
}