#include "Fixed.hpp"

int main() {
    Fixed a;
    Fixed b(a);
    Fixed c;

    c = b;

    cout << a << endl;
    cout << b.getRawBits() << endl;
    cout << c.getRawBits() << endl;
}