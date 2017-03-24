#include <stdio.h>

#include <string.h>
int main()
{
char a[1000];
long int b = 0; // десятичное число
int i,j; // i - номер разряда вводимого числа
int c =1; 
printf(" Введите двоичною строку: ");
scanf("%s", &a);
j = strlen(a);
for ( i = j-1; i > -1; i--) //отсеивается последний нулевой элемент строки
{
         if ( a[i] == '1' )
         {
			 b = b + c;
	     }

c = c * 2;

}
printf(" Числовое значение двоичной строки : %ld", b);
return 0;
}
