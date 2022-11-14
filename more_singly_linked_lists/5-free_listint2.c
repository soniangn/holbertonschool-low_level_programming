#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - entry point
 * Description: frees a listint_t list
 * @head: pointer to the head node
 * Return: 0
 */

void free_listint2(listint_t **head)
{
	listint_t *p;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		p = *head;
		*head = (*head)->next;
		free(p);
	}
	head = NULL;
}
