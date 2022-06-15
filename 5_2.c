#include <stdio.h>
int main()
{
    int i,j,t,a[100],x,p;
    char n;
    printf("\nEnter the length of array : ");
    scanf("%d",&x);
    printf("\nEnter the %d numbers for the array-\n",x);
    for(i=0;i<x;i++)
    scanf("%d",&a[i]);
    printf("\nThe repeatitive elements are-\n\n");
    for(i=0;i<x-1;i++)
    {
        p=0;
        for(j=0;j<x-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
                p++;
            }
        }
        if(p==0)
        break;
    }
    t=0;
    for(i=0;i<x;i=i+p+1)
    {
        p=0;
        for(j=i+1;j<x;j++)
        {
            if(a[i]==a[j])
            {
                t++;
                p++;
            }
        }
        if(p!=0 && p>1)
        printf(" %d -> repeats %d times\n",a[i],p);
        else if(p!=0 && p==1)
        printf(" %d -> repeats 1 time\n",a[i]);
    } 
    printf("\nThe total number of repeatitive elements are %d \n\n",t);
    return 0;
}