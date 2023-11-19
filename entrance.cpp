#include <iostream>
#include "admin.h"
#include "user.h"
#include "entrance.h"
//#include "shifr.h"
void Entrance::chooseRole() {
    User user;
    Admin admin;
    int choise1;
    do
    {
        std::cout << "1. ����� ��� ������������" << std::endl;
        std::cout << "2. ����� ��� �������������" << std::endl;
        std::cout << "3. �����" << std::endl;
        std::cout << "�������� �������: ";
        std::cin >> choise1;
        system("cls");
        switch (choise1)
        {
        case 1:
        {
            system("cls");
            user.login();
            int choise2;
            do
            {
                std::cout << "���� ��� ������������. ��� ������ �������?" << std::endl;
                std::cout << "1. ������� ������, ��������������� �� ����� �������.\n";
                std::cout << "2. ������� ������ ���������, ����������� �������� ���������� ����.\n";
                std::cout << "3. ����� ����.\n";
                std::cout << "4. �����.\n";
                std::cout << "�������� ��������: ";
                std::cin >> choise2;
                switch (choise2)
                {
                case 1:
                {
                    cin.ignore();
                    cout << "����� ������:\n";
                    user.read_from_file();
                    user.outputList();
                    cout << "��������������� ������:\n";
                    user.sort();
                    user.outputList();
                    //system("cls");
                    break;
                }

                case 2:
                {
                    cin.ignore();
                    user.list_of_routs();
                    cout << "������ ���������, ����������� �������� ���������� ����" << endl;
                    user.outputList();
                    //system("cls");
                    break;
                }

                case 3:
                {
                    cin.ignore();
                    const int MAXTOURISMNUM = 100;
                    Tourism* tourismList[MAXTOURISMNUM];
                    int count = 0;
                    string category = tourismList[1]->getCategory();
                    user.searchByCategory(tourismList, count, category);
                    system("cls");
                    break;
                }

                case 4:
                {
                    choise2 = 0;
                }

                }

            } while (choise2);
        }
        case 2:
        {
            cin.ignore();
            system("cls");
            admin.login();
            system("cls");
            break;
        }
        case 3:
            exit(0);
        default:
            std::cout << "������������ �����. ���������� �����." << std::endl;
            break;
        }
    } while (choise1);
}
//
//// Definition of encryption function
//void encdec::encrypt()
//{
//    string file = "user(������).txt";
//    int key;
//    // Key to be used for encryption
//    cout << "key: ";
//    cin >> key;
//
//    // Input stream
//    fstream fin, fout;
//
//    // Open input file
//    // ios::binary- reading file
//    // character by character
//    fin.open(file, fstream::in);
//    fout.open("encrypt.txt", fstream::out);
//
//    // Reading original file till
//    // end of file
//    while (fin >> noskipws >> c) {
//        int temp = (c + key);
//
//        // Write temp as char in
//        // output file
//        fout << (char)temp;
//    }
//
//    // Closing both files
//    fin.close();
//    fout.close();
//}
//
//// Definition of decryption function
//void encdec::decrypt()
//{
//    int key;
//    cout << "key: ";
//    cin >> key;
//    fstream fin;
//    fstream fout;
//    fin.open("encrypt.txt", fstream::in);
//    fout.open("decrypt.txt", fstream::out);
//
//    while (fin >> noskipws >> c) {
//
//        // Remove the key from the
//        // character
//        int temp = (c - key);
//        fout << (char)temp;
//    }
//
//    fin.close();
//    fout.close();
//}
//
//// Driver Code
//void main2()
//{
//    encdec enc;
//    char c;
//    cout << "\n";
//    cout << "1. encrypt \n";
//    cout << "2. decrypt \n";
//    cout << "Enter Your Choice : -> ";
//    cin >> c;
//    cin.ignore();
//    switch (c)
//    {
//    case '1':
//    {
//        enc.encrypt();
//        break;
//    }
//    case '2':
//    {
//        enc.decrypt();
//        break;
//    }
//    }
//}