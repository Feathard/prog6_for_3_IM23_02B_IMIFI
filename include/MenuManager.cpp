#include "MenuManager.hpp"
// Метод для запуска меню
void MenuManager::run() {
    int choice; // Переменная для выбора действия пользователя
    polynomial poly1, poly2, result; // Объекты полиномов
   // PolynomialOperations operations; // Объект для операций с полиномами

    // Цикл для отображения меню и обработки пользовательского ввода
    do {
        // Вывод меню
        std::cout << "Меню:\n";
        std::cout << "1. Создать полином 1\n";
        std::cout << "2. Создать полином 2\n";
        std::cout << "3. Вывести полином 1\n";
        std::cout << "4. Вывести полином 2\n";
        std::cout << "5. Сложение полиномов\n";
        std::cout << "6. Вычитание полиномов\n";
        std::cout << "7. Умножение полиномов\n";
        std::cout << "8. Деление полиномов\n";
        std::cout << "9. Вычисление производной полинома 1\n";
        std::cout << "10. Выход\n";
        std::cout << "Выберите действие: ";
        std::cin >> choice; // Считываем выбор пользователя

        // Обработка выбора пользователя
        switch (choice) {
        case 1:
            createPolynomial(poly1); // Создаём полином 1
            break;
        case 2:
            createPolynomial(poly2); // Создаём полином 2
            break;
        case 3:
            std::cout << "Полином 1: " << poly1 << std::endl; // Выводим полином 1
            break;
        case 4:
            std::cout << "Полином 2: " << poly2 << std::endl; // Выводим полином 2
            break;
        case 5:
            //result = operations.add(poly1, poly2); // Суммируем полиномы
            std::cout << "Сумма: " << result << std::endl;
            break;
        case 6:
           // result = operations.subtract(poly1, poly2); // Вычитаем полиномы
            std::cout << "Разность: " << result << std::endl;
            break;
        case 7:
            //result = operations.multiply(poly1, poly2); // Умножаем полиномы
            std::cout << "Произведение: " << result << std::endl;
            break;
        case 8:
            try 
            {
             //   result = operations.divide(poly1, poly2); // Делим полиномы
                std::cout << "Частное: " << result << std::endl;
            }
            catch (const std::invalid_argument& e) { // Обработка ошибок деления
                std::cerr << "Ошибка: " << e.what() << std::endl;
            }
            break;
        case 9:
            //result = operations.derivative(poly1); // Вычисляем производную полинома 1
            std::cout << "Производная полинома 1: " << result << std::endl;
            break;
        case 10:
            std::cout << "Выход из программы." << std::endl; // Завершение работы программы
            break;
        default:
            std::cout << "Некорректный выбор. Попробуйте снова." << std::endl; // Ошибка при некорректном выборе
        }
    } while (choice != 10); // Цикл продолжается, пока не выбрали выход
}

// Метод для создания полинома
void MenuManager::createPolynomial(polynomial x) {
    int degree; // Переменные для степени полинома
    double g;
    std::cout << "Введите степень полинома: ";
    std::cin >> degree; // Считываем старшую степень полинома
   

    // Динамический массив для хранения коэффициентов
    std::vector<double> coefficients(degree + 1);
    std::cout << "Введите коэффициенты (от младшего к старшему):\n";
    for (int i = degree; i >= 0; --i) 
    {
        std::cout << "a[" << i << "]: ";
        std::cin >> g;
        coefficients[i] = g;
    }

    // Создаём полином с заданной степенью и коэффициентами
    polynomial poly(coefficients);
    x = poly;// Возвращаем созданный полином
}