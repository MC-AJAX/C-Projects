//Nathan Jermann, CSC 145 A, assignment #6, 3-27-19
//implementations of derived classes
#include <iostream>
#include "NRJJStackA.h"
#include "NRJJStackL.h"

using namespace std;

void Test(NRJJStackL stackInt);//function signatures
void TestA(NRJJStackA stackInt);

int main(){
//create objects for each class
    NRJJStackA stackA;
    Test(stackL);//Runs both objects through test functions
    TestA(stackA);
}

void Test(NRJJStackL stackInt){//function that tests the functions in NRJJStackL

    // Store several numbers to the stack
    stackInt.Push(32);
    stackInt.Push(47);
    stackInt.Push(18);
    stackInt.Push(59);
    stackInt.Push(88);
    stackInt.Push(91);

    // list the element of stack
    while(!stackInt.IsEmpty())
    {
        // Get the top element
        cout << stackInt.Top() << " - ";

        // Remove the top element
        stackInt.Pop();
    }
    cout << "END" << endl;

    return;
}

void TestA(NRJJStackA stackInt){//function that tests the functions in NRJJStackA

    // Store several numbers to the stack
    stackInt.Push(32);
    stackInt.Push(47);
    stackInt.Push(18);
    stackInt.Push(59);
    stackInt.Push(88);
    stackInt.Push(91);

    // list the element of stack
    while(!stackInt.IsEmpty())
    {
        // Get the top element
        cout << stackInt.Top() << " - ";

        // Remove the top element
        stackInt.Pop();
    }
    cout << "END" << endl;

    if (stackInt.IsFull() == 1) {//checks if stack is full
        cout << "Stack is full" << endl;
    }
    else{
        cout <<"Stack is not full" << endl;
    }


    return;
}


