//Nathan Jermann, CSC 145 A, assignment #2, 2-9-19
//Program which tests the new overloaded operators of NRJJTime.h
#include<iostream>
#include "NRJJTime.h"
#include <iomanip>
#include <stdexcept>
using namespace std;

int main() {

    NRJJTime t1, t2;

    cout << "Enter a standard time such as 07:17:57:" << endl;
    cin >> t1;
    cout << endl;

    cout << "Enter a standard time such as 07:17:57:" << endl;
    cin >> t2;
    cout << endl;

    cout << "First time value entered less than second time value entered?" << endl;
    t1<t2;
    cout << endl;


    cout << "Set second time value entered equal to first time value entered" << endl;
    t2 = t1;
    cout << "New value of second time:" << endl;
    cout << t1 << "\n" << endl;


    cout << "Check if first time value is equal to second time value" << endl;
    t1==t2;

}

