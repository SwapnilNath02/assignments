#include<stdio.h>
int main()
{
    int n,a,b=0,i,j;
    printf("\nEnter value of n (natural number, i.e., n>0) to print a pattern of 2n+1 size: ");
    scanf("%d",&n);
    a=n;
    putchar('\n');
    if(n>0)
    {
        for(i=1;i<=2*n+1;i+=2)
        {
            for(j=1;j<=i;j++)
            printf("%d",j);
            putchar('\n');
        }
        for(i=2*n-1;i>=1;i-=2)
        {
            for(j=1;j<=i;j++)
            printf("%d",j);
            putchar('\n');
        }
    }
    else
    printf("The number entered is less than 0, i.e., it is a negative number !! ");
    putchar('\n');
    return 0;
}
