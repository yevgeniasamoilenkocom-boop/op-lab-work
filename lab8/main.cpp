#include <iostream>
#include <iomanip>
#include "windows.h"
#include "math.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

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
    y = (sum + sin(x)) / (x * x + 5);
    cout << "Y = " << setprecision(3) << y << endl;

    int p = 1;
    for (int n = 1; n <= 5; n++)
    {
        p *= n;
    }
    z = p + 2 * sin(y_in);
    cout << "Z = " << setprecision(4) << z << endl;

    system("pause");
    return 0;
}
