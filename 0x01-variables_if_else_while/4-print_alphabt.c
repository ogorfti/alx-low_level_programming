#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase
 * (except q and e) using putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
