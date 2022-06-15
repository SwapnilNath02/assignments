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
   int i;
   if (f == l)
     printf("%s\t", str);
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