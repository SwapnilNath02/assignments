#include<stdio.h>
#include<string.h>
int main()
{
    char n[100];
    int c=0,a;
    printf("\nEnter a word = ");
    scanf("%s",&n);
    a=strlen(n);
    for(int i=0;i<a/2;i++)
    {
        if(n[i]==n[a-1-i] || n[i]+32==n[a-1-i] || n[i]-32==n[a-1-i])
        c=-1;
        else
        {
            c=0;
            break;
        }
    }
    if(c==-1)
    printf("\nThe word is Palindrome\n\n");
    else
    printf("\nThe word is not Palindrome\n\n");
    return 0;
}