#include <stdio.h>

/**
 * main - A program that prints all possible different combinations
 * of three digits using putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, l;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (l = j + 1; l < 10; l++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(l + '0');

				if (i < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
