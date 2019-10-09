#include <iostream>
#include "source/gorner.h"

int main() {
    GornerGenerator generator = GornerGenerator();
    std::cout << "gorner(" << 5 << ") = " << generator.calculate(5, 3) << std::endl << "gorner coefficients: ";
    generator.show_coefficients();

    std::cout << std::endl;
    
    std::cout << "gorner(" << 3 << ") = " << generator.calculate(3, 5) << std::endl << "gorner coefficients: ";
    generator.show_coefficients();
    return 0;
}