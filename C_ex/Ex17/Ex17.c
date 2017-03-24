#include <stdio.h>
int main()
{ 
	double max,min;
    int i;

const double a[10] = {21,45,67.455545333333333,45,34,12,56,7,8,3.455645333333333};
min = a[1];
max = a[1];
for (i=0; i < 10; i++)
{ 
		   if(a[i] > max)
           {
            max = a[i];
           }

                      if (a[i] <min)
                      { 
						  min = a[i]; 
					  }

}
printf("Наибольшее и наименьшее значения соответственно : %lf|%lf\n",max,min);
printf("Их разность: %lf",max-min);
return 0;
}
