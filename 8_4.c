#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *ptr;
    char arr[500];
    int n;
    printf("\nEnter no of lines :");
    scanf("%d",&n);
    printf("\nEnter your content: \n");
    ptr=fopen("FILE_03.txt","w");
    if(ptr==NULL)
    {
        printf("No file exists");
        exit(1);
    }
    for(int i=0;i<n+1;i++){
        fgets(arr, sizeof(arr), stdin);
		fputs(arr, ptr);
    }
    printf("\nSuccessfully saved your content.\n\n");
    fclose(ptr);
}