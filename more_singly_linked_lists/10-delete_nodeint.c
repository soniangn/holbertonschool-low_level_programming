#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * get_size - entry point
 * Description: finds the length of the listint_t list
 * @head: pointer to the head node
 * Return: the size of the list
 */


unsigned int get_size(listint_t *head)
{
	unsigned int size = 0;

	while (head != NULL)
	{
		head = head->next;
		size++;
	}
	return (size);
}


/**
 * delete_nodeint_at_index - entry point
 * Description: deletes the node at a given position
 * @head: pointer to the pointer to the head node
 * @idx: the index of the list where the node should be deleted
 * Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *previous_node, *current;
	unsigned int i = 0;
	unsigned int size = get_size(*head)

	if (idx > size)
		return (-1);

	current = *head;

	if (*head == NULL)
		return (-1);

	if (idx == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	previous_node = *head;

	for (; i < idx; i++)
	{
		previous_node = current;
		current = current->next;
	}
	previous_node->next = current->next;
	free(current);

	return (1);
}
