#include <stdio.h>
#include <locale.h>
int main()
{
	float a, b;
	setlocale(LC_ALL, "RUS");
	puts("Введите а");
	scanf_s("%f", &a);
	puts("Введите b");
	scanf_s("%f", &b);
	printf("-----------------------------\n");
	printf("|   a*b   |   a+b  |   a-b  |\n");
	printf("| %7.2f |%7.2f |%7.2f |\n", a * b, a + b, a - b);
	printf("-----------------------------\n");
}
