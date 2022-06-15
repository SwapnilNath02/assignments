#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float s=1;
    printf("\nEnter the number of terms, n = ");
    scanf("%d",&n);
    
    for(int i=2;i<=n;i++)
    s+=pow(-1,i-1)/(float)(i*(i+1)*(i+1));

    printf("\nSum = %.4f",s);
    return 0;
}