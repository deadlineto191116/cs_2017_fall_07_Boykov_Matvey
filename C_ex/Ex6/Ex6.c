#include <stdio.h>

int main()
{
	long long int a,b,c;
	b = 1;
	scanf("%lld", &a);
	for ( c=1; c<=a; c++)
	{
	b = b*c;
	
    }	
	printf("%lld", b);
	return 0;
}
