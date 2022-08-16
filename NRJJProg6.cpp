//Nathan Jermann, CSC 144 A, assignment #6, 10-14-18
//Program which creates 4 triangles of different orientation.

#include <iostream>
using namespace std;

int main() {

    for (unsigned int counter{0}; counter < 10; ++counter) { //has the loop repeat from 0 to 10

        for(unsigned int printCount{0}; printCount <= counter; ++printCount) { //prints a number of "*" equal to one greater than counter.
            cout << "*";
        }
        cout << "\n";
    }

    cout << "\n"; //creates space between triangles


    for (unsigned int counter{10}; counter > 0; --counter) { //has the loop repeat from 10 to 0

        for(unsigned int printCount{0}; printCount < counter; ++printCount) { //prints a number of "*" equal to counter.
            cout << "*";
        }
        cout << "\n";
    }

    cout << "\n"; //creates space between triangles


    for (unsigned int counter{0}; counter < 10; ++counter) { //has the loop repeat from 0 to 10

        for (unsigned int space{0}; space < counter; ++space) { //prints a number of spaces equal to counter
            cout << " ";
        }

        for(unsigned int printCount{10}; printCount > counter; --printCount) { //prints a number of "*" equal to printCount
            cout << "*";
        }
        cout << "\n";
    }


    for (unsigned int counter{0}; counter < 10; ++counter) { //has the loop repeat from 0 to 10

        for (unsigned int space{10}; space > counter; --space) { //prints a number of spaces equal to 1 less than "space"
            cout << " ";
        }

        for(unsigned int printCount{0}; printCount < counter; ++printCount) { //prints a number of "*" equal to 1 greater than counter,
            cout << "*";
        }
        cout << "\n";
    }
}

/*

initialize "counter" to 0.
while "counter" less that 10.
    add 1 to "counter".

    initialize "printCount" to 0.
    while "printCount" less than or equal to "counter".
        add 1 to "printCount".
        print "*".

    place cursor on next line.

place cursor on next line.


initialize "counter" to 10.
while "counter" greater than 0.
    subtract 1 from "counter".

    initialize "printCount" to 0.
    while "printCount" less than "counter".
        add 1 to "printCount".
        print "*"

    place cursor on next line.

place cursor on next line.


initialize "counter" to 0.
while "counter" less than 10.
    add 1 to counter.

    initialize "space" to 0.
    while "space" less than counter.
        add 1 to space
        print " ".

    initialize "printCount" to 10.
    while "printCount greater than counter.
        subtract 1 from "printCount".
        print "*".

    place cursor on the next line.


initialize "counter" to 0.
while "counter" less than 10.
    add 1 to counter.

    initialize "space" to 10.
    while "space" greater than counter.
        subtract 1 from space
        print " ".

    initialize "printCount" to 0.
    while "printCount less than counter.
        add 1 to "printCount".
        print "*".

    place cursor on the next line.

    */
