#include <iostream>
#include "source/gorner.h"

int main() {
    GornerGenerator generator = GornerGenerator();
    generator.set_coeff_range(-5, 5);
    std::cout << "Coefficient number generation range: [" << generator.getMin() << "; " << generator.getMax() << "]" << std::endl;

    std::cout << "gorner(" << 2 << ", " << 3 << ") = " << generator.calculate(2, 3) << std::endl << "gorner coefficients: ";
    generator.show_coefficients();

    std::cout << std::endl;

    std::cout << "gorner(" << 3 << ", " << 5 << ") = " << generator.calculate(3, 5) << std::endl << "gorner coefficients: ";
    generator.show_coefficients();
    return 0;
}