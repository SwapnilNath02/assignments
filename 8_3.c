#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *ptr1,*ptr2;
    char a;
    ptr1=fopen("FILE_01.txt","r");
    ptr2=fopen("FILE_02.txt","w+");
    if(ptr1==NULL)
    {
        printf("No file exists!!\n\n");
        exit(1);
    }
    while( (a=fgetc(ptr1))!=EOF)
    fputc(a,ptr2);
    printf("\nContents in the file \"FILE_02\" are: \n");
    fseek(ptr2,0,0);
    while((a=fgetc(ptr2))!=EOF)
    printf("%c",a);
    printf("\n\nContents of \"FILE_01\" is Successfully copied in \"FILE_02\".\n\n");
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}