#include<stdio.h>
int mult(int,int);
int main()
{
        int a,b;
        printf("\nEnter two numbers to be multiplied - \n");
        scanf("%d%d",&a,&b);
        printf("\nResult of %d x %d is %d\n\n",a,b,mult(a,b));
        return 0;
}
int mult(int m,int n)
{
    if(n==0)
    return 0;
    else if(n>0)
    return (m + mult(m,--n));
    else if(n<0)
    return (-m + mult(m,++n));
}