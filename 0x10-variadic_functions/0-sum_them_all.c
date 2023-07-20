#include "VARIADIC_FUNCTIONS_H"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 *@n: number of arg
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	int sum;
	int i;

	i = 0;
	sum = 0;
	va_start(ptr, n);
	while (i < n)
	{
		sum += va_arg(ptr, int);
		i++;
	}
	return (sum);
}
