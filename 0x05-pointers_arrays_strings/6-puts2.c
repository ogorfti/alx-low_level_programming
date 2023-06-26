#include "main.h"

/**
 * puts2 - Prints every other character of a string starting with the first
 *
 * @str: The string to be printed
 *
 * return : void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
