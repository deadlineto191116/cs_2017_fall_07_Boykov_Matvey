#include <stdio.h>
#include <math.h>


float simpsons(float x) 
{
	float homer;
	homer = x*x;
	return homer;
}

int main()

{ 
	char sign;
	float a, b, c, x, n , pi = 3.141519;
	double S = 0;
 	n = 1000000;
	printf("Численное дифференцирование методом Симпсона заданной нами классической параболы \n");
	printf("Число знаков после запятой[точность максимум до 9 знаков]: ");
	scanf("%c", &sign);
	char str[] = "%.zf\n";
	str[2] = sign;
	printf("Нижняя граница: ");
	scanf("%f", &a);
	printf("Верхняя граница: ");
	scanf("%f", &b);
	c = (b - a) / n;
	x = a + c;
	while (x < b)
	{
		S = S + 4 * simpsons(x);
		x = x + c;

			if (x >= b)
			break;

		S = S + 2 * simpsons(x);
		x = x + c;
	}

	S = ((c/3)*(simpsons(a) + simpsons(b) + S)); 
	printf(str,S);
	return 0;
}
