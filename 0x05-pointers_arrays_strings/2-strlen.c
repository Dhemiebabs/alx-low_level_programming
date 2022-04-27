/*
 * File: 2-strlen.c
 * Auth: Demilade Olujide Babajide
 */

#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: pointer that takes the char
 *
 * Return: The length of @s
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
