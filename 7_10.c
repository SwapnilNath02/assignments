#include<stdio.h>
#include<string.h>
int main()
{
    char n[100];
    int c=0,i,j,a=0;
    printf("\nEnter a string = ");
    scanf("%s",&n);
    while(n[c]!='\0')
    c++;
    for(i=0;i<c;i++)
    {
        a=0;
        for(j=0;j<c;j++)
        {
            if(n[i]==n[j] || n[i]+32==n[j] || n[i]-32==n[j])
            {
                a++;
            }
        }
        if(a==1)
        {
            printf("\nThe first non-repeating character in the string is \'%c\'\n\n",n[i]);
            return 0;
        }
    }
    printf("\nThere are no non-repeating characters in the string\n\n");
    return 0;
}