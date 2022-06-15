#include<stdio.h>
long long int fact(int );
int main()
{
        int n;
        printf("\nEnter integer number whose factorial is to be found = ");
        scanf("%d",&n);
        if(n>=0)
        printf("\nValue of %d! (n factorial) is %ld\n\n",n,fact(n));
        else 
        {
            if(n%2==0)
            printf("\nValue of %d! (n factorial) is -%lld\n\n",n,fact(n));
            else
            printf("\nValue of %d! (n factorial) is %lld\n\n",n,fact(n));
        }
        return 0;
}
long long int fact(int n)
{
    if(n==0)
    return 1;
    else if(n>0)
    return (n*fact(n-1));
    else
    return (n*fact(n+1));

}