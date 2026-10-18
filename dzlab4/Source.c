#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");
	int a, b;
	printf("Введите первую сумму:\n");
	scanf("%d", &a);
	printf("Введите вторую сумму:\n");
	scanf("%d", &b);
	printf("Код будет сгенерирован ( 1 - да, 0 - нет): %d", (a % 2 == 0) != (b % 2 == 0));

}