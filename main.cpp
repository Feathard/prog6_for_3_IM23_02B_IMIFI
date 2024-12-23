#include <iostream>
#include "include/polynomiac_basic.hpp"
int main(int, char**)
{
    //TODO : Поочерёдно показать здесь функционал классов
    polynomial P{1, 23, 12};
    std::cout << P << std::endl;
    P.special_out(std::cout);
}
