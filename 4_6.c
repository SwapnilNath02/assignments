#include<stdio.h>
int prime(int,int);
int main()
{
        int a,b;
        printf("\nEnter a whole number (n>=0) = ");
        scanf("%d",&a);
        if(a<0)
        {
            printf("\nInvalid Input !!\n\n");
            return 0;
        }
        if(prime(a,a/2)) 
        printf("\nIt is a prime number\n\n");
        else
        printf("\nIt is not a prime number\n\n");
        return 0;
}
int prime(int n,int i)
{
    if(n==0 && i==0)
    return 0;
    else if(i>1)
    {
        if(n%i!=0)
        return prime(n,--i);
        else
        return 0;
    }
    else if(i==1)
    return 1;
    else if(i==0)
    return 0;
} 