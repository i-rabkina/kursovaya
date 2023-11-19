#include "user.h"
void User::login()
{
    //std::cout << "Вход как пользователь" << std::endl;
    /*int choise;
        while (true)
        {
            std::cout << "1. Вывести список, отсортированный по видам туризма.\n";
            std::cout << "2. Вывести список маршрутов, превышающих заданное количество дней.\n";
            std::cout << "3. Поиск инфы.\n";
            std::cout << "4. Выход.\n";
            std::cout << "Выберите действие: ";
            std::cin >> choise;
            switch (choise)
            {
            case 1:
            {
                cout << "Общий список:\n";read_from_file();
                outputList();
                cout << "Отсортированный список:\n";
                sort();
                outputList();
            }
            break;
            case 2:
            {
                std::cout << "что-то\n";
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
        //std::cout << "Последнее действие пользователя выполнено" << std::endl;
}
void User::some()
{
    std::cout << "тут что-то\n";
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
    cout << "Введите количество дней: ";
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
            tourismList[i]->outputList(); // предполагается, что у класса Tourism есть метод outputList()
            found = true;
        }
    }
    if (!found) {
        cout << "Совпадений не найдено." << endl;
    }
}