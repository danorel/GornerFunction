//
// Created by Dan Orel on 2019-10-09.
//
#include <cstdlib>
#include <ctime>
#ifndef HOMEWORK5_GORNER_H
#define HOMEWORK5_GORNER_H
class GornerGenerator{
public:
    GornerGenerator();
    double calculate(
            double x,
            size_t exponent);
    void   show_coefficients();
    void   show_range();
    void   set_coeff_range(
            double min,
            double max);
    double getMin();
    double getMax();
    ~GornerGenerator();
private:
    void   generate_coefficients(
              double *coefficients_vec,
              size_t exponent);
    double sum_up(
            double x,
            size_t exponent);
private:
    double *coefficients_vec;
    double min, max;
    size_t exponent;
};
#endif //HOMEWORK5_GORNER_H
