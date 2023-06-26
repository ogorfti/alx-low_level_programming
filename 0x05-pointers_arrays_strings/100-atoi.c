#include "main.h"

/**
 * _atoi - man atoi
 * @s: The source string
 * Return: nbr
 */
int	_atoi(char *s)
{
	int	i;
	int	r;
	int	sn;

	i = 0;
	r = 0;
	sn = 1;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sn = sn * (-1);
			i++;
	}
	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		r = r * 10;
		r = r + s[i] - 48;
		i++;
	}
	return (sn * r);
}
