#include <stdio.h>
int main()
{
    int i,j,t,a[100],k;
    char n;
    printf("Enter the length of array : ");
    scanf("%d",&k);
    printf("\nEnter the %d numbers for the array-\n",k);
    for(i=0;i<k;i++)
    scanf("%d",&a[i]);
    for(;;)
    {
        printf("\nThe cyclically rotated array is-\n");
        t=a[0];
        a[0]=a[k-1];
        a[k-1]=t;
        for(int j=k-2;j>0;j--)
        {
            t=a[j+1];
            a[j+1]=a[j];
            a[j]=t;
        }
        for(i=0;i<k;i++)
        printf("%d ",a[i]);
        printf("\n");
        printf("\nDo you want to cyclically rotate the array again. \nPress any key to continue \nPress '1' to stop the program\n");
        scanf("%c",&n);
        scanf("%c",&n);
        if(n=='1')
        break;
    }
}