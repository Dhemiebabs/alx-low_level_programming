/*
 * File: 102-fibonacci.c
 * Auth: Demilade Olujide Babajide
 */

#include "stdio.h"

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
	int count = 0, num1 = 0, num2 = 1, sum;

	while (count < 50)
	{
		sum = num1 + num2;
		printf("%d", sum);

		num1 = num2;
		num2 = sum;
		count++;

		if (count == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}

