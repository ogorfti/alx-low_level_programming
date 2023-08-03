#include "main.h"

/**
 *binary_to_uint - converts binary number to unsigned int
 *@b: the binary to convert
 *Return: the decimal representation of the binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;
	
	while (b && b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num <<= 1;
		num += (b[i] - '0');
		i++;
	}
	return (num);
}

