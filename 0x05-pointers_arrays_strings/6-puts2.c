/*
 * File: 6-puts2.c
 * Auth: Demilade Olujide Babajide
 */

#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 *	starting with the first character, followed by a new line.
 * @str: string pointer
 * Return: Nothing
 */

void puts2(char *str)
{
	int i = 0, len = 0;

	while (str[len] != '\0')
		len++;

	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
