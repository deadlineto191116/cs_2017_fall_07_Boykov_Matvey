#include <stdio.h>
#include <math.h>

float diff(float x) 
{
	float func;
	func = x*x; //Парабола 
	return func;
}

int main()
{
	char sign;
	float a, b, c, x, k = 0, i = 0, m = 0;

	printf("Численное дифференцирование по трем точкам заданной нами классической параболы\n");
	printf("Число знаков после запятой[точность максимум до 9 знаков]: ");
	scanf("%c", &sign);

	char str[] = "%.zf\n";
	str[2] = sign;

	printf("Нижняя граница интервала: ");
	scanf("%f", &a);
	printf("Верхняя граница интервала: ");
	scanf("%f", &b);
	printf("Введите шаг: ");
	scanf("%f", &c);

	x = a;

	i = (1 / (2 * c))*((-3) * diff(x) + 4 * (diff(x + c)) - (diff(x + 2 * c)));
	m = (1 / (2 * c))*(-diff(x) + diff(x + 2 * c));
	printf(str, i);
	printf(str, m);

	while (x + 2 * c <= b) {
		k = (1 / (2 * c))*(diff(x) - 4 * (diff(x + c)) + 3 * (diff(x + 2 * c)));
		x = x + c;
		printf(str, k);
	}
	return 0;
}
