#include <stdio.h>
#include "shell.h"

/**
 * main - Addition and substraction of two numbers
 * DESCRIPTION: @_randon returns the addition and subtraction of two integers
 * Return: Always 0 (Success)
 */
int _random(void)
{
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	int num4 = 10;
	int sum = num1 + num2;
	int subtract = num3 - num4;

	printf("Please enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	printf("This is the sum of the numbers inputted: %d\n", sum);
	printf("Do you want to continue?\n");
	printf("If yes enter two numbers: ");
	scanf("%d %d", &num3, &num4);
	printf("This is the result of the substraction: %d\n", subtract);
	return (0);
}
