/*
 * File: 3-print_numbers.c
 * Auth: Demilade Olujide Babajide
 */

#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 */

void print_numbers(void)
{

	int n = 0;

	while (n <= 9)
	{
		_putchar((n % 10) + '0');
		n++;
	}
	_putchar('\n');
}
