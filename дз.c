#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	float m;
	float h;
	float g = 9.81;
	float f;
	printf("Введите массу тела (кг)\n");
	scanf_s("%f", &m);
	printf("Введите высоту падения (метры)\n");
	scanf_s("%f", &h);
	f = m * g;
	puts("Результат:");
	printf("Масса тела: %.2f кг\n", m);
	printf("Высота падения: %.2f м\n", h);
	printf("Сила тяжести: %.2f Н\n", f);
}
