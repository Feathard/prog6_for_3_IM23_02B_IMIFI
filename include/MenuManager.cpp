#include "MenuManager.hpp"

// Метод для запуска меню
void MenuManager::run() {
    int choice;

    // Основной цикл для управления меню
    while (true) {
        std::cout << "1. Создать рандомный полином\n"
                  << "2. Ввести новый полином\n"
                  << "3. Ввести полином из файла\n"
                  << "4. Удалить полином\n"
                  << "5. Вывести список полиномов\n"
                  << "6. Операции над полиномами\n"
                  << "0. Выход\n"
                  << "Выберете операцию: ";
        std::cin >> choice; // Считываем выбор пользователя

        switch (choice) {
            case 1: {
                int min, max, degree;
                std::cout << "Введите (min max degree): ";
                std::cin >> min >> max >> degree; // Считываем параметры для случайного полинома
                addRandomPolynomial(min, max, degree); // Добавляем случайный полином
                break;
            }
            case 2:
                addPolynomialFromInput(); // Добавляем полином из входных данных
                break;
            case 3:
                addPolynomialFromFile(); // Добавляем полином из файла
                break;
            case 4:
                removePolynomial(); // Удаляем полином
                break;
            case 5:
                listPolynomials(); // Выводим список полиномов
                break;
            case 6:
                performOperations(); // Выполняем операции над полиномами
                break;
            case 0:
                return; // Выход из программы
            default:
                std::cout << "Неверный ввод\n"; // Обработка некорректного ввода
        }
    }
}

// Метод для добавления случайного полинома
void MenuManager::addRandomPolynomial(int range_min, int range_max, unsigned degree) {
    polynomials.emplace_back(range_min, range_max, degree); // Добавляем новый полином в вектор
}

// Метод для добавления полинома из входных данных
void MenuManager::addPolynomialFromInput() {
    // Здесь должна быть реализация добавления полинома из входных данных
}



// Метод для удаления полинома
void MenuManager::removePolynomial() {
    // Здесь должна быть реализация удаления полинома из вектора
}

// Метод для вывода списка полиномов
void MenuManager::listPolynomials() {
    for (size_t i = 0; i < polynomials.size(); ++i) {
        std::cout << "Полином " << i + 1 << ": "; // Нумеруем полиномы
        std::cout << polynomials[i] << std::endl; // Выводим полином
    }
}

// Метод для выполнения операций над полиномами
void MenuManager::performOperations() {
    int index1, index2;
    std::cout << "Введите номер первого полинома: ";
    std::cin >> index1; // Считываем номер первого полинома
    std::cout << "Введите номер второго полинома: ";
    std::cin >> index2; // Считываем номер второго полинома

    // Проверяем, что индексы находятся в допустимом диапазоне
    if (index1 > 0 && index1 <= polynomials.size() && index2 > 0 && index2 <= polynomials.size()) {
        polynomial p1 = polynomials[index1 - 1]; // Получаем первый полином
        polynomial p2 = polynomials[index2 - 1]; // Получаем второй полином

        std::cout << "Результат сложения:\n";
        std::cout << (p1 + p2) << std::endl; // Выводим результат сложения полиномов см ниже

        std::cout << "Результат вычитания:\n";
        std::cout << (p1 - p2) << std::endl; // Выводим результат вычитания полиномов

        std::cout << "Результат умножения:\n";
        std::cout << (p1 * p2) << std::endl; // Выводим результат умножения полиномов

        if (p2 != polynomial({ 0 })) { // Проверка на деление на ноль
            std::cout << "Результат деления:\n";
            std::cout << (p1 / p2) << std::endl; // Выводим результат деления полиномов
        }
        else {
            std::cout << "Деление на ноль невозможно.\n"; // Сообщение об ошибке
        }
        std::cout << "Производная первого полинома:\n";
        std::cout << p1.derivative() << std::endl; // Выводим производную первого полинома
    }
    else {
        std::cout << "Некорректные номера полиномов.\n"; // Сообщение об ошибке при некорректном вводе
    }
}
