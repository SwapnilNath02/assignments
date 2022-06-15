#include <stdio.h>
int main()
{
    int i,j,a[100],x;
    char n;
    printf("\nEnter the length of array : ");
    scanf("%d",&x);
    printf("\nEnter the %d numbers for the array-\n",x);
    for(i=0;i<x;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<x;i++)
    for(j=0;j<x;j++)
    if(a[i]==a[j] && i!=j)
    {
        printf("\nThe first repeatitive element is %d\n\n",a[i]);
        return(0);
    }
    printf("\nThere are  no repeatitive elements !!\n\n");
    return(0);
}