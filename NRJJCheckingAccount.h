//Nathan Jermann, CSC 145 A, assignment #3, 2-21-19
//.h file which acts as a derived class for inheritance.
#include<iostream>
#include "NRJJAccount.h"
#ifndef NRJJCHECKINGACCOUNT_H
#define NRJJCHECKINGACCOUNT_H

class NRJJCheckingAccount : public NRJJAccount {
    public:
        explicit NRJJCheckingAccount(double, double);//constructor
        void credit(double);//redefines credit member function to subtract fee
        void debit(double);//redefines debit member function to subtract fee

    private:
        double fee{0.0};
};

#endif

/*

    |-----------------------------------------------------------------------|
    |                           NRJJCheckingAccount                         |
    |-----------------------------------------------------------------------|
    |   -fee :double                                                        |
    |                                                                       |
    |-----------------------------------------------------------------------|
    |   <constructor>+NRJJCheckingAccount(inBalance :double, inFee :double) |
    |   +credit(addBalance :double)                                         |
    |   +debit(subBalance :double)                                          |
    |                                                                       |
    |-----------------------------------------------------------------------|

*/
