#include <stdio.h> 
#include <string.h> 

#include <uchar.h>
int main ()
{

int i;
char pol[100];
printf("ВВедите текст с подряд стоящими буквами/цифрами: "); //Несмотря на старания, не работает с русскими буквами
gets(pol);
printf("Было: ");
puts(pol);
for ( i=0; pol[i] != '\0'; i++)
 if (pol[i] == pol[i+1])
	{ 
		do
		{
		pol[i] = ' ';	
		i++;
		}while(pol[i] == pol[i+1]);
		pol[i] = ' ';
	}
	

printf("Стало(строка может быть пуста, если все элементы в строке оказались повторяющемися): \n");	
puts(pol);
return 0;
}
