//Nathan Jermann, CSC 144 A, extra credit, 11-7-18
//Program which displays all perfect numbers and their divisors between 1 and 1,000.

#include <iostream>
#include <iomanip>
using namespace std;

bool isPerfect(int number);//function which tests if a number is a "perfect number"

int main() {

    cout << "Perfect number" << setw(20) << "Divisors" << endl;

    for (int testNum{1}; testNum <= 1000; testNum++) {//loop for all numbers between 1 and 1000

        bool perfectNum{isPerfect(testNum)};//set "perfectNum" equal to the returned value of "isPerfect"
        if (perfectNum == true) {//test if "perfectNum" is true

            cout << testNum << setw(20);//print "testNum"

            for (int divisor{1}; divisor <= testNum/2; divisor++) {//loop from 1 to half of "testNum"

                if (testNum % divisor == 0 && divisor != testNum) {//if "testNum" divided by "divisor" has a remainder of 0,
                    cout << divisor << " ";//or "divisor" is equal to "testNum", print "divisor"
                }
            }
        cout << endl;
        }
    }
}

bool isPerfect(int number) {//function which tests if a number is a "perfect number"

    int temp{0};

    for (unsigned int counter{1}; counter <= number; counter++) {//loop a number of times equal to "number"

        if (number % counter == 0) {//if "number" divided by "counter" has a remainder of 0
        temp = counter + temp;//set "temp" equal to "counter" + "temp"
        }
    }
    temp = temp/2; //divide "temp" by 2

    if (temp == number) { //if "temp" equal to "number" return true
        return true;
    }
    else {
        return false;//otherwise return false
    }
}

/*

main()

    print "perfect number" 20 spaces then "Divisors"

    loop "testNum" between 1 and 1000 with increments of 1
        set "perfectNum" equal to the returned value of "isPerfect"

        if "perfectNum" equals true
            print "testNum"

            loop "divisor" from 1 to half of "testNum"

                if "testNum" divided by "divisor" has a remainder of 0,or "divisor" is equal to "testNum",
                    print "divisor"

isPerfect(number)

    loop "counter" a number of times equal to "number"

        if "number" divided by "counter" has a remainder of 0
            set "temp" equal to "counter" + "temp"

    divide "temp" by 2

    if "temp" equal to "number"
        return true

    else
        return false

*/
