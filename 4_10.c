#include<stdio.h>
int main()
{
    auto int a; /*Automatic variables are normal variables, i.e., 
        all the variables defined inside a function definition with 
        storage class specifiers are automatic variables */
    a=13;
    printf("\nauto: a = %d\n",a);
    printf("auto: --a = %d\n\n",--a);
}