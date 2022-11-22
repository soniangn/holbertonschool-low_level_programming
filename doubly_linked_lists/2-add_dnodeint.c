#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * add_dnodeint - entry point
 * Description: adds a new node at the beginning of a list
 * @head: double pointer to the head node
 * @n: element to add
 * Return: the address of the new element
 *			NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* created new node */
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	/* initializes value of new node n */
	new_node->n = n;

	/* add new node*/

	new_node->next = NULL;
	new_node->next = *head;
	*head = new_node;
	new_node->prev = NULL;
	
	/* return new node element n */
	return (new_node);
}
