#include <stdio.h>

int main(void)
{
	char filename[20], c;
	int count=0;
	printf("\nEnter filename: ");
	scanf("%s", filename);

	FILE *fptr = fopen(filename, "r");

	while ((c = fgetc(fptr)) != EOF) 
	if (c == '\n')
	count++;
	printf("\nNumber of lines in %s is %d\n\n", filename, count);
	fclose(fptr);

	return 0;
}