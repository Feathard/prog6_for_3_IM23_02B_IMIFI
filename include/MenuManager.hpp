<<<<<<< HEAD:include/MenuManager.h
#ifndef MENUMANAGER_H
#define MENUMANAGER_H

#include "polynomial.hpp"
=======
#ifndef MENUMANAGER_HPP
#define MENUMANAGER_HPP

#include <iostream>
#include "polynomiac_basic.hpp"         // ���������� ����� ��������
//#include "�������� ����.h" // ���������� ����� �������� ��� ����������
>>>>>>> a278491c317c250b810598848b0f890cf00ec810:include/MenuManager.hpp

// ����� MenuManager ��� ���������� ����������
class MenuManager {
public:
    void run(); // ����� ������� ���������� ����������

private:
    std::vector<polynomial> polynomials; // ������ ��� �������� ���������

    void addRandomPolynomial(int range_min, int range_max, unsigned degree); // ���������� ���������� ��������
    void addPolynomialFromInput(); // ���������� �������� �� ������� ������
    void addPolynomialFromFile(); // ���������� �������� �� �����
    void removePolynomial(); // �������� ��������
    void listPolynomials(); // ����� ������ ���������
    void performOperations(); // ���������� �������� ��� ����������
};

#endif // MENUMANAGER_HPP