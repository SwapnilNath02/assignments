#include<stdio.h>
void byvalue(int ,int );
int main()
{
        int a,b;
        printf("\nEnter values of a and b -\n");
        scanf("%d%d",&a,&b);
        byvalue(a,b);
        printf("\nValues of a and b after function call is over -\n a = %d \n b = %d",a,b);
        return 0;
}
void byvalue(int a,int b)
{
    int t=a;
    a=b;
    b=t;
    printf("\nValues of a and b after swapping in function -\n a = %d \n b = %d\n",a,b);
}