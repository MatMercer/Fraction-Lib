#include <iostream>

using namespace std;

#ifndef FRACTION_LIB_FRACTION_H

class Fraction {
private:
    long num;
    long den;
public:
    Fraction(long);

    Fraction(long, long);

    Fraction operator*(Fraction);

    Fraction operator*(long);

    Fraction operator/(Fraction);

    Fraction operator/(long);

    Fraction operator+(Fraction);

    Fraction operator+(long);

    static long lcm(long x, long y);

    friend ostream &operator<<(ostream &, Fraction);
};

#define FRACTION_LIB_FRACTION_H

#endif //FRACTION_LIB_FRACTION_H
