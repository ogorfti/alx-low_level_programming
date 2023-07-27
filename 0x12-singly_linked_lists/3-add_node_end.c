#include "lists.h"

/**
 * add_node_end - Add a new node to the end of a list.
 * @head: The head of the list.
 * @str: The string to add.
 *
 * Return: The address of the new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *loop;

	loop = *head;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head)
	{
		while (loop->next)
			loop = loop->next;
		loop->next = new;
	}
	else
		*head = new;
	return (new);
}

