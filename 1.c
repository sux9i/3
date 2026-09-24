#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "RUS");
	int num1;
	puts("Введите первое число");
	scanf_s("%d", &num1);
	printf("Введено число %d\n", num1);
	int num2;
	puts("Введите второе число");
	scanf_s("%d", &num2);
	printf("Введено число %d\n", num2);
	printf("Вывод суммы %d+%d=%d\n", num1, num2, num1 + num2);
	printf("Вывод разности %d-%d=%d\n", num1, num2, num1 - num2);
	printf("Вывод произведения %d*%d=%d\n", num1, num2, num1 * num2);
	printf("Вывод частного %d/%d=%d\n", num1, num2, num1 / num2);
	printf("Вывод остатка %d%%%d=%d\n", num1, num2, num1 % num2);