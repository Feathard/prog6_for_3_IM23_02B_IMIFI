#ifndef MENUMANAGER_HPP
#define MENUMANAGER_HPP

#include <iostream>
#include <sstream>
#include <algorithm>
#include "polynomiac_basic.hpp"         // ���������� ����� ��������
//#include "�������� ����.h" // ���������� ����� �������� ��� ����������

// ����� MenuManager ��� ���������� ����������
class MenuManager {
public:
    void run(); // ����� ������� ���������� ����������

private:
    std::vector<polynomial> polynomials; // ������ ��� �������� ���������

    void addRandomPolynomial(int range_min, int range_max, unsigned degree); // ���������� ���������� ��������
    void addPolynomialsFromFile(); // ������ ��������� �� �����
    void addPolynomialFromInput(); // ���������� �������� �� ������� ������
    void removePolynomial(); // �������� ��������
    void listPolynomials(); // ����� ������ ���������
    void performOperations(); // ���������� �������� ��� ����������
};

#endif // MENUMANAGER_HPP