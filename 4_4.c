#include<stdio.h>
double power(float,int);
int main()
{
        int p; float n;
        printf("\nEnter a number = ");
        scanf("%f",&n);
        printf("\nEnter the power to which it is to be raised (only integers) = ");
        scanf("%d",&p);
        if(n==0 && p==0)
        printf("\nResult of 0^0 is undefined !!");
        else
        printf("\nValue of %.2f^%d is %.2f\n\n",n,p,power(n,p));
        return 0;
}
double power(float a,int b)
{
    if(b==0)
    return 1;
    else if(b>0)
    return (a*power(a,--b));
    else
    return 1.0/(a*power(a,++b));
}