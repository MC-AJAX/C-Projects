//Nathan Jermann, CSC 145 A, assignment #3, 2-21-19
//Program which implements the definitions in "NRJJSavingsAccount.h"
#include "NRJJSavingsAccount.h"
#include <iostream>
using namespace std;

NRJJSavingsAccount::NRJJSavingsAccount(double inBalance, double inInterest)
    :NRJJAccount(inBalance), interest{inInterest} {//sets balance of base-class equal to "inBalance"
}

double NRJJSavingsAccount::calculateInterest() {//multiplies the interest rate by the balance
    double interestRate = interest * getBalance();//set interestRate equal to interest * base-class balance
    return interestRate;
}
