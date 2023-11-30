#include <iostream>
#include "functions.h"

int main() {
    Complex complex1 = { 2.0, 3.0 };
    Complex complex2 = { 1.0, -2.0 };

    Complex sum = addComplex(complex1, complex2);
    Complex difference = subtractComplex(complex1, complex2);
    Complex product = multiplyComplex(complex1, complex2);
    Complex quotient = divideComplex(complex1, complex2);

    std::cout << "Sum: " << sum.real << " + " << sum.imag << "i" << std::endl;
    std::cout << "Difference: " << difference.real << " + " << difference.imag << "i" << std::endl;
    std::cout << "Product: " << product.real << " + " << product.imag << "i" << std::endl;
    std::cout << "Quotient: " << quotient.real << " + " << quotient.imag << "i" << std::endl;

    return 0;
}
