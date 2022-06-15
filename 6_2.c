#include <stdio.h>
int main()
{
    int a[100],n,i;
    printf("\nEnter the length of array = ");
    scanf("%d",&n);
    printf("\nEnter %d values for the array - \n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int *p=&a[0];
    for(i=0;i<n-1;i++)
    {
        if(*p>*(p+1))
        p++;
        else
        {
            *(p+1)=*p;
            p++;
        }
    }
    printf("\nSmallest number in the array is = %d\n\n",*p);
    return(0);
}