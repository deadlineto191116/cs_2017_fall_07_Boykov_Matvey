#include <stdio.h>


#define swap(t,x,y) { t = x;x = y;y = t;}

int main()
{
int a,b,c;
printf(" Давайте поменяем переменные типа int местами: \n");
printf(" Введите переменную а: ");
scanf("%d", &a);
printf(" Введите переменную b: ");
scanf("%d", &b);

printf("До обмена: a = %d , b = %d\n",a,b);
swap(c,a,b);
printf(" \n");

printf("После обмена: a = %d , b = %d\n",a,b);
printf("----\n");
printf("То же самое проделаем с переменными типа float : \n");

float d,e,f;
printf(" Введите переменную d: ");
scanf("%f", &d);
printf(" Введите переменную e: ");
scanf("%f", &e);

printf("До обмена: c = %f , d = %f\n",d,e);
swap(f,d,e);
printf(" \n");

printf("После обмена: c = %f , d = %f\n",d,e);
printf(" Все поменяли. \n Пока,пользователь. ");

return 0;
}
