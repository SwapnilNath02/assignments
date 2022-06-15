#include<stdio.h>
void new()
{
    static int a=0; //Static - Iinitialised only once and after multiple recalls too a new memory location is not created
    int b=0;
    a++;b++;
    printf("a = %d   b = %d\n",a,b);
}
int main()
{
    printf("\nStatic variable is 'a' and normal/auto variable is 'b'\n\n");
    new();
    new();
    new();
    return 0;
}
