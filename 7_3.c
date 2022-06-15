#include<stdio.h>
#include<string.h>
int main()
{
    char n[100],a[100],b[26];
    int c=0,p,i=0,j,m,x[26];
    for(i=0;i<26;i++)
    x[i]=0;
    printf("\nEnter a word = ");
    scanf("%s",&n);
    while(n[i]!='\0')
    {
        a[i]=n[i];
        i++;
    }
    a[i]='\0';
    i=0;m=0;
    while(n[i]!='\0')
    {
        j=i;
        while(n[j]!='\0')
        {
            if(a[j]=='0')
            break;
            if(n[i]==n[j])
            {
                b[i]=n[i];
                x[m]++;
                a[j]='0';
            }
            j++;
        }
        m++;
        i++;
    }
    p=x[0];
    for(i=1;i<m;i++)
    if(p<x[i])
    p=x[i];
    printf("\nThe character(s) occurring maximum times is/are-");
    for(i=0;i<m;i++)
    if(p==x[i])
    printf("\n%c occurs %d times",b[i],x[i]);
    printf("\n\n");
    return 0;
}