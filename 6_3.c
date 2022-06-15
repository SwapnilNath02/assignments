#include <stdio.h>
int main()
{
    int a[100],b[100],n,i;
    printf("\nEnter the length of array = ");
    scanf("%d",&n);
    printf("\nEnter %d values for the array \"a\"- \n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    int *p=&a[0];
    int *q=&b[0];

    for(i=0;i<n;i++,p++,q++)
    *q=*p;

    printf("\nThe duplicate array \"b\"is - \n");
    for(i=0;i<n;i++)
    printf("%d ",b[i]);
    printf("\n\n");
    return(0);
}