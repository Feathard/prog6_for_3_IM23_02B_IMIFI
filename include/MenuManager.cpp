#include "MenuManager.hpp"
// ����� ��� ������� ����
void MenuManager::run() {
    int choice; // ���������� ��� ������ �������� ������������
    polynomial poly1, poly2, result; // ������� ���������
   // PolynomialOperations operations; // ������ ��� �������� � ����������

    // ���� ��� ����������� ���� � ��������� ����������������� �����
    do {
        // ����� ����
        std::cout << "����:\n";
        std::cout << "1. ������� ������� 1\n";
        std::cout << "2. ������� ������� 2\n";
        std::cout << "3. ������� ������� 1\n";
        std::cout << "4. ������� ������� 2\n";
        std::cout << "5. �������� ���������\n";
        std::cout << "6. ��������� ���������\n";
        std::cout << "7. ��������� ���������\n";
        std::cout << "8. ������� ���������\n";
        std::cout << "9. ���������� ����������� �������� 1\n";
        std::cout << "10. �����\n";
        std::cout << "�������� ��������: ";
        std::cin >> choice; // ��������� ����� ������������

        // ��������� ������ ������������
        switch (choice) {
        case 1:
            createPolynomial(poly1); // ������ ������� 1
            break;
        case 2:
            createPolynomial(poly2); // ������ ������� 2
            break;
        case 3:
            std::cout << "������� 1: " << poly1 << std::endl; // ������� ������� 1
            break;
        case 4:
            std::cout << "������� 2: " << poly2 << std::endl; // ������� ������� 2
            break;
        case 5:
            //result = operations.add(poly1, poly2); // ��������� ��������
            std::cout << "�����: " << result << std::endl;
            break;
        case 6:
           // result = operations.subtract(poly1, poly2); // �������� ��������
            std::cout << "��������: " << result << std::endl;
            break;
        case 7:
            //result = operations.multiply(poly1, poly2); // �������� ��������
            std::cout << "������������: " << result << std::endl;
            break;
        case 8:
            try 
            {
             //   result = operations.divide(poly1, poly2); // ����� ��������
                std::cout << "�������: " << result << std::endl;
            }
            catch (const std::invalid_argument& e) { // ��������� ������ �������
                std::cerr << "������: " << e.what() << std::endl;
            }
            break;
        case 9:
            //result = operations.derivative(poly1); // ��������� ����������� �������� 1
            std::cout << "����������� �������� 1: " << result << std::endl;
            break;
        case 10:
            std::cout << "����� �� ���������." << std::endl; // ���������� ������ ���������
            break;
        default:
            std::cout << "������������ �����. ���������� �����." << std::endl; // ������ ��� ������������ ������
        }
    } while (choice != 10); // ���� ������������, ���� �� ������� �����
}

// ����� ��� �������� ��������
void MenuManager::createPolynomial(polynomial x) {
    int degree; // ���������� ��� ������� ��������
    double g;
    std::cout << "������� ������� ��������: ";
    std::cin >> degree; // ��������� ������� ������� ��������
   

    // ������������ ������ ��� �������� �������������
    std::vector<double> coefficients(degree + 1);
    std::cout << "������� ������������ (�� �������� � ��������):\n";
    for (int i = degree; i >= 0; --i) 
    {
        std::cout << "a[" << i << "]: ";
        std::cin >> g;
        coefficients[i] = g;
    }

    // ������ ������� � �������� �������� � ��������������
    polynomial poly(coefficients);
    x = poly;// ���������� ��������� �������
}