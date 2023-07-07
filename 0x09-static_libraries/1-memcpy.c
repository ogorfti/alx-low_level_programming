#include "main.h"

/**
 * _memcpy - copies from memory area src to memory area dest.
 * @dest: pointer to the destination array where the content is to be copied
 * @src: pointer to the source of data to be copied
 * @n: number of bytes to copy
 *
 * Return: pointer to the destination char*
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	if (!dest || !src)
		return (NULL);
	while (n--)
		*(dest + n) = *(src + n);
	return (dest);
}
