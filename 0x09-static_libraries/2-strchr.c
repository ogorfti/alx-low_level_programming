#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be scanned
 * @c: character to be located
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char	*_strchr(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c)
	{
		if (s[i] == '\0')
			return (0);
		i++;
	}
	return (&s[i]);
}
