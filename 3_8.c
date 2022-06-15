#include<stdio.h>
int main()
{
    int n,a,b=0,x=0;
    printf("\nEnter a number (n>0) : ");
    scanf("%d",&n);
    if(n>0 && n<501)
    {
        printf("\nAll the integers between 1 and 500 divisible by %d is/are :-\n\n",n);
        for(int i=1;i<501;i++)
        {
            if(i%n==0)
            {
                printf("%d ",i);
                x++;
                b+=i;
                if(x%10==0)
                printf("\n");
            }
        }
        printf("\n\nThe sum of all integers divisible by %d = %d\n\n",n,b);
    }
    else if(n>501)
    printf("\nThere are no numbers between 1 and 500 divisible %d \n\n",n);
    else
    printf("\nInvalid input - the number entered is less than 0 !! \n\n");
    return 0;
}