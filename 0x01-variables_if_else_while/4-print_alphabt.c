#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Printing Alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	char ch1 = 'f';
	char ch2 = 'r';

	while (ch <= 'd')
	{
		putchar(ch);
		ch++;
	}
	while (ch1 <= 'p')
	{
		putchar(ch1);
		ch1++;
	}
	while (ch2 <= 'z')
	{
		putchar(ch2);
		ch2++;
	}
	putchar('\n');
	return (0);
}
