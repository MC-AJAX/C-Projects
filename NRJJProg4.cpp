//Nathan Jermann, CSC 144 A, assignment #4, 10-3-18
//Program which accepts 3 integers and checks to see if they form a right triangle.

#include <iostream>

using namespace std;

int main() {

    int num1{0}; // Initialize variables.
    int num2{0};
    int num3 {0};
    int side1{0};
    int side2{0};
    int longestSide{0};
    int shorterSides{0};
    int temp{0};

    cout << "Enter three positive integers: "; // Prompt user to enter 3 positive integers.
    cin >> num1 >> num2 >> num3;

    if (num1 < 0) { // This block checks to see if the 3 integers are positive,
        num1 = 1; // if no the integer is set to one.
    }
    if (num2 < 0) {
        num2 = 1;
    }
    if (num3 < 0) {
        num3 = 1;
    }


    cout << "The side lengths are: " << num1 << " " << num2 << " " << num3 << endl; // Prints the 3 sides.

    if (num3 < num2) { // This block tests to see which integer is largest,
        temp = num3; // Then sets "num3" equal to the largest integer.
        num3 = num2;
        num2 = temp;
    }

    if (num2 < num1) {
        temp = num2;
        num2 = num1;
        num1 = temp;
    }

    if (num3 < num2) {
        temp = num3;
        num3 = num2;
        num2 = temp;
    }

    longestSide = num3; //sets integers equal to different sides.
    side2 = num2;
    side1 = num1;

    longestSide = longestSide * longestSide; // This block places the sides in the equation a^2 + b^2 = c^2
    side1 = side1 * side1;
    side2 = side2 * side2;
    shorterSides = side1 + side2; // Then simplifies.

    if (shorterSides == longestSide) { // Tests to see if a^2 + b^2 = c^2
        cout << "These sides form a right triangle.";
    }
    else {
        cout << "These sides do not form a right triangle.";
    }
}

/*
Initialize variables to 0.

Prompt user to enter 3  positive integers.

Tests to make sure each integer is greater than 0.
    if num1 < 0
        set num1 = 1
    if num2 < 0
        set num2 = 1
    if num3 < 0
        set num3 = 1

Print the sides.

Tests to see which integer is the largest and sets that integer equal to "num3"
    if "num2" greater than "num3"
        temp = num3
        num3 = num2
        num2 = temp  ->  Sets "num3" greater than "num2"

    if "num2" smaller than "num1"
        temp = num2
        num2 = num1
        num1 = temp  ->  Sets "num2" greater than "num1"

    if "num2" greater than "num3"
        temp = num3
        num3 = num2
        num2 = temp   -> Sets "num3" greater than "num2"

Set "num3" = "longestSide"
Set "num2" = "side2"
Set "num1" = "side1"

Place the variables in the equation a^2 + b^2 = c^2 then simplify.
    Multiply "longestSide" by itself and store the result in "longestSide
    Multiply "side2" by itself and store the result in "side2"
    Multiply "side1" by itself and store the result in "side1"
    Add "side1" to "side2" and store the result in "shorterSides"

If "shorterSides" is equal to "longestSide"
    then print "These sides form a right triangle."

Else print
    "These sides do not form a right triangle."
*/
