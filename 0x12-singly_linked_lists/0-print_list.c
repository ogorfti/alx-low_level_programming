#include "lists.h"

/**
 *print_list - prints all the elements of a list
 *@h: the head of the list
 *Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t lenght = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		lenght++;
		h = h->next;
	}
	return (lenght);
}
