//Nathan Jermann, CSC 144 A, assignment #12, 12-5-18
//Program which tests the constructor, add, subtract, and print functions of "NRJJRational.h"

#include <iostream>
#include "NRJJRational.h"

using namespace std;

int main() {

    NRJJRational a(3,4), b(1,2);//define two "NRJJRational" objects
    NRJJRational c = a.add(b);//set object "c" equal to "a" + "b"
    cout << c.toRationalString() << endl;//call "toRationalString" to print in fraction form
    cout << c.toDecimal() << "\n" << endl;//call "toDecimal" to print in decimal form

    c = a.subtract(b);//set "c" equal to "a" - "b"
    cout << c.toRationalString() << endl;
    cout << c.toDecimal() << "\n" << endl;

    c = a.multiply(b);//set "c" equal to "a" * "b"
    cout << c.toRationalString() << endl;
    cout << c.toDecimal() << "\n" << endl;

    c = a.divide(b);//set "c" equal to "a" / "b"
    cout << c.toRationalString() << endl;
    cout << c.toDecimal() << "\n" << endl;
}
