#ifndef MENUMANAGER_HPP
#define MENUMANAGER_HPP

#include <iostream>
#include "polynomiac_basic.hpp"         // ���������� ����� ��������
//#include "�������� ����.h" // ���������� ����� �������� ��� ����������

// ����� MenuManager ��� ���������� ���������������� �����������
class MenuManager {
public:
    // ����� ��� ������� ����
    void run(); // ��������� ����� run()
    // ����� ��� �������� ��������
    void createPolynomial(polynomial x); // ��������� ����� createPolynomial()
};

#endif // MENUMANAGER_HPP