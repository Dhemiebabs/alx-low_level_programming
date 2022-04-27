/*
 * File: 1-swap.c
 * Auth: Demilade Olujide Babajide
 */

#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: First integer
 * @b: Second integer
 */

void swap_int(int *a, int *b)
{
	int a2 = *a;
	*a = *b;
	*b = a2;
}
