#include <iostream>
#include <vector>

#include "include/polynomiac_basic.hpp"
#define POLYNOMIAC_BASIC_HPP_OPERATIONS

int main (int argc, char ** argv)
{
    system("clear");
    polynomial P({2, 1});
    polynomial Q({44, 12, 8, 54, 88, 32});
    polynomial S = x_monomial (4, 077);
    std::cout << "deg:" << deg(S) << std::endl << S << " " << std::endl;
    return 0;
}