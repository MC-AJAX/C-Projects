//Nathan Jermann, CSC 145 A, assignment #3, 2-21-19
//Program which tests the inheritance of base class NRJJAccount
#include<iostream>
#include "NRJJAccount.h"
#include "NRJJSavingsAccount.h"
#include "NRJJCheckingAccount.h"
using namespace std;

int main() {

    NRJJAccount account1(4.0);
    NRJJSavingsAccount account2(2.0, 2.0);
    NRJJCheckingAccount account3(3.0, 1.0);

    cout << "Initial amount in Account1 balance: $" << account1.getBalance() << endl;

    account1.credit(1.0);
    cout << "Account1 balance after adding $1 credit: $" << account1.getBalance() << endl;

    account1.debit(2.0);
    cout << "Account1 balance after withdrawing $2: $" << account1.getBalance() << "\n" << endl;

    cout<< "Initial amount in Account2 balance: $" << account2.getBalance() << endl;

    cout << "Account2 balance with interest added: $" << account2.calculateInterest() << "\n" << endl;

    cout << "Initial amount in Account3 balance: $" << account3.getBalance() << endl;

    account3.credit(2.0);
    cout << "Account3 balance after adding $2 credit, with fee: $" << account3.getBalance() << endl;

    account3.debit(2.0);
    cout << "Account3 balance after withdrawing $2, with fee: $" << account3.getBalance() << endl;

}
