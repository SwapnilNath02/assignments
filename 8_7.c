#include <stdio.h>
int main(void)
{
	char filename1[20], c, filename2[20];
	int count;
	printf("\nEnter filename to read from: ");
	scanf("%s", filename1);
	printf("Enter filename to write to: ");
	scanf("%s", filename2);
	FILE *fptr = fopen(filename1, "r");
	FILE *fptr2 = fopen(filename2, "w+");
	while ((c = fgetc(fptr)) != EOF) 
    {
		if (c >= 97 && c <= 122)
			fputc(c - 32, fptr2);
		else
			fputc(c, fptr2);
	}
    fseek(fptr2, 0, 0);
    printf("\nThe contents in the new file \"%s\" is:-\n\n",filename2);
    while((c = fgetc(fptr2)) != EOF)
    putchar(c);
    printf("\n\n");
	fclose(fptr2);
	fclose(fptr);
	return 0;
}