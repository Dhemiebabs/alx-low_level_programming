/*
 * File: 3-puts.c
 * Auth: Demilade Olujide Babajide
 */

#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: string pointer
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
