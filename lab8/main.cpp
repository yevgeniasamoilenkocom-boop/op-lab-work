#include <iostream>
#include <iomanip>
#include "windows.h"
#include "math.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "=== Розрахунок суми та добутку (Варіант 29) ===" << endl;

    double x, y_in, y, z;
    cout << "Введіть x: ";
    cin >> x;
    cout << "Введіть y: ";
    cin >> y_in;

    int sum = 0;
    for (int i = 1; i <= 5; i++)
    {
        sum += i * i;
    }
    cout << "Сума квадратів (1..5) = " << sum << endl;
    y = (sum + sin(x)) / (x * x + 5);
    cout << "Y = " << fixed << setprecision(3) << y << endl;

    int p = 1;
    for (int n = 1; n <= 5; n++)
    {
        p *= n;
    }
    cout << "Добуток (5!) = " << p << endl;
    z = p + 2 * sin(y_in);
    cout << "Z = " << fixed << setprecision(4) << z << endl;

    system("pause");
    return 0;
}
