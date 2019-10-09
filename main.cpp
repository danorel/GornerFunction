#include <iostream>
#include "source/gorner.h"
#include "test/test_gorner.h"

int main() {
    GornerGenerator generator = GornerGenerator();
    generator.set_coeff_range(-5, 5);
    generator.show_range();
    test_gorner(generator, 3, 5);
    test_gorner(generator, 2, 3);
    test_gorner(generator, 1, 4);
    return 0;
}

