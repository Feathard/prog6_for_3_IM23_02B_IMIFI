#ifndef POLYNOMIALOPERATIONS_HPP
#define POLYNOMIALOPERATIONS_HPP

#include "polynomiac_basic.hpp"

class PolynomialOperations{
public:


    static polynomial sum (const polynomial& a, const polynomial& b);

    static polynomial minus (const polynomial& a);

    static polynomial dif (const polynomial& a, const polynomial& b);

    static polynomial mult (const polynomial& a, const polynomial& b);

    static polynomial mod(const polynomial& a, const polynomial& b);

    static polynomial div (const polynomial& a, const polynomial& b);

    static polynomial derivative (const polynomial& a);

    static polynomial normalize(const polynomial& p);

    static bool div_ok(const polynomial& a, const polynomial& b);

    static bool degree_equal(const polynomial& a, const polynomial& b);

    static bool divisor_not_null(const polynomial &b);
};




















#endif //POLYNOMIALOPERATIONS_HPP

