//Nathan Jermann, CSC 144 A, assignment #12, 12-5-18
//Program which does basic arithmetic on rational numbers

#include <string>
#ifndef NRJJRATIONAL_H
#define NRJJRATIONAL_H

class NRJJRational {
private:
    int numerator, denominator;

public:
    NRJJRational (int, int);
    std::string  toRationalString() const;
    double toDecimal();
    NRJJRational add(const NRJJRational&);
    NRJJRational subtract(const NRJJRational&);
    NRJJRational multiply(const NRJJRational&);
    NRJJRational divide(const NRJJRational&);
};

#endif // NRJJRATIONAL_H

/*

    |--------------------------------------------------|
    |                   NRJJRational                   |
    |--------------------------------------------------|
    |   -numerator :int                                |
    |   -denominator :int                              |
    |                                                  |
    |--------------------------------------------------|
    |   <constructor>+NRJJRational(num :int, den :int) |
    |   +add(c:NRJJRatonal &):NRJJRational             |
    |   +subtract(c:NRJJRational &):NRJJRational       |
    |   +multiply(c:NRJJRational &):NRJJRational       |
    |   +divide(c:NRJJRational &):NRJJRational         |
    |   +toRationalString() :string                    |
    |   +toDecimal() :double                           |
    |                                                  |
    |--------------------------------------------------|

*/
