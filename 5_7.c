#include <stdio.h>
int main()
{
    int i,j,a[100],x,k,p,t;
    printf("\nEnter the length of array : ");
    scanf("%d",&x);
    printf("\nEnter the %d numbers for the array-\n",x);
    for(i=0;i<x;i++)
    scanf("%d",&a[i]);
    printf("\nEnter the value of K to find the Kth largest and Kth smallest number in an array: ");
    scanf("%d",&k);
    for(i=0;i<x-1;i++)
    {
        p=0;
        for(j=0;j<x-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                p++;
            }
        }
        if(p==0)
        break;
    }
    printf("\nThe %dth Smallest element in the array is %d ",k,a[k-1]);
    printf("\nThe %dth Largest element in the array is %d \n\n",k,a[x-k]);
    return(0);
}