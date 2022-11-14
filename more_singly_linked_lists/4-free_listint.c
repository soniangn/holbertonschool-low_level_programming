#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - entry point
 * Description: frees a listint_t list
 * @head: pointer to the head node
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *p;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
	free(head);
}
