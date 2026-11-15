#include <iostream>
#include <iomanip>
#include "windows.h"
#include "time.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int n = 10;
    int a[n], b[n];
    int k = 0;

    srand(time(NULL));
    cout << "Вихідний масив (випадкові числа):" << endl;
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 81 - 40;
        cout << setw(5) << a[i];
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            b[k] = i;
            k++;
        }
    }

    cout << "Новий масив (індекси від'ємних елементів):" << endl;
    for (int i = 0; i < k; i++)
    {
        cout << setw(5) << b[i];
    }
    cout << endl;

    cout << "Кількість від'ємних елементів: " << k << endl;

    system("pause");
    return 0;
}
// restored version
