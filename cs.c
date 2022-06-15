#include <stdio.h>

int main()
{
    system("cls");
    int a,b;
	printf("Enter the values of :- \na=" );
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    
    printf("\nThe required arithmatic operations are :- ");
    printf("\na + b = %d (Addition)",a+b);
    printf("\na - b = %d (Subtraction)",a-b);
    printf("\na * b = %d (Multiplication)",a*b);
    printf("\na / b = %.2f (Division) \n",(float)a/b);
    
    printf("\na & b = %d (Bitwise AND)",a&b);
    printf("\na | b = %d (Bitwise OR)",a|b);
    printf("\na ^ b = %d (Bitwise XOR)",a^b);
    printf("\n~a = %d (Bitwise COMPLEMENT)\n\n",~a);
    return 0;
}