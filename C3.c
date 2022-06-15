#include <stdio.h>

int main()
{
	float a,b,c,d;

	printf("Enter two numbers -\n");
	scanf("%f%f",&a,&b);

	c=a*b;
	d=b/a;

	printf("Result of multiplication of the two number = %f",c);
	printf("\nResult of division of the two numbers = %f",d);
	
    return 0;
}