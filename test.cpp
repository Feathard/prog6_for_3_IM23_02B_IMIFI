
#include <polynomiac_basic.hpp>
#include <PolynomialOperations.hpp>

int main (int argc, char ** argv)
{
    system("clear");
    polynomial p1, p2;
    PolynomialOperations po;

    std::cout << std::endl << "Тест деления" << std::endl;

    for(size_t index = 0; index < 10; ++index)
    {
        p1 = polynomial(-100, 100, index);
        p2 = polynomial(-100, 100, index);
        std::cout << "Тест " << index << ":" <<std::endl;
        std::cout << p1 << std::endl;
        std::cout << p2 << std::endl;
        std::cout << p1/p2 << " + (ост.: " << p1%p2 << ")" << std::endl;
        std::cout << std::string(10, '-') << std::endl;
    }
    // Операторы +, -, /, %, / работают полностью аналогично, как работают соответствующие методы класса
    // PolynomialOperation

    std::cout << "Тест сложения" << std::endl;



    for(size_t index = 0; index < 10; ++index)
    {
        p1 = polynomial(-100, 100, index);
        p2 = polynomial(-100, 100, index);
        std::cout << "Тест " << index << ":" <<std::endl;
        std::cout << p1 << std::endl;
        std::cout << p2 << std::endl;
        std::cout << p1+p2 << std::endl;
        std::cout << std::string(10, '-') << std::endl; 
    }

    std::cout << std::endl << "Тест вычитания" << std::endl;

    for(size_t index = 0; index < 10; ++index)
    {
        p1 = polynomial(-100, 100, index);
        p2 = polynomial(-100, 100, index);
        std::cout << "Тест " << index << ":" <<std::endl;
        std::cout << p1 << std::endl;
        std::cout << p2 << std::endl;
        std::cout << p1-p2 << std::endl;
        std::cout << std::string(10, '-') << std::endl; 
    }

    std::cout << "Тест умножения" << std::endl;

    for(size_t index = 0; index < 10; ++index)
    {
        p1 = polynomial(-100, 100, index);
        p2 = polynomial(-100, 100, index);
        std::cout << "Тест " << index << ":" <<std::endl;
        std::cout << p1 << std::endl;
        std::cout << p2 << std::endl;
        std::cout << p1*p2 << std::endl;
        std::cout << std::string(10, '-') << std::endl; 
    }

    std::cout << "Тест взятия противоположного" << std::endl;

    for(size_t index = 0; index < 10; ++index)
    {
        p1 = polynomial(-100, 100, index);
        std::cout << "Тест " << index << ":" <<std::endl;
        std::cout << p1 << std::endl;
        std::cout << -p1 << std::endl;
        std::cout << std::string(10, '-') << std::endl; 
    }

    std::cout << "Тест взятия производного" << std::endl;

    for(size_t index = 0; index < 10; ++index)
    {
        p1 = polynomial(-100, 100, index);
        std::cout << "Тест " << index << ":" <<std::endl;
        std::cout << p1 << std::endl;
        std::cout << po.derivative(p1) << std::endl;
        std::cout << std::string(10, '-') << std::endl; 
    }
    return 0;
}