#include <iostream>
#include "./fraction/fraction.h"
using namespace std;

int main() {
    Fraction f = Fraction(3, 4);

    cout << "f=" << f << endl;
    cout << "f^2: " << f*f << endl;
    cout << "(f*f)/f: " << (f*f)/f << endl;
    cout << "f*2: " << f*2 << endl;
    cout << "2*f: " << Fraction(2)*f << endl;

    return 0;
}
