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
    char* rout; // район маршрута
    char* type; // вид туризма
    int complexity; // категория сложности - от 1 до 6
    double weight; // вес на одного человека
    int days; // количество дней
    Tourism() {}
    string getCategory();
    void outputList();
};

#endif
