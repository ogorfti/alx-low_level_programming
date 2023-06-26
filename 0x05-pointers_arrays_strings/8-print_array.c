#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: array of integers
 * @n: number of elements to be printed
 * return : void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		(i < n - 1) ? printf(", ") : 0;
	}
	printf("\n");
}
