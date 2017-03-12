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

Fraction Fraction::operator/(long div) {
    return this->operator/(Fraction(div));
}

Fraction Fraction::operator+(Fraction sumFrac) {
    long newNum = 0;
    long newDen = 0;

    if (sumFrac.den != this->den) {
        long m = this->lcm(sumFrac.den, this->den);
        newNum += sumFrac.num * (m / sumFrac.den);
        newNum += this->num * (m / this->den);
        newDen = m;
    } else {
        newNum = sumFrac.num + this->num;
        newDen = sumFrac.den;
    }

    return Fraction(newNum, newDen);
}

Fraction Fraction::operator+(long sumNum) {
    return this->operator+(Fraction(sumNum));
}

long Fraction::lcm(long x, long y) {
    // Finds the lowest and highest number
    long higher = x > y ? x : y;
    long lower = higher == x ? y : x;

    int i = 1;
    while (higher * i % lower != 0)
        i += 1;

    return higher * i;
}

ostream &operator<<(ostream &output, Fraction frac) {
    output << frac.num << "/" << frac.den;
    return output;
}


