#include <stdio.h>

char *reverse(char *s)
{
int i, j;
char a;

for ( i = 0; i< strlen(s)/2; i++)
{
a=s[i];
s[i] = s[strlen(s)-(i+1)];
s[strlen(s)-(i+1)]=a;
}
return s;
}

int main()
{

char *st[1000];

for (int i = 0; i < 100; i++)
{
st[i] = '\0';
}
printf("Введите строку(только английский): ");
gets(st);
printf("Переворот строки: %s\n", reverse(st));
return 0;
}
