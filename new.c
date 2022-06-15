#include<stdio.h>
int main()
{
        int a[3][3],b[3][3],c[3][3],i,j,k,s;
        system("cls");
        printf("Input values of two matrices- \n\n1st-\n");
        for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        scanf("%5d",&a[i][j]);
        
        printf("\n2nd-\n");
        for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        scanf("%d",&b[i][j]);
        
        for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            s=0;
            for(k=0;k<3;k++)
            s+=a[i][k]*b[k][j];
            c[i][j]=s;
        }

        printf("Result of multiplication-\n");
        for(i=0;i<3;i++)
        {
            printf("\n");
            for(j=0;j<3;j++)
            printf("%5d",c[i][j]);
        }
}