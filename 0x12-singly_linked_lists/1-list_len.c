#include "lists.h"

/**
*list_len - Get the number of elements in a linked list.
*@h: Pointer to the head of the linked list.
*
*Return: The number of elements in the linked list.
*/
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}

