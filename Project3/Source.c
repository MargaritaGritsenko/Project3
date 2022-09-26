#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "RU");
	int x,y;
	double result;
	printf("¬ведите стоимость билета второго класса\n");
	scanf("%d", &x);

	printf("¬ведите количество мест\n");
	scanf("%d", &y);
	result = 0.75 * y * x + 0.25 * y * 2 * x;
	printf("»того: %f фунтов ", result);
}