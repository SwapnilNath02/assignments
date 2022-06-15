#include<stdio.h>
#include<string.h>
void rev(char *p,int c,int i,char *q)
{
    char t;
    if(c>=i)
    {
        t=*q;
        *q=*p;
        *p=t;
        rev(--p,--c,i,++q);
    }
}
int main()
{
    char n[100],*p,*q;
    int c=0,d=0,i,j,m=0,a=0;
    printf("\nEnter a string = ");
    scanf("%[^\n]%*c",&n);
    while(n[c]!='\0')
    c++;
    p=&n[c-1];
    q=&n[0];
    rev(p,c-1,c/2,q);
    printf("\nThe reverse of the string is -> \"%s\"\n\n",n);
    return 0;
}