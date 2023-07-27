#include "lists.h"

/**
 *free_list - free all list
 *
 *@head: the head of the list
 */

void free_list(list_t *head)
{
	list_t *saver;

	while (head)
	{
		saver = head;
		head = head->next;
		free(saver->str);
		free(saver);
	}
}

