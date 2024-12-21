#include <iostream>
#include <vector>


#include "include/polynomiac_basic.hpp"

int main (int argc, char ** argv)
{
    system("clear");
    polynomial Q{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    for(unsigned index = 0; index < 15; ++index)
    {
        std::cout << std::endl << Q << " " << std::endl;
        Q += polynomial{2};
    }
    return 0;
}