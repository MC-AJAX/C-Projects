//Nathan Jermann, CSC 144 A, assignment #8, 10-26-18
//Program which displays the frequency of numbers rolled by two dice 11,000,000 times.

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

unsigned int rollDice(); //rolls dice, calculates and returns sum

unsigned int frequency2{0};
unsigned int frequency3{0};
unsigned int frequency4{0};
unsigned int frequency5{0};
unsigned int frequency6{0};
unsigned int frequency7{0};
unsigned int frequency8{0};
unsigned int frequency9{0};
unsigned int frequency10{0};
unsigned int frequency11{0};
unsigned int frequency12{0};

int main() {

    for (unsigned int roll{0}; roll < 11000000; roll++) { //simulates the dice roll 11,000,000

        unsigned int rollOfDice{rollDice()}; //roles the dice

        switch (rollOfDice) { //this block increments the the counters for 2 through 12
            case 2:
                ++frequency2;
                break;
            case 3:
                ++frequency3;
                break;
            case 4:
                ++frequency4;
                break;
            case 5:
                ++frequency5;
                break;
            case 6:
                ++frequency6;
                break;
            case 7:
                ++frequency7;
                break;
            case 8:
                ++frequency8;
                break;
            case 9:
                ++frequency9;
                break;
            case 10:
                ++frequency10;
                break;
            case 11:
                ++frequency11;
                break;
            case 12:
                ++frequency12;
                break;
            default:
                cout << "you somehow triggered the default....nice.";
        }
    }

        cout << "Sum" << setw(13) << "Frequency" << endl; //this block displays the calculated frequency of number.
        cout << "   2" << setw(13) << frequency2
           << "\n   3" << setw(13) << frequency3
           << "\n   4" << setw(13) << frequency4
           << "\n   5" << setw(13) << frequency5
           << "\n   6" << setw(13) << frequency6
           << "\n   7" << setw(13) << frequency7
           << "\n   8" << setw(13) << frequency8
           << "\n   9" << setw(13) << frequency9
           << "\n   10" << setw(12) << frequency10
           << "\n   11" << setw(12) << frequency11
           << "\n   12" << setw(12) << frequency12 << endl;
}

unsigned int rollDice() { //roll dice, calculate and return sum

    int die1{1 + rand() % 6}; //first die roll
    int die2{1 + rand() % 6}; //second die role
    int sum{die1 +die2}; //compute the sum of both roles

    return sum;
}

/*

main()

    initialize "roll" to 0.

    while "roll" is less than 11,000,000
        add 1 to "roll"

        generate the dice roll

        test result of "roll"

            if "roll" equal to 2
                add 1 to "frequency2"
            if "roll" equal to 3
                add 1 to "frequency3"
            if "roll" equal to 4
                add 1 to "frequency4"
            if "roll" equal to 5
                add 1 to "frequency5"
            if "roll" equal to 6
                add 1 to "frequency6"
            if "roll" equal to 7
                add 1 to "frequency7"
            if "roll" equal to 8
                add 1 to "frequency8"
            if "roll" equal to 9
                add 1 to "frequency9"
            if "roll" equal to 10
                add 1 to "frequency10"
            if "roll" equal to 11
                add 1 to "frequency11"
            if "roll" equal to 12
                add 1 to "frequency12"
            else print "You messed up"

    print "Sum" and "Frequency" up to 13 spaces, next line
    print "2" and frequency2 up to 13 spaces, next line
    print "3" and frequency3 up to 13 spaces, next line
    print "4" and frequency4 up to 13 spaces, next line
    print "5" and frequency5 up to 13 spaces, next line
    print "6" and frequency6 up to 13 spaces, next line
    print "7" and frequency7 up to 13 spaces, next line
    print "8" and frequency8 up to 13 spaces, next line
    print "9" and frequency9 up to 13 spaces, next line
    print "10" and frequency10 up to 13 spaces, next line
    print "11" and frequency11 up to 13 spaces, next line
    print "12" and frequency12 up to 13 spaces

rollDice()

    "die1" = 1 + random number less than 6
    "die2" = 1 + random number less than 6
    "sum" = "die1" + "die2"

    return the value of "sum"

*/
