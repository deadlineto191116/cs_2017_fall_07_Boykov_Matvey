#include <stdio.h> 
#include <string.h> 
int main ()
{
char some[1000]; 
char think[1000];
char c[1000];
char d[1000];
char a[1000];
char b[1000];
char p[1000];
int N,k,len;

printf("Использование функции strncpy: \n");
printf("Введите строку, в которой функция strncpy скопирует первые N символов:  ");
gets(some);
printf("\nВведите, сколько N первых символов скопировать: ");
scanf("%d",&N);


strncpy(think, some, sizeof(think));
strncpy( p, think, N);
p[N]= '\0';
printf("Полученное копирование: \n");
printf("Было: ");

puts(some);
printf("Скопировано: ");
puts(p);
printf("********************************************\n");

////////////////////////////////
printf("Идем далее: функция strncmp: сравниваем количество идентичных символов в строках:\n");


printf("Первая строка для сравнения символов:\n");
printf(" \n");
getchar();
gets(a);
printf("Вторая строка для сравнения символов: \n");
printf(" \n");
gets(b);

printf("\n Сколько первых элементов сравнить: ");
scanf("%d", &k);
printf(" \n");

if (strncmp (a,b,k)==0)
puts ("Первые пять символов строк идентичны");
else
puts ("Первые пять символов строк отличаются");
printf(" \n");

///////////////////////////////////////
printf("************************************************\n");

printf("Идем далее: функция strncat: добавляем N символов из первой строки ко второй:\n");
printf(" \n");

printf("Введите первую строку: \n");
getchar();
gets(c);
printf(" \n");
printf("Введите вторую строку: \n");
gets(d);
printf(" \n");
printf("Сколько N символов скопировать из первой строк для прибавления ко второй: ");
scanf("%d",&len);
strncat(d, c, len);
printf(" \n");
printf("Результат: \n");
puts(d); 
getchar();
return 0;
}
