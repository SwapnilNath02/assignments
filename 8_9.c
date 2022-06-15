#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	int x;
	float y;
	char a;
} data;
int main(void)
{
	data *U = (data *)malloc(sizeof(data));
	U->x = 10;
	U->y = 2.1234;
	U->a = 'z';
    printf("\nThis (->) operator -\n");
	printf("U->x = %d\n", U->x);
	printf("U->y = %f\n", U->y);
	printf("U->a = %c\n", U->a);
	data P;
	P.x = 11;
	P.y = 4.1234;
	P.a = 'q';
    printf("\nDot (.) operator -\n");
	printf("P.x = %d\n", P.x);
	printf("P.y = %f\n", P.y);
	printf("P.a = %c\n\n", P.a);
	return 0;
}