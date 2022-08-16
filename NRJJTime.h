//Nathan Jermann, CSC 145 A, assignment #2, 2-8-19
//Program which uses operator overloading on a time class
#include <string>
#include <sstream>
#include <iostream>
#ifndef NRJJTIME_H
#define NRJJTIME_H


class NRJJTime {

    public:
        explicit NRJJTime(int = 0, int = 0, int = 0);

        void setTime(int, int, int);//set hour, minute, second
        void setHour(int);//set hour
        void setMinute(int);//set minute
        void setSecond(int);//set second

        unsigned int getHour() const;//return hour
        unsigned int getMinute() const;//return minute
        unsigned int getSecond() const;//return second

        std::string toUniversalString() const;//24 hour time format string
        std::string toStandardString() const;//12 hour time format string

        friend std::ostream& operator<<(std::ostream&, const NRJJTime&);//overloads << to let an object output a time string
        friend std::istream& operator>>(std::istream&, NRJJTime&);//overloads >> to let an object intake a string
        friend void operator<(NRJJTime&, NRJJTime&);//overloads < to check if one object is less than another
        friend void operator==(NRJJTime&, NRJJTime&);//overloads == to check if two objects are equal to each other
        NRJJTime& operator= (const NRJJTime &time);//overloads = to assign one object to another

    private:
        unsigned int hour{0};//0-23
        unsigned int minute{0};//0-59
        unsigned int second{0};//0-59
};

#endif // NRJJTIME_H

/*

    |------------------------------------------------------------------|
    |                           NRJJTime                               |
    |------------------------------------------------------------------|
    |   -Hour :int                                                     |
    |   -Minute :int                                                   |
    |   -second :int                                                   |
    |                                                                  |
    |------------------------------------------------------------------|
    |   <constructor>+NRJJTime(hour :int, minute :int, second :int)    |
    |   +setTime(h :int, m :int, s :int)                               |
    |   +setHour(h :int)                                               |
    |   +setMinute(m :int)                                             |
    |   +setSecond(s :int)                                             |
    |   +getHour():unsigned int                                        |
    |   +getMinute():unsigned int                                      |
    |   +getSecond():unsigned int                                      |
    |   +toUniversalString() :string                                   |
    |   +toStandardString() :string                                    |
    |   +<<friend>>operator<<(output:ostream, time :NRJJTime) :ostream |
    |   +<<friend>>operator>>(input :istream, time :NRJJTime) :istream |
    |   +<<friend>>operator<(t1 :NRJJTime, t2 :NRJJTime)               |
    |   +<<friend>>operator==(t1 :NRJJTime, t2 :NRJJTime)              |
    |   +<<friend>>operator=(time :NRJJTime) :NRJJTime                 |
    |                                                                  |
    |------------------------------------------------------------------|

*/


