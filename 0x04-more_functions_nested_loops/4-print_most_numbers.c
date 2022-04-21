/*
 * File: 4-print_most_numbers.c
 * Auth: Demilade Olujide Babajide
 */

#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9.
 */

void print_most_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		if (n != 2 && n != 4)
		_putchar((n % 10) + '0');
		n++;
	}
	_putchar('\n');
}

