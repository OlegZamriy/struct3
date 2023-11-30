#include "functions.h"

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

Fraction simplifyFraction(const Fraction& fraction) {
    int gcd = findGCD(fraction.numerator, fraction.denominator);
    Fraction simplifiedFraction = { fraction.numerator / gcd, fraction.denominator / gcd };
    return simplifiedFraction;
}

Fraction addFractions(const Fraction& fraction1, const Fraction& fraction2) {
    Fraction result = {
        fraction1.numerator * fraction2.denominator + fraction2.numerator * fraction1.denominator,
        fraction1.denominator * fraction2.denominator
    };
    return simplifyFraction(result);
}

Fraction subtractFractions(const Fraction& fraction1, const Fraction& fraction2) {
    Fraction result = {
        fraction1.numerator * fraction2.denominator - fraction2.numerator * fraction1.denominator,
        fraction1.denominator * fraction2.denominator
    };
    return simplifyFraction(result);
}

Fraction multiplyFractions(const Fraction& fraction1, const Fraction& fraction2) {
    Fraction result = {
        fraction1.numerator * fraction2.numerator,
        fraction1.denominator * fraction2.denominator
    };
    return simplifyFraction(result);
}

Fraction divideFractions(const Fraction& fraction1, const Fraction& fraction2) {
    Fraction result = {
        fraction1.numerator * fraction2.denominator,
        fraction1.denominator * fraction2.numerator
    };
    return simplifyFraction(result);
}
