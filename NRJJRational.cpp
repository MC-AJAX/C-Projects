//Nathan Jermann, CSC 144 A, assignment #12, 12-5-18
//Program which implements the definitions in "NRJJRational.h"

#include <iostream>
#include <string>
#include <sstream>
#include "NRJJRational.h"

using namespace std;

int gcd(int a, int b) {//function which intakes two integers and returns their lowest common denominator
        while (a != b) {
            if (a > b)
                a -= b;
            else
                b -= a;
        }
        return a;
    }

NRJJRational::NRJJRational(int n, int d = 1) {//constructor with base parameter of 0/1
    numerator = n / gcd(n, d);//sets "numerator" equal itself divided by the greatest common denominator
    denominator = d / gcd(n, d);//sets "denominator" equal itself divided by the greatest common denominator

}

string NRJJRational::toRationalString() const {//method which outputs "numerator" and "denominator" as a string
   ostringstream output;
   output << numerator << "/" << denominator;//prints num/den
   return output.str();
}

double NRJJRational::toDecimal() {//method which prints "numerator" and "denominator" as a decimal
    return static_cast<double>(numerator) / static_cast<double>(denominator);
}

NRJJRational NRJJRational::add(const NRJJRational &a) {//method which adds two fraction objects
    return NRJJRational(numerator * a.denominator + a.numerator * denominator, denominator * a.denominator);
}
NRJJRational NRJJRational::subtract(const NRJJRational &a) {//method which subtracts two fraction objects
    return NRJJRational(numerator * a.denominator - a.numerator * denominator, denominator * a.denominator);
}
NRJJRational NRJJRational::multiply(const NRJJRational &a) {//method which multiplies two fraction objects
    return NRJJRational(numerator * a.numerator, denominator * a.denominator);
}
NRJJRational NRJJRational::divide(const NRJJRational &a) {//method which multiplies two fraction objects
    return NRJJRational(numerator * a.denominator, denominator * a.numerator);
}

/*

int gcd(int a ,int b)
while "a" is unequal to "b"
    if "a" is greater than "b"
        subtract "b" from "a" and set "a" equal to the result
    else
        subtract "a" from "b" and set "b" equal to the result
return "a"

constructor(int n, int d = 1)
set numerator equal to "n" divided by the greatest common denominator of "n" & "d"
set numerator equal to "d" divided by the greatest common denominator of "n" & "d"


add(const NRJJRational &a)
return an object that has the numerator multiplied by the denominator of object"a",
plus the numerator of object"a" multiplied by the denominator, and return a denominator,
that is the denominator multiplied by the denominator of object"a"

subtract(const NRJJRational &a)
return an object that has the numerator multiplied by the denominator of object"a",
minus the numerator of object"a" multiplied by the denominator, and return a denominator,
that is the denominator multiplied by the denominator of object"a"

multiply(const NRJJRational &a)
return an object that has the numerator multiplied by the numerator of object"a",
and the denominator multiplied by the denominator of object"a"

divide(const NRJJRational &a)
return an object that has the numerator multiplied by the denominator of object"a",
and the denominator multiplied by the numerator of object"a"

*/
