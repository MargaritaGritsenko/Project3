#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "RU");
	int x,y;
	double result;
	printf("������� ��������� ������ ������� ������\n");
	scanf("%d", &x);

	printf("������� ���������� ����\n");
	scanf("%d", &y);
	result = 0.75 * y * x + 0.25 * y * 2 * x;
	printf("�����: %f ������ ", result);
}