#include <stdio.h>
#include <math.h>

int main ()
{
	
	float x;
	float y;
	float z;
	char p;
	/* Вводим то, что хотим посчитать */ 
	printf("Введите то, что хотите посчитать:");
    scanf("%f %c %f", &x,&p,&y);
    
    switch (p)
    {
    case '^':
    z = pow (x ,y);
    printf("Ваш ответ: %.4f\n",z);
    break;
    case '+':
    z=x+y;
    printf("Ваш ответ: %.4f\n",z);
    break;
    case '-':
    z=x-y;
    printf("Ваш ответ: %.4f\n",z);
    break;
    case '*':
    z=x*y;
    printf("Ваш ответ: %.4f\n",z);
    break;
/**/case '/':
    
    if (y!=0)
    {
		z = x/y;
		printf("Ваш ответ: %.4f\n",z);
    }
    else{
	
    printf("Извините, но на ноль в данном случае  делить нельзя\n");
    }
    

/**/break;
    default: 
    printf(" Введенный знак не действителен: введите +,- и т.п. \n");

}
getchar();
printf( "До свидания!");
 return 0;

}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

