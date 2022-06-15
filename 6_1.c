#include <stdio.h>
#pragma GCC diagnostic ignored "-Wdiscarded-qualifiers"
int main()
{
    const int a=10;
    printf("\nConstant int a = %d\n",a);
    int *p=&a;    
    *p+=5;
    printf("Value of \"a\" after changing value via pointer is %d\n\n",a);
    return(0);
}