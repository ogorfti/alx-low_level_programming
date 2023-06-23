#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100 with FizzBuzz rules.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		(i % 3 == 0) ? printf("Fizz") : 0;
		(i % 5 == 0) ? printf("Buzz") : 0;
		(i % 3 != 0 && i % 5 != 0) ? printf("%d", i) : 0;
		(i != 100) ? printf(" ") : 0;
	}
	printf("\n");
	return (0);
}
