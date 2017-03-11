#include <iostream>
#include "fraction.h"

using namespace std;

Fraction::Fraction(long num, long den) {
    this->num = num;
    this->den = den;
}

Fraction::Fraction(long num) {
    this->num = num;
    this->den = 1;
}

Fraction Fraction::operator*(Fraction multFrac) {
    long newNum = this->num * multFrac.num;
    long newDen = this->den * multFrac.den;
    Fraction res = Fraction(newNum, newDen);
    return res;
}

Fraction Fraction::operator*(long mult) {
    Fraction res = Fraction(mult * this->num, this->den);
    return res;
}

Fraction Fraction::operator/(Fraction multFrac) {
    long newNum = this->num * multFrac.den;
    long newDen = this->den * multFrac.num;
    Fraction res = Fraction(newNum, newDen);
    return res;
}

Fraction Fraction::operator+(Fraction sumFrac) {
    //TODO: Implement this
    long newNum = 0;
}

ostream &operator<<(ostream &output, Fraction frac) {
    output << frac.num << "/" << frac.den;
    return output;
}
