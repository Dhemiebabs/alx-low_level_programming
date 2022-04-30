/*
 * File: 5-rev_string.c
 * Auth: Demilade Olujide Babajide
 */

#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: string pointer
 * Return: Nothing
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char ch;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		ch = s[i];
		s[i++] = s[len];
		s[len] = ch;
	}
}

