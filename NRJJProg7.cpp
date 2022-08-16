//Nathan Jermann, CSC 144 A, assignment #7, 10-20-18
//Program which prints out "The 12 Days of Christmas".

#include <iostream>
#include <string>
using namespace std;

int main() {

    string verse1("A partridge in a pear tree"); //initialize all the verses as string variables.
    string verse2("Two turtle doves, and");
    string verse3("Three french hens");
    string verse4("Four colly birds");
    string verse5("Five gold rings");
    string verse6("Six geese a-laying");
    string verse7("Seven swans a-swimming");
    string verse8("Eight maids a-milking");
    string verse9("Nine ladies dancing");
    string verse10("Ten lords a-leaping");
    string verse11("Eleven pipers piping");
    string verse12("Twelve drummers drumming");

    for (unsigned int verse{1}; verse <= 12; ++verse) { //while "verse" is less than 12 repeat the loop.
        cout << "On the ";

        switch (verse) { //tests "verse"
            case 1: cout << "first "; //each case will print out "first" through "twelfth" in accord with the value of "verse".
                break;
            case 2: cout << "second ";
                break;
            case 3: cout << "third ";
                break;
            case 4: cout << "fourth ";
                break;
            case 5: cout << "fifth ";
                break;
            case 6: cout << "sixth ";
                break;
            case 7: cout << "seventh ";
                break;
            case 8: cout << "eighth ";
                break;
            case 9: cout << "ninth ";
                break;
            case 10: cout << "tenth  ";
                break;
            case 11: cout << "eleventh ";
                break;
            case 12: cout << "twelfth ";
                break;
            default: cout << "whoops ";
                break;
        }

        cout << "day of Christmas my true love sent to me\n";

        switch (verse) { //tests "verse"
            case 1: cout << verse1 << "\n"; //Each case prints the the verses in descending order,
                break;                      // according with the value of verse.

            case 2: cout << verse2 << "\n"
                         << verse1 << "\n";
                break;

            case 3: cout << verse3 << "\n"
                         << verse2 << "\n"
                         << verse1 << "\n";
                break;

            case 4: cout << verse4 << "\n"
                         << verse3 << "\n"
                         << verse2 << "\n"
                         << verse1 << "\n";
                break;

            case 5: cout << verse5 << "\n"
                         << verse4 << "\n"
                         << verse3 << "\n"
                         << verse2 << "\n"
                         << verse1 << "\n";
                break;

            case 6: cout << verse6 << "\n"
                         << verse5 << "\n"
                         << verse4 << "\n"
                         << verse3 << "\n"
                         << verse2 << "\n"
                         << verse1 << "\n";
                break;

            case 7: cout << verse7 << "\n"
                         << verse6 << "\n"
                         << verse5 << "\n"
                         << verse4 << "\n"
                         << verse3 << "\n"
                         << verse2 << "\n"
                         << verse1 << "\n";
                break;

            case 8: cout << verse8 << "\n"
                         << verse7 << "\n"
                         << verse6 << "\n"
                         << verse5 << "\n"
                         << verse4 << "\n"
                         << verse3 << "\n"
                         << verse2 << "\n"
                         << verse1 << "\n";
                break;

            case 9: cout << verse9 << "\n"
                         << verse8 << "\n"
                         << verse7 << "\n"
                         << verse6 << "\n"
                         << verse5 << "\n"
                         << verse4 << "\n"
                         << verse3 << "\n"
                         << verse2 << "\n"
                         << verse1 << "\n";
                break;

            case 10: cout << verse10 << "\n"
                          << verse9 << "\n"
                          << verse8 << "\n"
                          << verse7 << "\n"
                          << verse6 << "\n"
                          << verse5 << "\n"
                          << verse4 << "\n"
                          << verse3 << "\n"
                          << verse2 << "\n"
                          << verse1 << "\n";
                break;

            case 11: cout << verse11 << "\n"
                          << verse10 << "\n"
                          << verse9 << "\n"
                          << verse8 << "\n"
                          << verse7 << "\n"
                          << verse6 << "\n"
                          << verse5 << "\n"
                          << verse4 << "\n"
                          << verse3 << "\n"
                          << verse2 << "\n"
                          << verse1 << "\n";
                break;

            case 12: cout << verse12 << "\n"
                          << verse11 << "\n"
                          << verse10 << "\n"
                          << verse9 << "\n"
                          << verse8 << "\n"
                          << verse7 << "\n"
                          << verse6 << "\n"
                          << verse5 << "\n"
                          << verse4 << "\n"
                          << verse3 << "\n"
                          << verse2 << "\n"
                          << verse1 << "\n";
                break;

            default: cout << "whoops ";
                break;

        }

        cout << "\n";
    }
}

/*

initialize verse1 to "A partridge in a pear tree"
initialize verse2 to "Two turtle doves, and"
initialize verse3 to "Three french hens"
initialize verse4 to "Four colly birds"
initialize verse5 to "Five gold rings"
initialize verse6 to "Six geese a-laying"
initialize verse7 to "Seven swans a-swimming"
initialize verse8 to "Eight maids a-milking"
initialize verse9 to "Nine ladies dancing"
initialize verse10 to "Ten lords a-leaping"
initialize verse11 to "Eleven pipers piping"
initialize verse12 to "Twelve drummers drumming"
initialize verse to 1

while "verse" less than or equal to 12

    print "On the"

    test "verse"
        if "verse" is equal to 1
            print "first"

        if "verse" is equal to 2
            print "second"

        if "verse" is equal to 3
            print "third"

        if "verse" is equal to 4
            print "fourth"

        if "verse" is equal to 5
            print "fifth"

        if "verse" is equal to 6
            print "sixth"

        if "verse" is equal to 7
            print "seventh"

        if "verse" is equal to 8
            print "eighth"

        if "verse" is equal to 9
            print "ninth"

        if "verse" is equal to 10
            print "tenth"

        if "verse" is equal to 11
            print "eleventh"

        if "verse" is equal to 12
            print "twelfth"

        else print "whoops"

    print "day of Christmas my true love sent to me"
    set cursor to next line

    test "verse"
        if "verse" is equal to 1
            print "verse1"

        if "verse" is equal to 2
            print "verse2" through "verse1"

        if "verse" is equal to 3
            print "verse3" through "verse1"

        if "verse" is equal to 4
            print "verse4" through "verse1"

        if "verse" is equal to 5
            print "verse5" through "verse1"

        if "verse" is equal to 6
            print "verse6" through "verse1"

        if "verse" is equal to 7
            print "verse7" through "verse1"

        if "verse" is equal to 8
            print "verse8" through "verse1"

        if "verse" is equal to 9
            print "verse9" through "verse1"

        if "verse" is equal to 10
            print "verse10" through "verse1"

        if "verse" is equal to 11
            print "verse11" through "verse1"

        if "verse" is equal to 12
            print "verse12" through "verse1"

        else print "whoops"

*/
