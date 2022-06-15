#include <stdio.h>
int main()
{
    int a[100],n,i,t,z;
    printf("\nEnter the length of array = ");
    scanf("%d",&n);
    printf("\nEnter %d values for the array - \n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\nPress \"1\" to sort in ascending order \nPress \"2\" to sort in descending order\n");
    scanf("%d",&z);
    int *p=&a[0];
    int *q=&t; 
    if(z==1)
    {
        for(i=0;i<n-1;p-=(n-1-i),i++)
        {
            z=0;
            for(int j=0;j<n-1-i;j++,p++)
            {
                if(*p>*(p+1))
                {
                    z++;
                    *q=*p;
                    *p=*(p+1);
                    *(p+1)=*q;
                }
            }
            if(z==0)
            break;
        }
        printf("\nThe sorted array is (in ascending order) - \n");
        for(i=0;i<n;i++)
        printf("%d ",a[i]);
        printf("\n\n");
    }
    else if(z==2)
    {
        for(i=0;i<n-1;p-=(n-1-i),i++)
        {
            z=0;
            for(int j=0;j<n-1-i;j++,p++)
            {
                if(*p<*(p+1))
                {
                    z++;
                    *q=*p;
                    *p=*(p+1);
                    *(p+1)=*q;
                }
            }
            if(z==0)
            break;
        }
        printf("\nThe sorted array is (in descending order) - \n");
        for(i=0;i<n;i++)
        printf("%d ",a[i]);
        printf("\n\n");
    }
    else
    printf("Invalid Inpur !!!\n\n");
    return(0);
}