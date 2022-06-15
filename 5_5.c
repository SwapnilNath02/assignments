#include <stdio.h>
int main()
{
    int i,j,a[100],x,p,q,b,c;
    printf("\nEnter the length of array : ");
    scanf("%d",&x);
    printf("\nEnter the %d numbers for the array-\n",x);
    for(i=0;i<x;i++)
    scanf("%d",&a[i]);
    p=a[0];q=a[0];
    for(i=1;i<x;i++)
    {
        if(a[i]<p)
        {
            p=a[i];
            c=i;
        }
        if(a[i]>q)
        {
            q=a[i];
            b=i;
        }
    }
    printf("\nThe Smallest element in the array is %d present at index position %d",p,c);
    printf("\nThe Largest element in the array is %d present at index position %d\n\n",q,b);
    return(0);
}
