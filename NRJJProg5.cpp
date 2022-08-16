//Nathan Jermann, CSC 144 A, assignment #5, 10-4-18
//Program which displays the numbers 1 through 5 and multiplies them by 10, 100, and 1000.

#include <iostream>
using namespace std;

int main() {

    unsigned int x{0}; //Initialize variables
    unsigned int xCounter{0};
    unsigned int temp{0};

   cout << "x\tx*10\tx*100\tx*1000" << endl; //Prints a list of what the program will do to "x".

    while (xCounter < 5) { //loop which repeats until "xCounter" hits 5
        x = x + 1; //Adds 1 to "x" and "xCounter" ever time the loop cycles.
        xCounter = xCounter + 1;

        cout << x <<"\t";

        temp = x * 10;
        cout << temp << "\t"; //Prints "x" * 10 uses tab.

        temp = x * 100;
        cout << temp << "\t";

        temp = x * 1000;
        cout << temp << endl;
    }
}

/*
Initialize variables.
Print "x"    x*10    x*100   x*1000

While "xCounter" is less than 5
    add 1 to "x"
    add 1 to "xCounter"
    print "x" and use tab
    "temp" = "x" * 10
    print "temp" and use tab
    "temp" = "x" * 100
    print "temp" and use tab
    "temp" = "x" * 1000
    print "temp" and set cursor to next
*/
