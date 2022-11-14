#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - entry point
 * Description: adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer to the HEAD node
 * @str: string of the node
 * Return: the address of the new element, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *copy = strdup(str);

	new_node = malloc(sizeof(list_t));
	new_node->str = copy;
	new_node->len = strlen(copy);
	new_node->next = *head;
	*head = new_node;

	if (new_node == NULL)
	{
		return (NULL);
		free(copy);
		free(new_node);
	}
		else
		return (new_node);
	free(copy);
}

