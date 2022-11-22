#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - entry point
 * Description: inserts a new node at a given node
 * @h: double pointer to the head node
 * @idx: index of the list where the new node should be added
 * @n: element to add
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev_node, *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*h == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	prev_node = *h;

	for (; i < idx - 1; i++)
	{
		prev_node = prev_node->next;
	}

	new_node->next = prev_node->next;
	new_node->prev = prev_node;
	prev_node->next = new_node;

	return (new_node);
}
