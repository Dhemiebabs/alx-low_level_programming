#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
int i;
char st[30] = "Size of ";
float f;
long int ii;
long long int iii;
char c;
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(ii));
printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(iii));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
