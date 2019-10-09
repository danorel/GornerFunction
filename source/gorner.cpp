//
// Created by Dan Orel on 2019-10-09.
//
#include <cstdio>
#include "gorner.h"

GornerGenerator::GornerGenerator() {
    this->min              = 0.;
    this->max              = 100.;
    this->exponent         = 0;
    this->coefficients_vec = nullptr;
}

double GornerGenerator::calculate(double x, size_t exponent) {
    // Initialization steps
    double gorner_result = 0.;
    this->exponent       = exponent;
    // Allocate memory for dynamic array
    this->coefficients_vec = new double[exponent];
    generate_coefficients(
            this->coefficients_vec,
            this->exponent);
    for(int index = exponent; index >= 0; index--){
        gorner_result *= x;
        gorner_result += *(this->coefficients_vec + index);
    }
    return gorner_result;
}

void GornerGenerator::show_coefficients(){
    printf("\n");
    if(this->exponent){
        for(int index = 0; index < this->exponent; index++)
            printf("coef[%.1i] = %.1f\n", index, *(coefficients_vec + index));
    } else {
        printf("exponent was not defined\n");
    }
}

void GornerGenerator::set_coeff_range(double min, double max) {
    this->min = min;
    this->max = max;
}

double GornerGenerator::getMin() {
    return this->min;
}

double GornerGenerator::getMax() {
    return this->max;
}

void GornerGenerator::generate_coefficients(
        double* coefficients_vec,
        size_t exponent) {
    srand(time(NULL));
    for(int index = 0; index < exponent; index++)
        *(coefficients_vec + index) = this->min + (rand() % static_cast<int>(this->max - this->min));
}

GornerGenerator::~GornerGenerator() {
    // Free the memory, allocated for dynamic array
    delete this->coefficients_vec;
}