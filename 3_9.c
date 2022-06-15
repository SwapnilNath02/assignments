#include<stdio.h>
#include<math.h>
int main()
{
    int b,x=0,arr[20],p,t,i,j;
    long long int a,n;
    printf("\nEnter a number (n>0) : ");
    scanf("%lld",&n);
    a=n;
    if(n>0)
    {
        printf("\nThe total occurance of all the digits in %lld is :-\n",n);
        while(a>0)
        {
            arr[x]=a%10;
            a/=10;
            x++;
        }
        for(i=0;i<x-1;i++)
        {
            p=0;
            for(j=0;j<x-1-i;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    t=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=t;
                    p++;
                }
            }
            if(p==0)
            break;
        }
        for(i=0;i<x;i+=p)
        {
            p=0;
            for(j=i;j<x;j++)
            {
                if(arr[i]==arr[j])
                {
                    p++;
                }
            }
            printf("\nNumber of %d's = %d",arr[i],p);
        }
        printf("\n\n");
    }
    else
    printf("\nInvalid input - the number %lld is less than 0 !! \n\n",n);
    return 0;
}