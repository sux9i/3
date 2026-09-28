#include <stdio.h>
#include <locale.h>
#define d 2.54
#define d2 2.32166
int main()
{
	setlocale(LC_ALL, "RUS");
	int dym;
	float result;
	puts("Введите количество целых дюймов для рассчета");
	scanf_s("%d", &dym);
	result = d * dym;
	printf("%d англ.дюймов - это %.2f см\n", dym, result);
	result = d2 * dym;
	printf("%d исп.дюймов - это %.2f см\n", dym, result);

}
