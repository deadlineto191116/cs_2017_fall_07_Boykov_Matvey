#include <stdio.h>
#include <string.h>
int main()
{
char x[100];
printf("Введите cтроку: ");
char l;
gets(x);
for (int i = 0; i < strlen(x); i++)
{
if (l < x[i])
{
l = x[i];
}
}
printf("Символ с наибольшим кодом ASCII: %c", l);
return 0;
}
