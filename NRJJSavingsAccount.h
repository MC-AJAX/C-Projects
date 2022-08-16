//Nathan Jermann, CSC 145 A, assignment #3, 2-21-19
//.h file which acts as a derived class for inheritance.
#include<iostream>
#include "NRJJAccount.h"
#ifndef NRJJSAVINGSACCOUNT_H
#define NRJJSAVINGSACCOUNT_H

class NRJJSavingsAccount : public NRJJAccount {
    public:
        explicit NRJJSavingsAccount(double, double);//constructor
        double calculateInterest();//multiplies the interest rate by the balance

    private:
        double interest{0.0};
};

#endif

/*

    |------------------------------------------------------------------------------|
    |                           NRJJSavingsAccount                                 |
    |------------------------------------------------------------------------------|
    |   -interest :double                                                          |
    |                                                                              |
    |------------------------------------------------------------------------------|
    |   <constructor>+NRJJSavingsAccount(inBalance :double, inInterest :double)    |
    |   +calculateInterest() :double                                               |
    |                                                                              |
    |------------------------------------------------------------------------------|

*/
