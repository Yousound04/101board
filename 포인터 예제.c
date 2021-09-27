#include <stdio.h> 

void main(void)
{
	int num1 = 3;
	int num2 = 4;
	printf("%d\n", num1);
	printf("%d\n\n", num2);

	num1 = 30;
	num2 = 40;
	printf("%d\n", num1);
	printf("%d\n\n", num2);

	int num3 = 15;
	int* ptr = &num3;
	printf("%d\n", num3);
	printf("%d\n", ptr);
	printf("%d\n", *ptr);
}