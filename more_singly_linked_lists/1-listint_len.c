#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - entry point
 * Description: returns the number of elements in a linked list_t list
 * @h: linked list
 * Return: the number of elements of a list
 */

size_t listint_len(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
