#include <stdio.h>
int main()
{
    int i,j,a[100],x,p;
    printf("\nEnter the length of array : ");
    scanf("%d",&x);
    printf("\nEnter the %d numbers for the array-\n",x);
    for(i=0;i<x;i++)
    scanf("%d",&a[i]);

    for(i=0;i<x;i++)
    {
        p=0;
        for(j=0;j<x;j++)
        if(a[i]==a[j] && i!=j)
        p=21;
        if(p==0)
        {
            printf("\nThe first non-repeatitive element is %d\n\n",a[i]);
            return(0);
        }
    }
    printf("\nThere are  no non-repeatitive elements !!\n\n");
    return(0);
}