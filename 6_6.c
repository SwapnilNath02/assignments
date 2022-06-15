#include <stdio.h>
#include<string.h>
int main()
{
    int a,t,z,i=0;
    char n[100],*ch=&n[0];
    printf("\nEnter a decimal number which is to be converted to hexadecimal form (n>=0) = ");
    scanf("%d",&a);
    z=a;
    int *p=&a;
    int *x=&t;
    while(1)
    {
        *x=*p%16;
        *p/=16;
        if(*x>=0 && *x<=9)
            *ch=48+*x;
        else
            *ch=65+*x-10;
        ch++;
        if(*p==0)
        break;
    }
    *ch='\0';
    strrev(n);
    printf("\nThe decimal number in hexadecimal form is -\n%d = %s\n\n",z,n);
    return(0);
}