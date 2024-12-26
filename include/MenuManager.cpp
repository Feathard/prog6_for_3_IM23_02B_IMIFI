#include "MenuManager.hpp"

// Метод для запуска меню
void MenuManager::run() {
    int choice;

    // Основной цикл для управления меню
    for(;;)
    {
        std::cout << "\n     -=-PoLyMaNiAc-=-" << std::endl;
        std::cout << "1. Создать рандомный полином\n"
                  << "2. Ввести новый полином\n"
                  << "3. Ввести полином из файла\n"
                  << "4. Удалить полином\n"
                  << "5. Вывести список полиномов\n"
                  << "6. Операции над полиномами\n"
                  << "7. Очистить экран\n"
                  << "0. Выход\n"
                  << "Выберете операцию: ";
        std::cin >> choice; // Считываем выбор пользователя

        switch (choice) 
        {
            case 1: 
            {

                int min, max, degree;
                std::cout << "Введите (min max degree): ";
                std::cin >> min >> max >> degree; // Считываем параметры для случайного полинома
                if (min > max)
                {
                    std::cout << "Ошибка! min должно быть не больше max\nВыход в главное меню" << std::endl;
                    return;
                }
                while(degree < 0)
                {
                    std::cout << "Степень многочлена должна быть неотрицаиелным числом. Перевведите:";
                    std::cin >> degree;
                }
                std::cout << "Добавить полином степени " << degree << " с коэффициэнтами в пределах от " << min << " до " << max << "?" <<std::endl;
                std::cout << "[Y/N]";
                char ch;
                std::cin >> ch;
                if( ch == 'Y' or ch == 'y' )
                {
                    addRandomPolynomial(min, max, degree); // Добавляем случайный полином
                    std::cout << "Полином добавлен" << std::endl;
                }
                else 
                {
                    std::cout << "Отменено" << std::endl;
                }
            }
                break;
            case 2:
                addPolynomialFromInput(); // Добавляем полином из входных данных
                break;
            case 3:
            //    addPolynomialFromFile(); // Добавляем полином из файла
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
            case 7:
                system("clear");
                break;
            case 0:
                return; // Выход из программы
            default:
                std::cout << "Неверный ввод\n"; // Обработка некорректного ввода
        }
    }
}

// Метод для добавления случайного полинома
void MenuManager::addRandomPolynomial(int range_min, int range_max, unsigned degree)
{
    polynomials.emplace_back(range_min, range_max, degree); // Добавляем новый полином в вектор
}

void MenuManager::addPolynomialFromInput()
{
    std::string input;
    std::cout << "Введите коэффициенты полинома, разделенные пробелами: ";
    std::cin.ignore(); // Игнорируем оставшийся символ новой строки
    std::getline(std::cin, input); // Считываем всю строку

    std::istringstream iss(input);
    std::vector<double> coefficients;
    double coefficient;

    // Считываем коэффициенты из строки
    while (iss >> coefficient)
    {
        coefficients.push_back(coefficient);
    }

    std::cout << "Будет добавлен полином " << polynomial(coefficients) << std::endl;
    std::cout << "Вы хотите добавить этот полином в список? [Y/N] ";
    char choise;
    std::cin >> choise;
    // Добавляем полином в вектор
    if( choise == 'Y' or choise == 'y' )
    {
        polynomials.emplace_back(coefficients);
        std::cout << "\nПолином успешно добален в список" << std::endl;
    }
    else
    {
        std::cout << "\nДобавление отменено" << std::endl;
    }
}

// Метод для удаления полинома
void MenuManager::removePolynomial() 
{
    if(polynomials.empty())
    {
        std::cout << "Нет полиномов для удаления, так как список полиномов пуст" << std::endl;
        return;
    }

    listPolynomials();

    std::cout << "Введите номер полинома для удаления: ";
    int index;
    std::cin >> index;
    // Проверяем, что индекс находится в допустимом диапазоне
    if (index > 0 && index <= polynomials.size()) 
    {
        polynomials.erase(polynomials.begin() + index - 1); // Удаляем полином из вектора
        std::cout << "Полином " << index << " удален.\n";
    } else {
        std::cout << "Некорректный номер полинома.\n"; // Сообщение об ошибке
    }
}

// Метод для вывода списка полиномов
void MenuManager::listPolynomials() 
{
    if(polynomials.empty())
    {
        std::cout << "Cписок полиномов пуст" << std::endl;
        return;
    }

    std::cout << "Полиномы в списке:" << std::endl;

    for (size_t i = 0; i < polynomials.size(); ++i)
    {
        std::cout << "Полином " << i + 1 << ": "; // Нумеруем полиномы
        std::cout << polynomials[i] << std::endl; // Выводим полином
    }
}

// Метод для выполнения операций над полиномами
void MenuManager::performOperations()
{
    if(polynomials.empty())
    {
        std::cout << "В списке нет полиномов для совершения операций над ними" << std::endl;
        return;
    }

    listPolynomials();

    int index1, index2;
    std::cout << "Введите номер первого полинома: ";
    std::cin >> index1; // Считываем номер первого полинома
    std::cout << "Введите номер второго полинома: ";
    std::cin >> index2; // Считываем номер второго полинома

    // Проверяем, что индексы находятся в допустимом диапазоне
    if (index1 > 0 && index1 <= polynomials.size() && index2 > 0 && index2 <= polynomials.size()) 
    {
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
    else 
    {
        std::cout << "Некорректные номера полиномов.\n"; // Сообщение об ошибке при некорректном вводе
    }
}
