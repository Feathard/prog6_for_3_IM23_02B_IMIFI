#ifndef MENUMANAGER_HPP
#define MENUMANAGER_HPP

#include <iostream>
#include "polynomiac_basic.hpp"         // Подключаем класс Полинома
//#include "вставить сюда.h" // Подключаем класс Операций Над полиномами

// Класс MenuManager для управления полиномами
class MenuManager {
public:
    void run(); // Метод запуска интерфейса управления

private:
    std::vector<polynomial> polynomials; // Вектор для хранения полиномов

    void addRandomPolynomial(int range_min, int range_max, unsigned degree); // Добавление случайного полинома
    void addPolynomialFromInput(); // Добавление полинома из входных данных
    void addPolynomialFromFile(); // Добавление полинома из файла
    void removePolynomial(); // Удаление полинома
    void listPolynomials(); // Вывод списка полиномов
    void performOperations(); // Выполнение операций над полиномами
};

#endif // MENUMANAGER_HPP