#include "main.h"

/**
 * rev_string - Reverses a string
 * @s : The string to be reversed
 */
void rev_string(char *s)
{
	int i = _strlen(s);
	int j = 0;
	char temp;

	while (i > j)
	{
		temp = s[--i];
		s[i] = s[j];
		s[j++] = temp;
	}
}
