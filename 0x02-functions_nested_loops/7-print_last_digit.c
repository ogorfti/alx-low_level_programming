#include "main.h"

#define ABS(x) ((x) < 0 ? -(x) : (x))

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to extract the last digit from.
 *
 * Return: The value of the last digit.
 */
int	print_last_digit(int n)
{
	int last_digit = ABS(n % 10);

	_putchar(last_digit + '0');
	return (last_digit);
}
