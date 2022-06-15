#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *ptr;
    ptr=fopen("FILE_01.txt","r");
    if(ptr==NULL){
        printf("No files exists!!");
        exit(1);
    }
    char c;
    printf("\nContents in the file are: \n");
    while((c=fgetc(ptr))!=EOF){
        printf("%c",c);
    }
    printf("\n\n");
    fclose(ptr);
}