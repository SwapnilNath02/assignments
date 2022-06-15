#include <stdio.h>
int main()
{
    int i,j,a[100][100],p,s;
    printf("\nEnter the order of square matrix p x p :-\np = ");
    scanf("%d",&p);
    printf("\nEnter the numbers for %d x %d matrix -\n",p,p);
    
    for(i=0;i<p;i++)
    for(j=0;j<p;j++)
    scanf("%d",&a[i][j]);
    
    for(i=0;i<p;i++)
    for(j=0;j<p;j++)
    {
        if(i>j)
        a[i][j]=0;
    }

    printf("\nThe upper triangular matrix is - \n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<p;j++)
        printf("%d  ",a[i][j]);
        printf("\n");
    }

    printf("\n\n");
    return(0);
}