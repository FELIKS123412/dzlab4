#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");
	int a, b, res;
	printf("Введите сумму операции A: ");
	scanf("%d", &a);
	printf("Введите сумму операции B: ");
	scanf("%d", &b);
	res = ((a % 2 == 0) != (b % 2 == 0));
	printf("Код будет сгенерирован ( 1 - да, 0 - нет): %d", res);

}