#include<stdio.h>
#include<string.h>
int main()
{
    char n[]="MISSISSIPI",s[100];
    strcpy(s,n);
    int c=-1;
    for(int i=0;i<strlen(n);i++)
    {
        c=-1;
        for(int j=i+1;j<strlen(n);j++)
        {
            if(n[i]==n[j])
            {
                printf("%c",n[i]);
                c=0;
                break;
            }
        }
        if(c==0)
        {
            for(int k=0;k<strlen(n);k++)
            {
                if(n[k]==s[i])
                n[i]=' ';
            }
        }

    }
    printf("\n%s",n);
    return 0;
}