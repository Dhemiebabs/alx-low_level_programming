#include <stdio.h>

/**
 * main - Entry point
 * prints the lowercase alphabet in reverse, followed by a new line
 * You can only use the putchar function
 * Return: Always 0 (suceess)
 */
int main(void)
{
	char ch = 'z';

	while (ch < 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar(ch);
	return (0);
}
