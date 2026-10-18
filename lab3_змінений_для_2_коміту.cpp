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

	// Перевірка вхідних даних (додано у 2-му коміті)
	if (t <= 0) {
		printf("\n Помилка: значення t має бути більше нуля!\n");
		return 1;
	}

	// Розрахунок самостійних польотів та значення виразу
	float solo = (float)n / t;
	float r = m - (n + solo);

	// Виведення результату
	printf("\n літають самостійно: %.2f\n", solo);
	printf("\n на тренажерах: %.2f\n\n", r);
	system("pause");
	return 0;
}

