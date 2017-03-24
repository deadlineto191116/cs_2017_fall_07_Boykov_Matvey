#include <stdio.h>

int main()
{
	
	 long int i,a; 
	

	printf("Укажите, сколько значений температур в Цельсиях вы бы хотели узнать  в Фаренгейтах: ");
	scanf("%ld", &a);
	float mas [a];
	for(a,i=1;i<=a;i++)
	{
		printf("Значение в градусах Цельсия температуры №%ld : ",i);
		scanf("%f", &mas[i]);
	}
	 printf("Цельсий | Фаренгейт\n");
	for(i=1,a;i<=a;i++)
	
	{ 
		printf("%f | %f\n",mas[i], mas[i]*1.8+32);
	}
	
	
	
	
	
	return 0;
}
