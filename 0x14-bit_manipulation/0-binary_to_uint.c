#include "main.h"

/**
 *binary_to_uint - converts binary number to unsigned int
 *@b: the binary to convert
 *Return: the decimal representation of the binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;

	for (num = 0; b && *b; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		num <<= 1;
		num += *b - '0';
	}
	return (num);
}

