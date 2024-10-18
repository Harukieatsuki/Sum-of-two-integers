#include <stdio.h>

int main(void)
{
	// declare two int-type variables storing two integers
	int num1, num2;
	// get user's input
	printf("Enter the value of two integers: ");
	scanf("%d%d", &num1, &num2);
	// declare a variable "sum" to add up num1 and num2
	int sum = num1 + num2;
	// print the result to the screen
	printf("%d", sum);
	return 0;
}
