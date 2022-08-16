//Nathan Jermann, CSC 145 A, assignment #3, 2-21-19
//Program which implements the definitions in "NRJJCheckingAccount.h"
#include "NRJJCheckingAccount.h"
#include <iostream>
using namespace std;

NRJJCheckingAccount::NRJJCheckingAccount(double inBalance, double inFee)
    :NRJJAccount(inBalance), fee{inFee} {//sets balance of base-class equal to "inBalance"
}

void NRJJCheckingAccount::credit(double addBalance) {//redefines credit member function to subtract fee
    double temp = addBalance - fee;
    NRJJAccount::credit(temp);//plug the value of temp into the base-class function credit
}

void NRJJCheckingAccount::debit(double subBalance) {//redefines debit member function to subtract fee
    if (subBalance == 0) {//check to make sure the withdrawn amount isn't zero
        cout << "No changes were made to your account balance" << endl;//if so don't subtract a fee
    }
    else {
        double temp = subBalance + fee;
        NRJJAccount::debit(temp);//plug the value of temp into the base-class function credit
    }
}
