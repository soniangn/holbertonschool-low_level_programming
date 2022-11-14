#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/**
 * free_list - entry point
 * Description: frees a list_t list
 * @head: pointer to the HEAD node
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
	free(head);
}
