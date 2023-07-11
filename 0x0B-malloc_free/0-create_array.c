#include "main.h"

/**
 *create_array -  creates an array of chars
 *@size: the size of the array to create
 *@c: init character
 *Return: returns a pointer to an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	array = malloc(size + 1);
	if (!array)
		return (NULL);
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	arr[i] = '\0';
	return (array);
}
