#include <stdio.h>
int func(double arr[]);
int main(void)
{
	double arr[5] = {1, 2, 3, 4, 5};
	printf("%lu \n", sizeof(arr)); 

	func(arr);
}

int func(double arr[])
{
	printf("%lu \n", sizeof(arr)); 
}