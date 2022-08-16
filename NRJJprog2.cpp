//Nathan Jermann, CSC 144 A, assignment #2, 9-12-18
//Program that displays the numeric order, from least to greatest, of 3 integers.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    int smallest{0}; //sets all integers equal to 0.
    int middle{0};
    int largest{0};
    int temp{0};

    cout << "Enter three integers to compare: "; //asks user for integers.
    cin >> smallest >> middle >> largest;

    if (largest < middle) { //sets largest > middle.
        temp = largest;
        largest = middle;
        middle = temp;
    }

    if (middle < smallest) { //sets middle > smallest.
        temp = middle;
        middle = smallest;
        smallest = temp;
    }

    if (largest < middle) { //sets largest > middle.
        temp = largest;
        largest = middle;
        middle = temp;
    }

cout << "The smallest integer is: " << smallest << endl; //displays the 3 integers in order of smallest to greatest
cout << "The middle integer is: " << middle << endl;
cout << "The largest integer is: " << largest << endl;

}

/* Prompt user for 3 integers.

if "middle" greater than "largest"
    temp = largest
    largest = middle
    middle = temp  ->  Sets "largest" greater than "middle"

if "middle" smaller than "smallest"
    temp = middle
    middle = smallest
    smallest = temp  ->  Sets "middle" greater than "smallest"

if "middle" greater than "largest"
    temp = largest
    largest = middle
    middle = temp   -> Sets "largest" greater than "middle"

output -> smallest, middle, largest.
*/
