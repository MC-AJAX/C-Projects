//Nathan Jermann, CSC 145 A, assignment #1, 1-23-19
//Program which does basic arithmetic with complex numbers
#include <string>
#ifndef NRJJCOMPLEX_H
#define NRJJCOMPLEX_H


class NRJJComplex
{
    public:
        NRJJComplex(double, double);
        NRJJComplex(const NRJJComplex&);
        NRJJComplex add(const NRJJComplex&);
        NRJJComplex subtract(const NRJJComplex&);
        NRJJComplex multiply(const NRJJComplex&);
        std::string toString() const;
        NRJJComplex modulus1();
        bool greaterThen(const NRJJComplex&);

    private:
        double real, imaginary;
};

#endif // NRJJCOMPLEX_H

/*

    |------------------------------------------------------------------|
    |                           NRJJComplex                            |
    |------------------------------------------------------------------|
    |   -real :double                                                  |
    |   -imaginary :double                                             |
    |                                                                  |
    |------------------------------------------------------------------|
    |   <constructor>+NRJJComplex(myReal :double, myImaginary :double) |
    |   <constructor>+NRJJComplex(c:NRJJComplex &)                     |
    |   +add(c:NRJJComplex &):NRJJComplex                              |
    |   +subtract(c:NRJJComplex &):NRJJComplex                         |
    |   +multiply(c:NRJJComplex &):NRJJComplex                         |
    |   +toString() :string                                            |
    |   +modulus1() ;NRJJComplex                                       |
    |   +greaterThen(c:NRJJComplex &):NRJJComplex                      |
    |                                                                  |
    |                                                                  |
    |------------------------------------------------------------------|

*/
