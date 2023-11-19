#include "user.h"
void User::login()
{
    //std::cout << "���� ��� ������������" << std::endl;
    /*int choise;
        while (true)
        {
            std::cout << "1. ������� ������, ��������������� �� ����� �������.\n";
            std::cout << "2. ������� ������ ���������, ����������� �������� ���������� ����.\n";
            std::cout << "3. ����� ����.\n";
            std::cout << "4. �����.\n";
            std::cout << "�������� ��������: ";
            std::cin >> choise;
            switch (choise)
            {
            case 1:
            {
                cout << "����� ������:\n";read_from_file();
                outputList();
                cout << "��������������� ������:\n";
                sort();
                outputList();
            }
            break;
            case 2:
            {
                std::cout << "���-��\n";
            }
            break;
            case 3:
            {
                some();
            }
            break;
            case 4:
            {
                exit(0);
            }
            break;
            }

        }*/
        //std::cout << "��������� �������� ������������ ���������" << std::endl;
}
void User::some()
{
    std::cout << "��� ���-��\n";
}

void User::read_from_file()
{
    ifstream file("tourism2.0.txt");
    if (!file.is_open())
    {
        cout << "Error opening file" << std::endl;
        return;
    }

    const int MAXTOURISMNUM = 100;
    Tourism* tourismList[MAXTOURISMNUM];
    int count = 0;

    while (file && count < MAXTOURISMNUM)
    {
        tourismList[count] = new Tourism();
        count++;
    }

    file.close();

}

void User::sort()
{
    int n = 0;
    Tourism* arr = new Tourism();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j].type > arr[j + 1].type)
            {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void User::list_of_routs()
{
    int count = 0;
    int n;
    cout << "������� ���������� ����: ";
    cin >> n;
    Tourism* arr = new Tourism();
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < n - 1;j++)
        {
            if (arr[j].days < n)
                count++;
        }
    }
}

void User::outputList()
{
    const int MAXTOURISMNUM = 100;
    Tourism tourismList[MAXTOURISMNUM];
    int count = 0;
    for (int i = 0; i < count; i++)
    {
        std::cout << tourismList[i].rout << " | " << tourismList[i].type << " | " <<
            tourismList[i].complexity << " | " << tourismList[i].weight << " | "
            << tourismList[i].days << std::endl;
    }
    /*for (int i = 0; i < count; i++)
    {
        delete tourismList[i];
    }*/
}

string User::getCategory()
{
    Tourism* arr = new Tourism();
    return arr->type;
}

void User::searchByCategory(Tourism* tourismList[], int count, string category) {
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (tourismList[i]->getCategory() == category) {
            tourismList[i]->outputList(); // ��������������, ��� � ������ Tourism ���� ����� outputList()
            found = true;
        }
    }
    if (!found) {
        cout << "���������� �� �������." << endl;
    }
}