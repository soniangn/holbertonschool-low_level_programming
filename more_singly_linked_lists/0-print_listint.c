#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - entry point
 * Description: prints all the elements of a list_t list
 * @h: list to be printed
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
