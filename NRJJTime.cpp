//Nathan Jermann, CSC 145 A, assignment #2, 2-9-19
//Program which implements the definitions in "NRJJTime.h"
#include "NRJJTime.h"
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include <string>
using namespace std;

NRJJTime::NRJJTime(int hour, int minute, int second) {//constructor initializes each data member
    setTime(hour, minute, second);
}
//set new time value using universal time
void NRJJTime::setTime(int h, int m, int s)  {
    setHour(h);//set private field hour
    setMinute(m);//set private field minute
    setSecond(s);//set private field second
}
//set hour value
void NRJJTime::setHour(int h) {
    if (h >= 0 && h < 24) {
        hour = h;
    }//checks to make sure proper time is entered
    else {
        throw invalid_argument("hour must be 0-23");
    }
}
//set minute value
void NRJJTime::setMinute(int m) {
    if (m >= 0 && m < 60) {
        minute = m;
    }//checks to make sure proper time is entered
    else {
        throw invalid_argument("minute must be 0-59");
    }
}
//set second value
void NRJJTime::setSecond(int s) {
    if (s >= 0 && s < 60) {
        second = s;
    }//checks to make sure proper time is entered
    else {
        throw invalid_argument("second must be 0-59");
    }
}
//return hour value
unsigned int NRJJTime::getHour() const {
    return hour;
}
//return minute value
unsigned int NRJJTime::getMinute() const {
    return minute;
}
//return second value
unsigned int NRJJTime::getSecond() const {
    return second;
}
//return Time as  string in universal-time format (HH:MM:SS)
string NRJJTime::toUniversalString() const {
    ostringstream output;
    output << setfill('0') << setw(2) << getHour() << ":"
           << setw(2) << getMinute() << ":" << setw(2) << getSecond();
    return output.str();
}
//return Time as string in standard-time format (HH:MM:SS AM or PM)
string NRJJTime::toStandardString() const {
    ostringstream output;
    output << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12)
           <<":" << setfill('0') << setw(2) << getMinute() << ":" << setw(2)
           << getSecond() << (hour < 12 ? " AM" : " PM");
    return output.str();
}
//overloads << to let an object output a time string
ostream& operator<<(ostream& output, const NRJJTime& time){
    output << time.toStandardString();
    return output;
}
//overloads >> to let an object intake a string
istream& operator>>(istream& input, NRJJTime& time) {
    input >> setw(2) >> time.hour;
    input.ignore();
    input >> setw(2) >> time.minute;
    input.ignore();
    input >> setw(2) >> time.second;
    return input;
}
//overloads < to check if one object is less than another
void operator<(NRJJTime& t1, NRJJTime& t2) {
    if (t1.getHour() < t2.getHour()){
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
//overloads == to check if two objects are equal to each other
void operator==(NRJJTime& t1, NRJJTime& t2) {
    if(t1.getHour() == t2.getHour() && t1.getMinute() == t2.getMinute() && t1.getSecond() == t2.getSecond()) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
//overloads = to assign one object to another
NRJJTime& NRJJTime::operator=(const NRJJTime &time){
    hour = time.hour;
    minute = time.minute;
    second = time.second;
    return *this;
}

/*

ostream& operator<<(ostream& output, const NRJJTime& time)
    sets "output" equal to the object "time" as a string with toStandardString
    return output

istream& operator>>(istream& input, NRJJTime& time)
    set hour equal to the first 2 characters in the string
    ignore the next space
    set minute equal to the next 2 characters in the string
    ignore the next space
    set second equal to the next 2 characters in the string

void operator<(NRJJTime& t1, NRJJTime& t2)
    if hour from object one equal to hour from object 2
        print "true"
    else
        print "false"

void operator==(NRJJTime& t1, NRJJTime& t2)
    if object ones hour, minute, and second are equal to objects twos hour, minute, and second
        print "true"
    else
        print "false"

NRJJTime& NRJJTime::operator=(const NRJJTime &time)
    set object twos hour,minute, and second equal to object ones hour, minute, and second
    return the value for time which is now changed cause it was a reference (this* pointer)

*/

