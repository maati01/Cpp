#include <iostream>
#include <stdexcept> // std::out_of_range
#include <numeric> // std::gcd

#include "fraction.h"

Fraction::Fraction(int numerator, int denominator) {
    if (denominator == 0) {
        throw std::invalid_argument("Denominator cannot be zero!");
    }
    numerator_ = numerator;
    denominator_ = denominator;
}

void Fraction::setDenominator(int newDenominator) {
    if (newDenominator == 0) {
        throw std::invalid_argument("Denominator cannot be zero!");
    }
    denominator_ = newDenominator;
}

Fraction Fraction::operator+(Fraction fraction) const {
    Fraction added = Fraction(
            this->numerator() * fraction.denominator() + fraction.numerator() * this->denominator(),
            this->denominator() * fraction.denominator());
    int divisor = std::gcd(added.denominator(), added.numerator());
    added.setDenominator(added.denominator() / divisor);
    added.setNumerator(added.numerator() / divisor);
    return added;
}

Fraction Fraction::operator*(Fraction fraction) const {
    Fraction multiplied = Fraction(this->numerator() * fraction.numerator(),
                                   this->denominator() * fraction.denominator());
    int divisor = std::gcd(multiplied.denominator(), multiplied.numerator());
    multiplied.setDenominator(multiplied.denominator() / divisor);
    multiplied.setNumerator(multiplied.numerator() / divisor);
    return multiplied;
}


