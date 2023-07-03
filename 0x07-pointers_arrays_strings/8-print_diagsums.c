#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the two
 *		diagonals of a square matrix of integers
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, tmp0, tmp1;

	tmp0 = 0;
	tmp1 = 0;
	for (i = 0; i < size; i++)
	{
		tmp0 += a[i * (size + 1)];
		tmp1 += a[(i + 1) * (size - 1)];
	}
	printf("%d, %d\n", tmp0, tmp1);
}
