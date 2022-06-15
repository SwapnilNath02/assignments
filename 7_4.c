#include<stdio.h>
#include<string.h>
int main()
{
    char n[100];
    int a[128]={0},c=0,i,x;
    printf("\nEnter a string = ");
    scanf("%[^\n]%*c",&n);
    while(n[c]!='\0')
    c++;
    for(i=0;i<c;i++)
    {
        if(n[i]>=65 && n[i]<=90)
        x=n[i]+32;
        else
        x=n[i];
        a[x]++;
    }
    printf("\nThe duplicate character(s) in the word is/are-");
    for(i=97;i<122;i++)
    if(a[i]>1)
    printf("\n%c ",i);
    printf("\n\n");
    return 0;
}