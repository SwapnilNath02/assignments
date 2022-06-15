#include <stdio.h>
int main()
{
    int i,j,a[100][100],b[100][100],c[100][100],r,p,q,s;
    printf("\nEnter the order of 1st matrix p x q :\np = ");
    scanf("%d",&p);
    printf("q = ");
    scanf("%d",&q);
    printf("\nEnter the numbers for %d x %d matrix -\n",p,q);
    
    for(i=0;i<p;i++)
    for(j=0;j<q;j++)
    scanf("%d",&a[i][j]);

    printf("\nEnter the order of 2nd matrix q x r :\n");
    printf("q = %d\nq = ",q);
    scanf("%d",&r);
    printf("\nEnter the numbers for %d x %d matrix -\n",q,r);

    for(i=0;i<q;i++)
    for(j=0;j<r;j++)
    scanf("%d",&b[i][j]);
    
    for(i=0;i<p;i++)
    {
        
        for(j=0;j<r;j++)
        {
            s=0;
            for(int k=0;k<q;k++)
            s+=a[i][k]*b[k][j];
            c[i][j]=s;
        }
    }
    printf("\nThe result of multiplication  of the matrices is - \n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<r;j++)
        printf("%d  ",c[i][j]);
        printf("\n");
    }
    printf("\n\n");
    return(0);
}