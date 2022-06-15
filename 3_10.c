#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int a,b,x=0;
    srand(time(NULL));
    a=rand()%100+1;
    printf("\n\nRandomly a number has been chosen between 1 to 100."); 
    printf("\nYour job is to find the number for which you will get 10 chances.");
    printf("\n\nGOOD LUCK !!\n");
    for(int i=1;i<11;i++)
    {
        printf("\nEnter your guess (%d chances left): ",11-i);
        scanf("%d",&b);
        if(a==b)
        {
            printf("\nCONGRATULATIONS YOU WON!! Your guess was CORRECT !!\n\n");
            return 0;
        }
        else if(i==10)
        break;
        else if(b>a)
        printf("The number is smaller than your guess\n");
        else
        printf("The number is larger than your guess\n");
    }
    printf("\nYOU LOST !! The number chosen was %d \n\n",a);
}