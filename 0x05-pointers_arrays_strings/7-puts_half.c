#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to be printed
 * return : void
 */
void puts_half(char *str)
{
	int str_len = 0;
	int i = 0;

	while (str[str_len])
		str_len++;

	i = (str_len % 2 == 0) ? str_len / 2 : (str_len + 1) / 2;

	while (str[i])
		_putchar(str[i++]);
	_putchar('\n');
}
