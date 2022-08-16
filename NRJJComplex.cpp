//Nathan Jermann, CSC 145 A, assignment #1, 1-23-19
//Program which implements the definitions in "NRJJComplex.h"

#include "NRJJComplex.h"
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

NRJJComplex::NRJJComplex(double myReal = 0.0, double myImaginary = 0.00): real(myReal), imaginary(myImaginary) {
}//constructor with base parameter of 0.0 for "myReal" and 0.0 for "myReal" and sets them equal to real and imaginary.

NRJJComplex::NRJJComplex(const NRJJComplex &c) {
    real = c.real;
    imaginary = c.imaginary;
}

NRJJComplex NRJJComplex::add(const NRJJComplex &c) {//method which adds two complex objects
    double tempReal = real + c.real;//set "tempReal" equal to real plus object c real
    double tempImaginary = imaginary + c.imaginary; //set tempImaginary equal to imaginary plus object c imaginary
    NRJJComplex tempComplex(tempReal, tempImaginary);//set object tempComplex with arguments tempReal and tempImaginary
    return tempComplex;
}

NRJJComplex NRJJComplex::subtract(const NRJJComplex &c) {//method which subtract two complex objects
    double tempReal = real - c.real;//set "tempReal" equal to real minus object c real
    double tempImaginary = imaginary - c.imaginary;//set tempImaginary equal to imaginary minus object c imaginary
    NRJJComplex tempComplex(tempReal, tempImaginary);//set object tempComplex with arguments tempReal and tempImaginary
    return tempComplex;
}

NRJJComplex NRJJComplex::multiply(const NRJJComplex &c) {//method which multiplies two complex objects
    double tempReal = real * c.real - imaginary * c.imaginary;
    double tempImaginary = real * c.imaginary + imaginary * c.real;
    NRJJComplex tempComplex(tempReal, tempImaginary);//set object tempComplex with arguments tempReal and TempImaginary
    return tempComplex;
}

string NRJJComplex::toString() const {//method which outputs "real" and "imaginary" as a string
   ostringstream output;
   output << real << "+" << imaginary << "i" << endl; //prints "real + imaginary i"
   return output.str();
}

NRJJComplex NRJJComplex::modulus1() {//method which calculates the modulus of an imaginary number
    double tempModulus = (real * real) + (imaginary * imaginary);
    tempModulus = sqrt(tempModulus);//set tempModulus equal to tempModulus squared
    cout << tempModulus << "i" << endl;
}

bool NRJJComplex::greaterThen(const NRJJComplex &c) {//method which calculates the greatest of 2 complex numbers
    double temp1 = (real * real) + (imaginary * imaginary);
    double temp2 = (c.real * c.real) + (c.imaginary * c.imaginary);
    temp1 = sqrt(temp1);//squares temp1
    temp2 = sqrt(temp2);//squares temp2
    if (temp1 > temp2) {//if temp1 is greater return true
        return true;
    }
    else {
        return false;//else return false
    }
}

/*
constructor(double myreal = 0.0, double myimaginary = 0.0)
set real equal to myreal
set imaginary equal to myimaginary

add(const NRJJComplex &c)
set "tempReal" equal to real plus object c real
set tempImaginary equal to imaginary plus object c imaginary
set object tempComplex with arguments tempReal and tempImaginary
return tempCpmplex

subtract(const NRJJComplex &c)
set "tempReal" equal to real plus object c real
set tempImaginary equal to imaginary plus object c imaginary
set object tempComplex with arguments tempReal and tempImaginary
return tempCpmplex

multiply(const NRJJComplex &c)
set tempReal equal to real * object c real - imaginary * object c imaginary
set tempReal equal to real * object c imaginary - imaginary * object c real
set object tempComplex with arguments tempReal and tempImaginary
return tempComplex

modulus()
set tempModulus equal to real* real + imaginary * imaginary
set tempModulus equal to tempModulus squared
print tempModulus

bool greaterThen(const NRJJComplex &c)
set temp1 equal to real*real plus imaginary*imaginary
set temp2 equal to object c real* object c real + object c imaginary * object c imaginary
set temp1 equal to temp1 squared
set temp2 equal to temp2 squared
if temp1 greater then temp2
    return true
else
    return false

*/

