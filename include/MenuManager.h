#pragma once
#ifndef MENUMANAGER_H
#define MENUMANAGER_H

#include <iostream>
#include "polynomiac_basic.h"         // ���������� ����� ��������
//#include "�������� ����.h" // ���������� ����� �������� ��� ����������

// ����� MenuManager ��� ���������� ���������������� �����������
class MenuManager {
public:
    // ����� ��� ������� ����
    void run(); // ��������� ����� run()
    // ����� ��� �������� ��������
    void createPolynomial(polynomial x); // ��������� ����� createPolynomial()
};

#endif // MENUMANAGER_H