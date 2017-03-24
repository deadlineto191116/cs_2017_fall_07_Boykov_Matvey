#include <stdio.h>
#include <string.h>

int main()
{
char a[1000];
int i;
int b;
int c;
b = 0;
c = 0;
printf("Введите строку, чтобы получить гистограмму длин: ");
gets(a);

for ( i = 0; i < 100; i++)
{
if ( (a[i] == ' ') || (a[i] == '\0') )
{
for ( c = 0; c < b; c++)
printf("-");
printf("\n");
for ( c = 0; c < b - 1; c++)
printf(" ");
printf("|\n");
for ( c = 0; c < b; c++)
printf("-");
printf("\n");
b = 0;
}
else
b = b + 1 ;
if (a[i] == '\0')
break;
}

return 0;
}
