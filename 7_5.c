#include<stdio.h>
#include<string.h>
int main()
{
    char n1[100],n2[100],x[100];
    int c=0,d=0,i,j,m=0,a=0;
    printf("\nEnter 1st string = ");
    scanf("%s",&n1);
    printf("\nEnter 2nd string to remove the desired characters from 1st string = ");
    scanf("%s",&n2);
    while(n1[c]!='\0')
    c++;
    while(n2[d]!='\0')
    d++;
    if(d>c)
    {
        printf("\nInvalid Input for 2nd string !!\n2nd string has more characters than 1st string\n\n");
        return 0;
    }
    for(i=0;i<c;i++)
    {
        a=11;
        for(j=0;j<d;j++)
        {
            if(n1[i]==n2[j] || n1[i]==n2[j]+32 || n1[i]==n2[j]-32)
            a=-1;
        }
        if(a!=-1)
        x[m++]=n1[i];
    }
    for(i=0;i<m;i++)
    n1[i]=x[i];
    n1[i]='\0';
    if(n1[0]=='\0')
    {
        printf("\nThe 1st string is EMPTY after removing characters from 2nd string \n\n");
        return 0;
    }
    printf("\nThe 1st string after removing characters from 2nd string is = %s\n\n",n1);
    return 0;
}