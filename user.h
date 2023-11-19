#pragma once
#ifndef USER_H
#define USER_H
#include <iostream>
#include <fstream>
#include "tourism.h"
class User
{
public:
    void login();
    void read_from_file();
    void sort();
    void outputList();
    void some();
    void list_of_routs();
    string getCategory();
    void searchByCategory(Tourism* tourismList[], int count, string category);
};

#endif