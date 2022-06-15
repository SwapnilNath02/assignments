#include <stdio.h>
int main()
{
    int a[100],b[100],n,i,z,t=0;
    printf("\nEnter the length of array = ");
    scanf("%d",&n);
    printf("\nEnter %d values for the array - \n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\nEnter a number to see its multiples in the array = ");
    scanf("%d",&z);
    int *p=&a[0],*x=&b[0];
    int *q=&z; 
    if(z==0)
    {
        printf("\nINVALID INPUT !! Division by 0 is not possible !!\n\n");
        return 0;
    }
    for(i=0;i<n;p++,i++)
    {
        if(*p%*q==0)
        {
            *x=*p;
            x++;
            t++;
        }
    }
    p-=n; x-=t;
    printf("\nThe numbers divisible by %d in the array is - \n",z);
    for(i=0;i<t;p++,x++,i++)
    {
        *p=*x;
        printf("%d ",b[i]);
    }
    printf("\n\n");
    return(0);
}