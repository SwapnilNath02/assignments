#include<stdio.h>
#include<string.h>
int main()
{
    char n[100],s[100],t;
    int a[128]={0},c=0,i,j,k,m,x;
    printf("\nEnter a string = ");
    scanf("%[^\n]%*c",&n);
    while(n[c]!='\0')
    c++;
    for(i=0;i<c;i+=m+1)
    {
        m=0;
        x=i;
        while(n[m]!=' ' && n[m]!='\0')
        {
            s[m]=n[x];
            m++;
            x++;
        }
        s[m]='\0';
        for(j=0;j<m/2;j++)
        {
            t=s[j];
            s[j]=s[m-1-j];
            s[m-1-j]=t;
        }
        for(j=i,k=0;j<m+i;k++,j++)
        n[j]=s[k];
    }
    printf("\n%s \n\n",n);
    return 0;
}