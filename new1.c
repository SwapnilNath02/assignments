#include<stdio.h>
void main()
{
        int a[10],b,i;
        printf("Enter the targeted value - ");
        scanf("%d",&b);
        printf("Enter the array of 10 numbers - \n ");
        for(i=0;i<10;i++)
        scanf("%d",&a[i]);
        printf("\n\nThe index values are -\n");
        for(i=0;i<9;i++)
        for(int j=i+1;j<10;j++)
         if(a[i]+a[j]==b)
        {
            printf("[%d, %d]\n",i,j);
        }
}