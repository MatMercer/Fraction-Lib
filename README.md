# Fraction-Lib
A C++ Fraction Library implementation for a College Assignment.

## Usage
The usage is made to be very very simple, first you need to **instantiate a Fraction Object**.
```c++
Fraction f = Fraction(18, 13); // Creates 18/13
```

### Overloaded Operators
These are the overloeaded operators by the Fraction class:
* \+
* \-
* \/
* \<\<

For example, the code below sends "18/39" to stdout:
```c++
#include <iostream>
#include "./fraction/fraction.h"

using namespace std;

int main() {
    Fraction f = Fraction(18, 13);
    
    cout << f2 / 3 << endl;

    return 0;
}
```

The **stdout output** from fraction_test executable is:

![Failed to load the image!](https://i.imgur.com/7pnoWQS.png "STDOUT")
