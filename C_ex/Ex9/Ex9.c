#include <stdio.h>

int f(int N) 
{
if ( (N == 1) || (N == 2) )
return 1; 
return f(N - 1) + f(N - 2); 
}
int main()
{
int i,N;
printf("Введите,сколько первых N натуральных значений чисел Фибоначчи необходимо вывести на экран: ");
scanf("%d", &N); 

if ( N == 0)
{ printf(" Ноль значений - это ноль чисел:)") ; return 0;}

if ( N < 0)
{ printf(" Если %d - это натуральное число для вас, то еще не время вам знакомиться с Фибоначчи.", N) ; return 0;}
printf("Первые %d чисел Фибоначчи: ",N);
for (i = 1; i<= N; i++) 
{  
	 printf("%d " , f(i)); }
	
return 0;
}
