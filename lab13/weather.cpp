#include <iostream>
#include <iomanip>
#include <string.h>
#include "windows.h"

using namespace std;

struct weather
{
    char date[15];
    char day[20];
    double temp;
    char opady[20];
    double vologist;
};

void show_weather(weather w)
{
    cout << setw(12) << w.date
         << setw(15) << w.day
         << setw(10) << w.temp
         << setw(15) << w.opady
         << setw(12) << w.vologist << endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int n = 7;
    weather B[n] = {
        {"01.11.2026", "Понеділок", 12.5, "Без опадів", 65.0},
        {"02.11.2026", "Вівторок",  14.0, "Без опадів", 60.0},
        {"03.11.2026", "Середа",    10.2, "Дощ",        82.0},
        {"04.11.2026", "Четвер",     9.0, "Злива",      88.0},
        {"05.11.2026", "П'ятниця",  11.8, "Хмарно",     70.0},
        {"06.11.2026", "Субота",    15.6, "Без опадів", 55.0},
        {"07.11.2026", "Неділя",    16.2, "Ясно",       50.0}
    };

    cout << "Таблиця метеоспостережень за тиждень:" << endl;
    cout << setw(12) << "Дата"
         << setw(15) << "День"
         << setw(10) << "Темп."
         << setw(15) << "Опади"
         << setw(12) << "Вологість" << endl;

    for (int i = 0; i < n; i++)
    {
        show_weather(B[i]);
    }

    char find_str[20];
    cout << "\nВведіть день тижня або дату для пошуку: ";
    cin >> find_str;

    for (int i = 0; i < n; i++)
    {
        if (strcmp(B[i].day, find_str) == 0 || strcmp(B[i].date, find_str) == 0)
        {
            show_weather(B[i]);
        }
    }

    int d1, d2;
    cout << "\nВведіть початковий і кінцевий номер дня (від 1 до 7): ";
    cin >> d1 >> d2;

    double sum_v = 0;
    for (int i = d1 - 1; i <= d2 - 1; i++)
    {
        sum_v += B[i].vologist;
    }
    cout << "Середня вологість за період: " << sum_v / (d2 - d1 + 1) << "%" << endl;

    int min = 0, max = 0;
    for (int j = 1; j < n; j++)
    {
        if (B[j].temp < B[min].temp)
            min = j;
        if (B[j].temp > B[max].temp)
            max = j;
    }

    cout << "\nМінімальна температура за тиждень: " << B[min].temp << " (" << B[min].day << ")" << endl;
    cout << "Максимальна температура за тиждень: " << B[max].temp << " (" << B[max].day << ")" << endl;

    system("pause");
    return 0;
}
