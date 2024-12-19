#ifndef POLYNOMIAC_BASIC_HPP
#define POLYNOMIAC_BASIC_HPP

#include <vector>
#include <random>
#include <cmath>
#include <fstream>
#include <iostream>
#include <sstream>

class polynomial
{

    std::vector <double> coeff; // @brief контейнер коэффицентов при слогаемых соответственных степеней
    unsigned deegree; // @brief степень многочлена

    void calculate (void); // метод исчисления степени многочлена | done

public:
    polynomial (void);          /// Конструктор по умолчанию | done
    polynomial (std::istream&); /// Конструктор чтения из потока | done
    polynomial (polynomial &);  /// Конструктор копирования | done
    polynomial (std::initializer_list<double>); /// Конструктор с определением коэффицентов
    polynomial (int range_min, int range_max, unsigned deg); /// Инициализация многочлена степени deg и коэффицентам 
    // * в диапозоне от range_min до range_max | done
    polynomial (unsigned dg);   /// Инициализация с преаллокацией
    polynomial operator+ (polynomial&) const;   /// Сложение многочленов
    polynomial operator- (polynomial&) const;   /// Вычитание многочленов 
    polynomial operator+ (void) const; /// Сложение многочленов
    polynomial operator- (void) const; /// Вычитание многочленов 
    polynomial operator* (polynomial&) const;   /// Произведение многочленов
    polynomial operator/ (polynomial&) const;   /// Деление многочленов (основная часть)
    polynomial operator% (polynomial&) const;   /// Деление многочленов (остаток)
    polynomial derivative(polynomial&) const ;  /// Произваодная многочлена
    polynomial operator= (polynomial&);         /// Присваивание многочлена | done
    bool operator==(polynomial&) const; /// Сравнение многочленов | done
    bool operator!=(polynomial&) const; /// Сравнение многочленов | done
    polynomial operator+=(polynomial&); /// Прибавление многочлена с присваиванием
    polynomial operator-=(polynomial&); /// Вычитание многочлена с присваиванием
    polynomial operator*=(polynomial&); /// Умножение многочленов с присваиванием
    polynomial operator/=(polynomial&); /// Деление многочленов с присваиванием
    polynomial operator%=(polynomial&); /// Остаток от дедения многочленов с присваиванием
    double at (unsigned) const;         /// * Возвращает значение соответствующего коэффицента (аналог геттера) | done
    void set (unsigned, double);       
    void set (std::initializer_list<double>);
    double operator() (double x) const; /// * Значение P(x) | done
    friend unsigned deg (const polynomial&);
    friend std::ostream& operator<< (std::ostream&, const polynomial& obj);
    void special_out (std::ostream& out)const;
    ~polynomial (void);
    friend class PolynomialOperations;
    friend class MenuManager;
};
#endif // POLYNOMIAC_BASIC_HPP