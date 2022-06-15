#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    long long unsigned int n,a,b=0;
    int x=0;
    printf("\nEnter a number : ");
    scanf("%llu",&n);
    a=n;
    if(n>=0)
    {
        while(a>0)
        {
            x++;
            a/=10;
        }
        a=n;
        for(int i=1;i<=x;i++)
        {
            b+=(a%10)*pow(10,x-i);
            a/=10;
        }
        if(b==n)
        printf("\nThe number %llu is a Palindrome number\n\n",b);
        else
        printf("\nThe number %llu is not a Palindrome number\n\n",n);
    }
    else
    printf("The number entered is less than 0, i.e., it is a negative number !! ");
    return 0;
}