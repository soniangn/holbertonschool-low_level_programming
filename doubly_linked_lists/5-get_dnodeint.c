#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * get_dnodeint_at_index - entry point
 * Description: returns the nth node of a linked list
 * @head: pointer to the head node of the list
 * @index: index of the node, starting from 0
 * Return: the nth node, NULL if does not exit
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *p;
	unsigned int i = 0;

	p = head;

	for (; i < index; i++)
	{
		if (p == NULL)
			return (NULL);
		p = p->next;
	}

	return (p);
}
