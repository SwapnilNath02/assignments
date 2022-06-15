#include<stdio.h>
#include<string.h>
int main()
{
    char n1[100],n2[100];
    int a[128]={0},c=0,d=0,i,x;
    printf("\nEnter 1st string = ");
    scanf("%s",&n1);
    printf("\nEnter 2nd string = ");
    scanf("%s",&n2);
    while(n1[c]!='\0')
    c++;
    while(n1[d]!='\0')
    d++;
    if(c!=d)
    {
        printf("\nThe 1st and 2nd strings are not rotations of each other\n\n");
        return 0;
    }
    for(i=0;i<c;i++)
    {
        if(n1[i]>=65 && n1[i]<=90)
        x=n1[i]+32;
        else
        x=n1[i];
        a[x]++;
    }
    for(i=0;i<c;i++)
    {
        if(n2[i]>=65 && n2[i]<=90)
        x=n2[i]+32;
        else
        x=n2[i];
        a[x]++;
    }
    for(i=97;i<122;i++)
    if(a[i]==1)
    {
        printf("\nThe 1st and 2nd strings are not rotations of each other\n\n");
        return 0;
    }
    printf("\nThe 1st and 2nd strings are rotations of each other\n\n");
    return 0;
}