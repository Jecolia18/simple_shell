#include <stdio.h>

/**
 * main - Addition and substraction of two numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2, num3, num4;
	int sum = num1 + num2;
	int subtract = num3 - num4;

	printf("Please enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	printf("This is the sum of the numbers inputted: %d\n", sum);
	printf("Do you want to continue?\n");
	printf("If yes enter two numbers: ");
	scanf("%d %d", &num3, &num4);
	printf("This is the result of the substraction: %d\n", subs);
	
	return (0);
}
