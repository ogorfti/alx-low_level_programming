#include <unistd.h>

/**
 * main - A program that prints _putchar, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}
