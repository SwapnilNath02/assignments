#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nEnter the values of - \na = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("\nThe values of a and b after swapping is - \na = %d \nb = %d\n\n",a,b);
    return 0;
}