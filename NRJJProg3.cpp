//Nathan Jermann, CSC 144 A, assignment #3, 9-26-18
//Program which demonstrates FMCLDate’s capabilities.

#include <iostream>
#include "NRJJDate.h"

using namespace std;

int main() {

    Date testDate(9, 26, 2018); //gives the constructor the initial values for month, day, and year.

    cout << "Initial month is: " << testDate.getMonth() << endl; //displays the initial month.

    cout << "Initial day is: " << testDate.getDay() << endl; // displays the initial day.

    cout << "Initial year is: " << testDate.getYear() << endl; //displays the initial year.

    cout << "Enter a month:"; //prompts the user to enter a value for month.
    int theMonth;
    cin >> theMonth;

    if (theMonth > 12) { //checks to make sure the month is less than 12,
        theMonth = 1; //otherwise month is set to 1.
    }

    if (theMonth < 1) { //checks to make sure month is greater than 0,
        theMonth = 1; //otherwise month is set to 1.
    }

    testDate.setMonth(theMonth); //stores the value in month.


    cout << "Enter a day:"; //prompts the user to enter a value for day.
    int theDay;
    cin >> theDay;
    testDate.setDay(theDay); //stores the value in day.

    cout << "Enter a year:"; //prompts the user to enter a value for year.
    int theYear;
    cin >> theYear;
    testDate.setYear(theYear); //stores the user to enter a value for year.

    testDate.displayDate(); //displays the date.
}
