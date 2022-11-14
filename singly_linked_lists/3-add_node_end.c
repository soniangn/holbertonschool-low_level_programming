#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - entry point
 * Description: adds a new node at the end of a list_t list
 * @head: pointer to a pointer to the HEAD node
 * @str: string of the node
 * Return: the address of the new element, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	char *copy;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
		free(new_node);
	}

	copy = strdup(str);

	if (copy == NULL)
	{
		return (NULL);
		free(new_node);
		free(copy);
	}

	new_node->str = copy;
	new_node->len = strlen(copy);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *last_node = *head;

		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (new_node);
	free(copy);
	free(new_node);
}
