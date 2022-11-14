#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * list_len - entry point
 * Description: return the numbers of elements in a linked list
 * @h: list
 * Return: the number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

