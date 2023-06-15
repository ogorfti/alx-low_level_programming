#include <unistd.h>
#define MESSAGE "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"

/**
 * main - A program that prints a specific string to the standard error.
 *
 * Return: Always 1 (Failure)
 */
int main(void)
{
	write(2, MESSAGE, sizeof(MESSAGE) - 1);
	return (1);
}
