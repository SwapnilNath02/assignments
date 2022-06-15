#include <stdio.h>
int main()
{
    int i,j,a[100],t,x;
    printf("\nEnter the length of array : ");
    scanf("%d",&x);
    printf("\nEnter the %d numbers for the array-\n",x);
    for(i=0;i<x;i++)
    scanf("%d",&a[i]);
    for(i=0;i<x/2;i++)
    {
        t=a[i];
        a[i]=a[x-1-i];
        a[x-1-i]=t;
    }
    printf("\nThe Reversed array is -\n");
    for(i=0;i<x;i++)
    printf("%d ",a[i]);
    printf("\n\n");
    return(0);
}