#include "main.h"

/**
 * print_rev - Prints a string in reverse
 *
 * @s: The string to be printed
 *
 * return : void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
