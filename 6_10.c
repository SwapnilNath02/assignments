#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i,t;
    printf("\nEnter the length of array to assign memory to the pointer = ");
    scanf("%d",&n);
    p=(int *)calloc(n,sizeof(int));
    if(p==NULL)
    {
        printf("Memory not available !!");
        return(0);
    }
    printf("\nEnter %d integers - \n",n);
    for(i=0;i<n;i++)
    scanf("%d",p+i);
    t=*p;
    for(i=1;i<n;i++)
    {
        if(t<*(p+i))
        t=*(p+i);
        
    }
    printf("\nThe largest number entered is = %d\n\n",t);
    return(0);
}