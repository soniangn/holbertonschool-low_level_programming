#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * get_size - finds the length of the link
 * Description: finds the length of the linked list
 * @h: pointer to the head node
 * Return: size of the list
 */
unsigned int get_size(dlistint_t *h)
{
	unsigned int size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}

	return (size);
}

/**
 * delete_dnodeint_at_index - entry point
 * Description: deletes a node at a given node
 * @head: double pointer to the head node
 * @idx: index of the list where the node should be deleted
 * Return: 1 if success, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int idx)
{
	dlistint_t *current;
	unsigned int i = 0;
	unsigned int size = get_size(*head);

	if (idx > size)
		return (-1);

	current = *head;

	if (*head == NULL || head == NULL)
		return (-1);

	if (idx == 0)
	{
		*head = current->next;
		(*head)->prev = NULL;
		free(current);
		return (1);
	}

	current = *head;

	for (; i < idx - 1; i++)
	{
		current = current->next;
	}
	current->next->prev = current->prev;
	current->prev->next = current->next;
	free(current);

	return (1);
}
