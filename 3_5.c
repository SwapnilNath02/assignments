#include<stdio.h>
int main()
{
    int n,b=0,i,j;
    printf("\nEnter value of n (natural number, i.e., n>0) to print a pattern : ");
    scanf("%d",&n);
    putchar('\n');
    if(n>0)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(i==1 || i==n || i==j || i+j==n+1 || j==1 || j==n)
                putchar('*');
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