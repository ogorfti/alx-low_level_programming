#include <stdio.h>

/**
 * main - A program that prints all numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char d;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	for (d = 'a'; d <= 'f'; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
