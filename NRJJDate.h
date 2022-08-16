//Nathan Jermann, CSC 144 A, assignment #3, 9-26-18
//Class which stores a date and has functions to modify the date and retrieve the date.

class Date {


public:

    Date(int dateMonth, int dateDay, int dateYear) // Date constructor that sets an initial value to the date member.
        : month(dateMonth), day(dateDay), year(dateYear) {

        if (dateMonth > 12) { // checks to make sure month is less than 12,
            dateMonth = 1; //otherwise month is set to 1.
        }

        if (dateMonth < 1) { // checks to make sure month is greater than 0,
            dateMonth = 1; //otherwise month is set to 1.
        }
    }

    void setMonth(int dateMonth) { //function which allows the user to set the month.
        month = dateMonth;
    }

    void setDay(int dateDay) { //function which allows the user to set the day.
        day = dateDay;
    }

    void setYear(int dateYear) { //function which allows the user to set the year.
        year = dateYear;
    }

    int getMonth() const { //function which returns the value stored in month.
        return month;
    }

    int getDay() const { //function which returns the value stored in day.
        return day;
    }

    int getYear() const { //function which returns the value stored in year.
        return year;
    }

    void displayDate() {
        std::cout << "The date is: " << month << "/" << day << "/" << year; //function which displays the date.
    }

private:

    int month{0}; //date members are initialized to 0.
    int day{0};
    int year{0};

};

/*
    ---------------------------------------------------------------------
    /                               Date                                /
    --------------------------------------------------------------------/
    / -month :int                                                       /
    / -day :int                                                         /
    / -year :int                                                        /
    --------------------------------------------------------------------/
    / <<constructor>> Date(dateMonth :int, dateDay :int, dateYear :int) /
    / +setMonth(dateMonth :int)                                         /
    / +setDay (dateDay :int)                                            /
    / +setYear (dateYear :int)                                          /
    / +getMonth() :int                                                  /
    / +getDay() :int                                                    /
    / +getYear() :int                                                   /
    / +displayDate()                                                    /
    ---------------------------------------------------------------------
*/

