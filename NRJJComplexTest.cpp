//Nathan Jermann, CSC 145 A, assignment #1, 1-23-19
//Program which tests the constructor, add, subtract, and print functions of "NRJJComplex.h"

#include "NRJJComplex.h"
#include <iostream>
using namespace std;

int main() {

    NRJJComplex a(3,4), b(1,2);//create two NRJJComplex objects
    NRJJComplex c = a.add(b);//uses add function on a and b
    cout << c.toString() << endl;//prints result

    c = a.subtract(b);//uses subtract function on a and b
    cout << c.toString() << endl;//prints result

    c = a.multiply(b);//uses multiply function on a and b
    cout << c.toString() << endl;//prints result

    c = a.modulus1();//uses modulus function on a

    bool variable = a.greaterThen(b);//uses greaterThen function on a and b
    if (variable == 1) {//if result is equal to 1 print true
        cout << "true" << endl;
    }
    else {//if result is equal to 0 print false
        cout << "false" << endl;
    }
}

