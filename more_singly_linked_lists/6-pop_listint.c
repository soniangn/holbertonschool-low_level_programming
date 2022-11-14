#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - entry point
 * Description: deletes the head node of a listint_t list
 * @head: pointer to the pointer to the head node
 * Return: the head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *p;

	if (*head == NULL)
		return (0);
	else
	{
		p = *head;
		*head = (*head)->next;
		free(p);
		return ((*head)->n);
	}
}
