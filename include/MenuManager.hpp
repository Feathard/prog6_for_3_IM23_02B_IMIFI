#ifndef MENUMANAGER_HPP
#define MENUMANAGER_HPP

#include <iostream>
#include "polynomiac_basic.hpp"         // Подключаем класс Полинома
//#include "вставить сюда.h" // Подключаем класс Операций Над полиномами

// Класс MenuManager для управления пользовательским интерфейсом
class MenuManager {
public:
    // Метод для запуска меню
    void run(); // Объявляем метод run()
    // Метод для создания полинома
    void createPolynomial(polynomial x); // Объявляем метод createPolynomial()
};

#endif // MENUMANAGER_HPP