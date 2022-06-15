#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i,t;
    printf("\nEnter the length of array to assign memory to the pointer = ");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("Memory not available !!");
        return(0);
    }
    printf("\nEnter %d integers - \n",n);
    for(i=0;i<n;i++)
    scanf("%d",p+i);
    printf("\nThe reversed array of integers is-\n");
    for(i=0;i<n/2;i++)
    {
        t=*(p+i);
        *(p+i)=*(p+n-1-i);
        *(p+n-1-i)=t;
    }
    for(i=0;i<n;i++)
    printf("%d ",*(p+i));
    printf("\n\n");
    return(0);
}