#include "main.h"

/**
 *flip_bits - returns the number of bits to flip in n to get the m
 *@n: the number n
 *@m: the number m
 *Return: return the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_value = n ^ m;
	unsigned int count = 0;

	while (xor_value)
	{
		count++;
		/* clear the least significant bit that is set */
		xor_value &= xor_value - 1;
	}

	return (count);
}

