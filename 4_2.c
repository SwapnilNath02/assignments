#include<stdio.h>
void byreference(int *,int *);
int main()
{
        int a,b;
        printf("\nEnter values of a and b -\n");
        scanf("%d%d",&a,&b);
        byreference(&a,&b);
        printf("\nValues of a and b after function call is over -\n a = %d \n b = %d",a,b);
        return 0;
}
void byreference(int *p,int *q)
{
    int t=*p;
    *p=*q;
    *q=t;
    printf("\nValues of a and b after swapping in function -\n a = %d \n b = %d\n",*p,*q);
}