#include <iostream>
#include "functions.h"

int main() {
    Fraction fraction1 = { 3, 4 };
    Fraction fraction2 = { 2, 5 };

    Fraction sum = addFractions(fraction1, fraction2);
    Fraction difference = subtractFractions(fraction1, fraction2);
    Fraction product = multiplyFractions(fraction1, fraction2);
    Fraction quotient = divideFractions(fraction1, fraction2);

    std::cout << "Sum: " << sum.numerator << "/" << sum.denominator << std::endl;
    std::cout << "Difference: " << difference.numerator << "/" << difference.denominator << std::endl;
    std::cout << "Product: " << product.numerator << "/" << product.denominator << std::endl;
    std::cout << "Quotient: " << quotient.numerator << "/" << quotient.denominator << std::endl;

    return 0;
}
