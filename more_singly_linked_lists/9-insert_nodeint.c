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
 * insert_nodeint_at_index - entry point
 * Description: adds a new node at a given position
 * @head: pointer to the pointer to the head node
 * @idx: the index of the list where the new node should be added
 * @n: the element to add
 * Return: the address of the new element, or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *previous_node;
	unsigned int i = 0;
	unsigned int size = get_size(*head);

	if (idx > size)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
		free(new_node);
	}

	new_node->n = n;
	new_node->next = NULL;

	previous_node = *head;

	for (; i < idx - 1; i++)
		previous_node = previous_node->next;

	new_node->next = previous_node->next;
	previous_node->next = new_node;

	return (new_node);
}
