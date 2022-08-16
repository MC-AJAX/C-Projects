//Nathan Jermann, CSC 144 A, assignment #9, 11-5-18
//Program which uses a function to return the product of 2 integers.

#include <iostream>
using namespace std;

int multRec(int x, int y); //returns the product of 2 integers

int main() {
    int x{0};
    int y{0};

   for(int counter{0}; counter < 3; counter++) { //loops 3 times
        cout << "Input two integers: "; //inputs 2 integers and stores those values in "x" and "y"
        cin >> x >> y;
        cout << "The product of those two numbers is: " << multRec(x, y) << "\n" << endl; //calls "multRec" to display the product
   }
}

int multRec(int x, int y) { //returns the product of 2 integers
    int number{0};

    if (x > 0 && y > 0) {//if both integers are positive
        if (y == 1) {//test for base case
            return x;
        }
        else {
           return number = x + multRec(x, y-1);//recursion step and return the product
        }
    }
    if (x == 0 || y == 0) { // if either integer is zero,
        return 0; //the function will return 0
    }
    if (x < 0 && y > 0) {//if "x" is negative and "y" is positive
        if (y==1) {//test for base case
            return x;
        }
        else {
            x=(x-x)-x;//set "x" to its inverse
            number = x +multRec(x, y-1);//recursion step
        }
        number=(number-number)-number;//set "number" to its inverse
        return number;
    }

    if (x > 0 && y < 0) {//if "x" is positive and "y" is negative
        if (x==1) {//test for base case
            return y;
        }
        else {
            y=(y-y)-y;//set "y" to its inverse
            number = y +multRec(x-1, y);//recursion step
        }
        number=(number-number)-number;//set "number" to its inverse
        return number;
    }

    if (x < 0 && y < 0) {//if both "x" and "y" are negative
        x =(x-x)-x;//set "x",
        y =(y-y)-y;//and "y" to their inverses
        number = x + multRec(x, y-1);//recursion step

        if (y == 1) {//tests for base case
            return x;
        }
    }
}

/*

main()

    initialize "counter" to 0

    while "counter" is less than 3
        add 1 to "counter"

        prompt the user for 2 integers
        store those values in "x" and "y"

        print "The product of those two numbers is: " and call multRec to return the product

        set cursor to a new line

multRec(x, y)
    initialize "number" to 0

    if both integers are positive
        if "y" is equal to 1
            return "x"
        else
            "number" is equal to "x" + "multRec(x, y-1) //recursion
            return "number"

    if "x" or "y" are equal to 0
        return 0

    if "x" is negative and "y" is positive
        if "y" is equal to 1
            return "x"
        else
            set "x" equal to its inverse
            "number" is equal to "x" + "multRec(x, y-1) //recursion

        set "number" equal to its inverse
        return "number"

    if "x" is positive and "y" is negative
        if "x" is equal to 1
            return "y"
        else
            set "y" equal to its inverse
            "number" is equal to "y" + "multRec(x-1, y) //recursion

        set "number" equal to its inverse
        return "number"

    if both "x" and "y" are negative
        set "x" and "y" equal to their inverses
        "number" is equal to "x" + "multRec(x, y-1) //recursion

        if "y" is equal to 1
            return "x"
*/
