#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - entry point
 * Description: returns the nth node of a listint_t list
 * @head: pointer to the head node
 * @index: index of the node
 * Return: the nth node of a listint_t list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;
	unsigned int i = 0;

	p = head;

	for (; i < index; i++)
	{
		*p = *p->next;
	}

	return (p);
}
