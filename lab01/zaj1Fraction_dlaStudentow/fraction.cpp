#include <iostream>
#include <cstring>
#include <cctype>
#include <utility>

using namespace std;

#include "fraction.h"

#if IMPLEMENTED_classFractionExists
#ifndef _MSC_FULL_VER // if not Visual Studio Compiler
#warning "Klasa jest do zaimplementowania. Instrukcja w pliku naglowkowym"
#else
#pragma message ("Klasa jest do zaimplementowania. Instrukcja w pliku naglowkowym")
#endif
#endif // IMPLEMENTED_classFractionExists

int Fraction::removedFractions_;

Fraction::Fraction()
        :
        numerator(0),
        denominator(1) {
}

Fraction::Fraction(int numerator, int denominator = 1)
        :
        numerator(numerator),
        denominator(denominator) {
    removedFractions_ = 0;
}

Fraction::Fraction(int numerator, int denominator, string fractionName) :
        Fraction(numerator, denominator) {
    this->fractionName = fractionName;
}

Fraction::~Fraction() {
    Fraction::removedFractions_++;
}

void Fraction::print() const {
    cout << to_string(this->numerator) + "/" + to_string(this->denominator) << "\n";
}

int Fraction::removedFractions() {
    return Fraction::removedFractions_;
}

void Fraction::save(ostream &os) const {
    os << numerator << "/" << denominator;
}

void Fraction::load(istream &is) {
    is >> numerator;
    is.get();
    is >> denominator;
}
