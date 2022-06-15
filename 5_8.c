#include <stdio.h>
int main()
{
    int i,j,a[100][100],b[100][100],x,k,p,q,t;
    printf("\nEnter the order of matrix p x q :\np = ");
    scanf("%d",&p);
    printf("q = ");
    scanf("%d",&q);
    printf("\nEnter the numbers for %d x %d matrix -\n",p,q);
    
    for(i=0;i<p;i++)
    for(j=0;j<q;j++)
    scanf("%d",&a[i][j]);
    
    for(i=0;i<p;i++)
    for(j=0;j<q;j++)
    b[j][i]=a[i][j];

    printf("\nThe transpose of the matrix is - \n");
    
    for(i=0;i<q;i++)
    for(j=0;j<p;j++)
    a[i][j]=b[i][j];
    
    for(i=0;i<q;i++)
    {
        for(j=0;j<p;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }
    printf("\n\n");
    return(0);
}