#include <iostream>
#include <vector>

#include "include/polynomiac_basic.hpp"
#include "include/PolynomialOperations.hpp"
int main (int argc, char ** argv)
{
    system("clear");
    auto p = polynomial{1,2,3,4,5};
    auto q = polynomial{1,2};
    PolynomialOperations po;
    std::cout << p/q << std::endl;
    return 0;
}