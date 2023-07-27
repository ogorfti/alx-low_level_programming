#include "lists.h"

/**
*add_node - Add a new node at the beginning of a list.
*@head: Pointer to the head of the list.
*@str: The string to add
*
*Return: The address of the new node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	new->str = strdup(str);
	new->len = strlen(str);

	if (*head)
	{
		new->next = *head;
		*head = new;
	}
	else
		*head = new;
	return (new);
}

