#ifndef LISTS_H
#define LISTS_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: the given string
 * @len: length of the string
 * @next: pointer to the next node.
 *
 * Description: singly linked list node structure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif