#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void)
{
	char c;
	FILE *fptr = fopen("FILE_05.txt", "w+");
	if (fptr == NULL) 
	{
		printf("No file found !!\n\n");
		exit(1);
	}
	printf("\nEnter the contents of the file \"FILE_05.txt\" :-\n\n");
	while ((c=getchar()) != '@')
	putc(c,fptr);
	putc(c,fptr);
	fseek(fptr, 0, SEEK_SET);
	printf("\nContents in \"FILE_05.txt\" is : \n\n");
	while ((c=getc(fptr)) != '@') 
	putchar(c);
	fclose(fptr);
	printf("\n\n");
	return 0;
}