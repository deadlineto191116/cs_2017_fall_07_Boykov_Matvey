#include <stdio.h>

int main()

{ 
	
	int day;
	day = 12;
	int month;
	month = 7;
	
	printf("ДO Обмена:\n День моего рождения: %d\n Месяц моего рождения: %d\n",day,month);
	/* Произведем обмен значенями переменных day и month */
	
	int  result;/* Ввел промежуточную переменную*/
	result = 0;
	
	result = day + month;      /* 19*/
	month = result - month;    /*19-7=12(теперь месяц имеет значение 12-значение дня)*/
	day = result-month;        /*19-12=7(теперь день имеет значение 7-значение месяца*/
	
	printf("ПОСЛЕ Обмена:\n День моего рождения стал: %d \n Месяц моего рождения стал: %d",day,month);
	return 0;
	
	
	
	
	
	
	
	
	
	}
