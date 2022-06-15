#include <stdio.h>
int main()
{
    int i,j,a[100][100],b[100][100],c[100][100],s;
    printf("\nEnter the numbers for the 1st 3 x 3 matrix -\n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);

    printf("\nEnter the numbers for the 2nd 3 x 3 matrix -\n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&b[i][j]);
    
    for(i=0;i<3;i++)
    {
        
        for(j=0;j<3;j++)
        {
            s=0;
            for(int k=0;k<3;k++)
            s+=a[i][k]*b[k][j];
            c[i][j]=s;
        }
    }
    printf("\nThe result of multiplication  of the matrices is - \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("%d  ",c[i][j]);
        printf("\n");
    }
    printf("\n\n");
    return(0);
}