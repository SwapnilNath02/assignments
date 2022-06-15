#include<stdio.h>
int main()
{
    char n1[100],n2[100],t;
    printf("\nEnter two strings (words) - \na = ");
    scanf("%s",&n1);
    printf("b = ");
    scanf("%s",&n2);
    int i=0,m=0,n=0;
    while(n1[i]!='\0')
    {
        m++;
        i++;
    }
    i=0;
    while(n2[i]!='\0')
    {
        n++;
        i++;
    }
    if(m>n)
    {
        for(i=0;i<n;i++)
        {
            t=n1[i];
            n1[i]=n2[i];
            n2[i]=t;
        }
        while(i<m)
        {
            n2[i]=n1[i];
            i++;
        }
        n1[n]='\0';
        n2[m]='\0';
    }
    else
    {
        for(i=0;i<m;i++)
        {
            t=n1[i];
            n1[i]=n2[i];
            n2[i]=t;
        }
        while(i<n)
        {
            n1[i]=n2[i];
            i++;
        }
        n1[n]='\0';
        n2[m]='\0';
    }
    printf("\nThe strings after being swapped is - \na = %s \nb = %s\n\n",n1,n2);
    return 0;
}