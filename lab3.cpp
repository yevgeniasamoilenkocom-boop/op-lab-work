// lab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "windows.h"


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int m, n, t;
	printf("\n загальна кількість курсантів \n");
	scanf_s("%d", &m);
	printf("\n літають з інструктором \n");
	scanf_s("%d", &n);
	printf("\n у скільки разів менше літають самостійно: \n");
	scanf_s("%d", &t);
//Розрахунок значення виразу 
	float r = m - (n + (float)n / t);
//Виведення результату 
	printf("\n на тренажерах %.2f\n\n", r);
	system("pause");
	return 0;
}