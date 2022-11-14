#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * add_nodeint_end - entry point
 * Description: adds a new node at the end of a listint_t list
 * @head: pointer to the pointer to the head node
 * @n: the element to add
 * Return: the address of the new element, or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
		free(new_node);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;

		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (new_node);
}
