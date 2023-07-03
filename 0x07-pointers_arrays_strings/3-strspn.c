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
 * _strspn - a function that gets the length of a prefix substring.
 * @s: string to be scanned
 * @accept: string containing the characters to match
 *
 * Return: number of bytes in the initial segment of s which consist only of
 * bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (s[i] && inCharSet(s[i], accept))
		i++;
	return (i);
}
