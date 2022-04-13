#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *        only using putchar and without char variables.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar((num % 10) + '0');
		num++;
		while (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
