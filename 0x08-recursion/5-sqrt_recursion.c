#include "main.h"

/**
 * natural_sqrt - calculate natural sqrt
 * @n: number to whose natural sqrt is to be calculated
 * @i: counter.
 *
 * Return: the natural sqrt of n
 */

int natural_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (natural_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - calculates the square root of a number using recursion
 * @n: the number to deal with.
 *
 * Return: square root of n.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (natural_sqrt(n, 0));
}
