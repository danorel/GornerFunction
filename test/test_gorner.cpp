//
// Created by Dan Orel on 2019-10-09.
//
#include "test_gorner.h"

void test_gorner(
        GornerGenerator generator,
        double x,
        double exponent){
    std::cout << "-----------------------" << std::endl;
    std::cout << "gorner(" << x << ", " << exponent << ") = " << generator.calculate(x, exponent) << std::endl;
    std::cout << "gorner coefficients: ";
    generator.show_coefficients();
    std::cout << "-----------------------" << std::endl << std::endl;
}