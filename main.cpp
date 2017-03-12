#include <iostream>
#include "./fraction/fraction.h"

using namespace std;

int main() {
    Fraction f = Fraction(3, 4);
    Fraction f2 = Fraction(18, 13);

    cout << "f=" << f << endl;
    cout << "f2=" << f2 << endl;
    cout << endl << "f^2: " << f * f << endl;
    cout << "(f*f)/f2: " << (f * f) / f2 << endl;
    cout << "f*2: " << f * 2 << endl;
    cout << "f+f2: " << f + f2 << endl;
    cout << "f+5: " << f + 5 << endl;
    cout << "f2/3: " << f2 / 3 << endl;

    return 0;
}
