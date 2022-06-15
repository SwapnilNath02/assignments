#include<stdio.h>
#include<string.h>
void swapping(char*, char*);
void Permutation(char*, int, int);
int main()
{
    char str[100],length;
    printf("\nEnter any string : ");
    gets(str);
    length = strlen(str);
    printf("\nThe permutations of the string are : \n\n");
    Permutation(str, 0, length-1);
    printf("\n\n");
    return 0;
}
void swapping(char *ch1, char *ch2)
{
    char temp;
    temp = *ch1;
    *ch1 = *ch2;
    *ch2 = temp;
}
void Permutation(char *str, int f, int l)
{
    int i,c=0;
    static int k=0,s=0;
    char a[200][100];
    if (f == l)
    {
        strcpy(a[k],str);
        k++;
        for(int x=0;x<k-1;x++)
        {
            if(strcmp(a[x],str)==0)
            {
                c=-1;
                break;
            }
        }
        if(c!=-1)
        {
            printf("%s  ", str);
            if(++s%10==0)
            printf("\n");
        }
    }
    else
    {
        for (i = f; i <= l; i++)
        {
           swapping((str+f), (str+i));
           Permutation(str, f+1, l);
           swapping((str+f), (str+i)); 
        }
    }
}