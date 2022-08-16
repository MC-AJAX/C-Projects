//Nathan Jermann, CSC 144 A, assignment #10, 11-8-18
//Program which uses a template function to show the minimum of a pair of chars, shorts, ints, and doubles.

#include <iostream>
using namespace std;

template <typename type>//"minimum" function template
type minimum(type x, type y);//returns the minimum of and 2 date types

int main() {

    cout << "Enter a pair of chars: ";
    char char1, char2;
    cin >> char1 >> char2;//store inputted values in "char1" and "char2"
    char minChar{minimum(char1, char2)};//call the function "minimum
    cout << "The minimum char is: " << minChar << endl << "\n";//output the minimum value

    cout << "Enter a pair of shorts: ";
    short short1, short2;
    cin >> short1 >> short2;//store inputted values in "short1" and "short2"
    short minShort{minimum(short1, short2)};//call the function "minimum
    cout << "The minimum short is: " << minShort << endl << "\n";//output the minimum value

    cout << "Enter a pair of ints: ";
    int int1, int2;
    cin >> int1 >> int2;//store inputted values in "int1" and "int2"
    int minInt{minimum(int1, int2)};//call the function "minimum"
    cout << "The minimum int is: " << minInt << endl << "\n";//output the minimum value

    cout << "Enter a pair of doubles: ";
    double double1, double2;
    cin >> double1 >> double2;//store inputted values in "double1" and "double2"
    double minDouble{minimum(double1, double2)};//call the function "minimum"
    cout << "The minimum double is:  " << minDouble << endl << "\n";//output the minimum value
}

template <typename type>//"minimum" function template
type minimum(type x, type y) {//returns the minimum of and 2 date types
    type minNumber{0};

    if (x < y) {//set "x" = to minimum if its the smallest value
        minNumber = x;
    }
    else {//otherwise set "y" to the smallest value
        minNumber = y;
    }
    return minNumber;//return the minimum value
}

/*

main()

    ask the user to input two "chars"
    store inputted values equal to "char1" and "char2"
    find the minimum value of "char1" of "char2"
    print "The minimum char is: " the minimum value

    ask the user to input two "shorts"
    store inputted values equal to "short1" and "short2"
    find the minimum value of "short1" and "short2"
    print "The minimum short is: " the minimum value

    ask the user to input two "ints"
    store inputted values equal to "int1" and "int2"
    find the minimum value of "int1" and "int2"
    print "The minimum int is: " the minimum value

    ask the user to input two "doubles"
    store inputted values equal to "double1" and "double2"
    find the minimum value "double1" and "double2"
    print "The minimum double is: " the minimum value

minimum()
    initialize "minNumber" to 0

    if "x" is greater than "y"
        set "x" equal to "minNumber"

    else
        set "y" equal to "minNumber"

    return "minNumber"
