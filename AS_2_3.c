 #include <stdio.h>
int main()
{
    int x,y,z;
    printf("\nEnter 3 values - \n");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y && x>z)
    printf("\nThe largest number is = %d\n\n",x);
    else if(y>x && y>z)
    printf("\nThe largest number is = %d\n\n",y);
    else
    printf("\nThe largest number is = %d\n\n",z);
    return 0;
}