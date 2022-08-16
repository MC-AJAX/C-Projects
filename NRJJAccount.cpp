//Nathan Jermann, CSC 145 A, assignment #3, 2-21-19
//Program which implements the definitions in "NRJJAccount.h"
#include "NRJJAccount.h"
#include <iostream>
using namespace std;

NRJJAccount::NRJJAccount(double intake)
    :balance{intake} {//sets balance equal to intake
        if (balance < 0.0) {//checks to make sure balance is greater than zero
            balance = 0;
            cout << "Error: Balance entered must be greater or equal to 0.0" <<endl;
        }
}

void NRJJAccount::credit(double addBalance){
    balance = balance + addBalance;//adds "addBalance" to balance
}

void NRJJAccount::debit(double subBalance){
    if (subBalance > balance) {//checks to make sure the amount withdrawn is not greater than balance
        cout << "Error: Debit amount exceeded account balance" << endl;
    }
    else {
        balance = balance - subBalance;//subtracts "subBalance" from balance
    }
}

double NRJJAccount::getBalance() {
    return balance;
}


