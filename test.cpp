#include <iostream>
#include <vector>

#include "include/polynomiac_basic.hpp"

int main (int argc, char ** argv)
{
    system("clear");
    std::ofstream fout ("../p.csv", std::ios::app);
    polynomial P({0xaaa, 44.4, 2});
    std::cout << deg(P) << std::endl;
    std::cout << P << std::endl;
    P.special_out(std::cout);
    P.special_out(fout);
    return 0;
}