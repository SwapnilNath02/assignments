#include <stdio.h>
#include <stdlib.h>
#define IN  1
#define OUT 0
int main(void)
{
	char filename[20], c;
	int words, chars, state;
	words = chars = 0;
	printf("\nEnter filename: ");
	scanf("%s", filename);
	FILE *fptr = fopen(filename, "r");
	state = OUT;
	while ((c = fgetc(fptr)) != EOF) 
    {
		chars++;
		if (c == ' ' || c == '\n' || c == '\t') 
		state = OUT;
		else if (state == OUT)
         {
			state = IN;
			++words;
		}
	}
	printf("\nThere are %d words and %d characters in %s", words, chars, filename);
	fclose(fptr);
    printf("\n\n");
	return 0;
}