#include<stdio.h>
#include<math.h>
int main()
{
    long long unsigned int n,a,b,power;
    int x=0,c;
    printf("\nEnter a number (whole number) : ");
    scanf("%llu",&n);
    a=n;
    printf("\n%llu = ",n);
    if(n>=0)
    {
        while(a>0)
        {
            x++;
            a/=10;
        }
        a=n;
        c=x-1;
        while(c>=0)
        {
            power=pow(10,c);
            b=a/power;
            a%=power;
            c--;
            switch(b)
            {
                case 0: printf("zero ");
                        break;
                case 1: printf("one ");
                        break;
                case 2: printf("two ");
                        break;
                case 3: printf("three ");
                        break;
                case 4: printf("four ");
                        break;
                case 5: printf("five ");
                        break;
                case 6: printf("six ");
                        break;
                case 7: printf("seven ");
                        break;
                case 8: printf("eight ");
                        break;
                case 9: printf("nine ");
                        break;
            }
        }
        printf("\n\n");
    }
    else
    printf("The number entered is less than 0, i.e., it is a negative number !! ");
    return 0;
}