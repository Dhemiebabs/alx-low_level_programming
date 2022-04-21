/*
 * File: 6-print_line.c
 * Auth: Demilade Olujide Babajide
 */

#include "main.h"

/**
 * print_line - prints the alphabet, in lowercase.
 * @n: The number of _ characters to be printed.
 */

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
