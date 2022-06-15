#include<stdio.h>

extern int a;
extern char b;
extern float c;
extern int arr[3];
int main()
{
    printf("\nExtern: a=%d\n",a);
    printf("Extern: a=%c\n",b);
    printf("Extern: a=%.3f\n",c);
    printf("Extern: a=%d\n\n",arr[1]);
    return 0;
}