//Nathan Jermann, CSC 145 A, assignment #3, 2-21-19
//.h file which acts as a base class for inheritance.
#include<iostream>
#ifndef NRJJACCOUNT_H
#define NRJJACCOUNT_H

class NRJJAccount {
    public:
        explicit NRJJAccount(double);//constructor
        void credit(double);//adds the entered amount to balance
        void debit(double);//subtracts the entered amount form balance
        double getBalance();//displays the current balance

    private:
        double balance{0.0};
};

#endif

/*

    |------------------------------------------------------------------|
    |                           NRJJAccount                            |
    |------------------------------------------------------------------|
    |   -balance :double                                               |
    |                                                                  |
    |------------------------------------------------------------------|
    |   <constructor>+NRJJAccount(intake :double)                      |
    |   +credit(addBalance :double)                                    |
    |   +debit(subBalance :double)                                     |
    |   +getBalance() :double                                          |
    |                                                                  |
    |------------------------------------------------------------------|

*/
