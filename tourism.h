#pragma once
#ifndef TOURISM_H
#define TOURISM_H
#define TOURISM_H
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cstring>
#include <stdlib.h>
#include <iostream>
#include"admin.h"
#include"user.h"
#include <string>
using namespace std;

class Tourism
{
public:
    char* rout; // ����� ��������
    char* type; // ��� �������
    int complexity; // ��������� ��������� - �� 1 �� 6
    double weight; // ��� �� ������ ��������
    int days; // ���������� ����
    Tourism() {}
    string getCategory();
    void outputList();
};

#endif
