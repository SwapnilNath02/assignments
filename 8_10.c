#include <stdio.h>
#include <stdlib.h>
typedef union 
{
	int x;
	float y;
	char a;
} data;
int main(void)
{
	data *U = (data *)malloc(sizeof(data));
	printf("\nThis (->) operator -\n");
    U->x = 10;
	printf("X = %d\n", U->x);
	U->y = 2.1234;
	printf("Y = %f\n", U->y);
	U->a = 'z';
	printf("a = %c\n\n", U->a);
	data P;
    printf("\nDot (.) operator -\n");
	P.x = 11;
	printf("X = %d\n", P.x);
	P.y = 4.1234;
	printf("Y = %f\n", P.y);
	P.a = 'q';
	printf("a = %c\n\n", P.a);
	return 0;
}