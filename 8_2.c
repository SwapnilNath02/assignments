#include <stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp = fopen("FILE_01.txt", "r");
    if(fp==NULL)
    {
        printf("No file exists!!");
        exit(1);
    }
    fseek(fp, 0, SEEK_END);
    printf("\nSize of the file FILE_01.txt : ");
    printf("%d\n\n", ftell(fp));
    fclose(fp);
    return 0;
}