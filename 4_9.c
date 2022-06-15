#include<stdio.h>
int main()
{
    register int a; /*Register variables are stored in CPU registers 
    which makes accessing them much faster than the variables stored in the memory*/
    a=21;
    printf("\nregister: a = %d\n",a);
    printf("register: ++a = %d\n\n",++a);
}