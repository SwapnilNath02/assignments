#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,x=0;
    printf("\nEnter a number (0<n<29) : ");
    scanf("%d",&n);
    printf("\nAll the 3-digit numbers whose digits add upto %d is/are :-\n\n",n);
    if(n>0 && n<28)
    {
        for(int i=100;i<1000;i++)
        {
            a=i;
            b=0;
            while(a>0)
            {
                b+=a%10;
                a/=10;
            }
            if(b==n)
            {
                printf("%d ",i);
                x++;
                if(x%10==0)
                printf("\n");
            }
        }
        printf("\n\n");
    }
    else
    printf("Invalid input - as there is no 3-digit number whose digits add upto %d !! \n\n",n);
    return 0;
}