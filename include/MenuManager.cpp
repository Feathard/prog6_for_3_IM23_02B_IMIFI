#include "MenuManager.h"
// ����� ��� ������� ����
void MenuManager::run() {
    int choice;

    // �������� ���� ��� ���������� ����
    while (true) {
        std::cout << "1. ������� ��������� �������\n"
            << "2. ������ ����� �������\n"
            << "3. ������ ������� �� �����\n"
            << "4. ������� �������\n"
            << "5. ������� ������ ���������\n"
            << "6. �������� ��� ����������\n"
            << "0. �����\n"
            << "�������� ��������: ";
        std::cin >> choice; // ��������� ����� ������������

        switch (choice) {
        case 1: {
            int min, max, degree;
            std::cout << "������� (min max degree): ";
            std::cin >> min >> max >> degree; // ��������� ��������� ��� ���������� ��������
            addRandomPolynomial(min, max, degree); // ��������� ��������� �������
            break;
        }
        case 2:
            addPolynomialFromInput(); // ��������� ������� �� ������� ������
            break;
        case 3:
            addPolynomialFromFile(); // ��������� ������� �� �����
            break;
        case 4:
            removePolynomial(); // ������� �������
            break;
        case 5:
            listPolynomials(); // ������� ������ ���������
            break;
        case 6:
            performOperations(); // ��������� �������� ��� ����������
            break;
        case 0:
            return; // ����� �� ���������
        default:
            std::cout << "�������� ����\n"; // ��������� ������������� �����
        }
    }
}

// ����� ��� ���������� ���������� ��������
void MenuManager::addRandomPolynomial(int range_min, int range_max, unsigned degree) {
    polynomials.emplace_back(range_min, range_max, degree); // ��������� ����� ������� � ������
}

// ����� ��� ���������� �������� �� ������� ������
void MenuManager::addPolynomialFromInput() {
    // ����� ������ ���� ���������� ���������� �������� �� ������� ������
}

// ����� ��� ���������� �������� �� �����
void MenuManager::addPolynomialFromFile() {
    std::string filename;
    std::cout << "���������� �����: "; // ����������� ��� �����
    std::cin >> filename;
    polynomials.emplace_back(filename); // ��������� ������� �� ����� � ������
}

// ����� ��� �������� ��������
void MenuManager::removePolynomial() {
    // ����� ������ ���� ���������� �������� �������� �� �������
}

// ����� ��� ������ ������ ���������
void MenuManager::listPolynomials() {
    for (size_t i = 0; i < polynomials.size(); ++i) {
        std::cout << "������� " << i + 1 << ": "; // �������� ��������
        polynomials[i].print(); // ������� �������
    }
}

// ����� ��� ���������� �������� ��� ����������
void MenuManager::performOperations() {
    int index1, index2;
    std::cout << "������� ����� ������� ��������: ";
    std::cin >> index1; // ��������� ����� ������� ��������
    std::cout << "������� ����� ������� ��������: ";
    std::cin >> index2; // ��������� ����� ������� ��������

    // ���������, ��� ������� ��������� � ���������� ���������
    if (index1 > 0 && index1 <= polynomials.size() && index2 > 0 && index2 <= polynomials.size()) {
        polynomial p1 = polynomials[index1 - 1]; // �������� ������ �������
        polynomial p2 = polynomials[index2 - 1]; // �������� ������ �������

        std::cout << "��������� ��������:\n";
        (p1 + p2).print(); // ������� ��������� �������� ��������� �� ����

        std::cout << "��������� ���������:\n";
        (p1 - p2).print(); // ������� ��������� ��������� ���������

        std::cout << "��������� ���������:\n";
        (p1 * p2).print(); // ������� ��������� ��������� ���������

        if (p2 != polynomial({ 0 })) { // �������� �� ������� �� ����
            std::cout << "��������� �������:\n";
            (p1 / p2).print(); // ������� ��������� ������� ���������
        }
        else {
            std::cout << "������� �� ���� ����������.\n"; // ��������� �� ������
        }

        std::cout << "����������� ������� ��������:\n";
        p1.derivative().print(); // ������� ����������� ������� ��������
    }
    else {
        std::cout << "������������ ������ ���������.\n"; // ��������� �� ������ ��� ������������ �����
    }


    /* 
    * 
    * �� ������ ������ �������� ��� ���� ��� ���� ����
    * 
    void polynomial::print() const {
    for (int i = degree; i >= 0; --i) {
        std::cout << coeff[i]; // ������� �����������

        // ���� ������� ������ 0, ��������� "x^" � �������
        if (i > 0) {
            std::cout << "x^" << i;
        }

        // ���� ��� �� ��������� ����, ��������� " + "
        if (i > 0) {
            std::cout << " + ";
        }
    }
    std::cout << std::endl; // ������� �� ����� ������
}
    */