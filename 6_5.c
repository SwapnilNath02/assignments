#include <stdio.h>
void sum(int *a,int *n)
{
    int s=0;
    for(int i=0;i<*n;i++)
    s+=*(a+i);
    printf("\nThe Sum of elements of the array is %d",s);
}
int main()
{
    int a[100],n,i,t,z;
    printf("\nEnter the length of array = ");
    scanf("%d",&n);
    printf("\nEnter %d values for the array - \n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int *p=&a[0],*q=&n;
    sum(p,q);
    printf("\n\n");
    return(0);
}