#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * add_dnodeint_end - entry point
 * Description: adds a new node at the e,d of a list
 * @head: double pointer to the head node
 * @n: element to add
 * Return: the address of the new element
 *			NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* created new node and last node*/
	dlistint_t *new_node, *last_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* initializes value of new node n */
	new_node->n = n;

	/* add new node*/
	if (*head == NULL)
		(*head) = new_node;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;

		new_node->prev = last_node;
		new_node->next = NULL;
		last_node->next = new_node;
	}

	/* return new node element n */
	return (new_node);
}
