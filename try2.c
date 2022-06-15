#include<stdio.h>
#include<string.h>
int main()
{
    /* char a[2][3]={{"ABC\0"},{"PQR\0"}};
    printf("%s ",a[0]);
    return 0; */
    char arr1[2][4] = {{"ABC\0"}, {"PQR\0"}};
	printf("%s", arr1[0]);
	return 0;
}