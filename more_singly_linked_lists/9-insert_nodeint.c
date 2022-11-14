#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * insert_nodeint_at_index - entry point
 * Description: adds a new node at a given position
 * @head: pointer to the pointer to the head node
 * @idx: the index of the list where the new node should be added
 * @n: the element to add
 * Return: the address of the new element, or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p, *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
		free(new_node);
	}

	new_node->n = n;

	p = *head;

	for (; i < idx; i++)
	{
		p = p->next;
		if (i == idx)
		{
			new_node = p;
		}
	}
	return (new_node);
}
