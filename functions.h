#ifndef FUNCTIONS_H
#define FUNCTIONS_H

struct Fraction {
    int numerator;
    int denominator;
};

Fraction simplifyFraction(const Fraction& fraction);
Fraction addFractions(const Fraction& fraction1, const Fraction& fraction2);
Fraction subtractFractions(const Fraction& fraction1, const Fraction& fraction2);
Fraction multiplyFractions(const Fraction& fraction1, const Fraction& fraction2);
Fraction divideFractions(const Fraction& fraction1, const Fraction& fraction2);

#endif
