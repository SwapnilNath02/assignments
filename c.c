#include<stdio.h>
int main()
{
    int n,a,b=0;
    printf("\nEnter value of n (natural number, i.e., n>0) to print a star pattern: ");
    scanf("%d",&n);
    a=n;
    putchar('\n');
    if(n>0)
    {
        for(int i=1;i<=2*n+1;i++)
        {
            for(int j=1;j<=2*n+1;j++)
            {
                if((i==j) || (i+j)==(2*n+2))
                printf("*");
                else
                putchar(' ');
            }
            putchar('\n');

        }
    }
    else
    printf("The number entered is less than 0, i.e., it is a negative number !! ");
    putchar('\n');
    return 0;
}