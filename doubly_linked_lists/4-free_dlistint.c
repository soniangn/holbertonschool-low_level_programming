#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * free_dlistint - entry point
 * Description: frees a list
 * @head: pointer to the head node of the list
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *p;

	while (head != NULL)
	{
		p = head->next;
		free(head);
		head = p;
	}
	head = NULL;
}
