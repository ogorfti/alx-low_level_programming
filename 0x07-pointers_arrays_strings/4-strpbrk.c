#include "main.h"

/**
 * inCharSet - checks if a character is in a set of characters
 * @c: character to be checked
 * @accept: string containing the characters to match
 * Return: 1 if c is in accept, 0 otherwise
 */
int inCharSet(char c, char *accept)
{
	int i = 0;

	while (accept[i])
		if (c == accept[i++])
			return (1);
	return (0);
}

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i])
		if (inCharSet(s[i++], accept))
			return (s + i - 1);
	return (NULL);
}
