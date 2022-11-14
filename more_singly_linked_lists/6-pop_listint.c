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
	int head_data;

	if (*head == NULL)
		return (0);

	p = *head;
	head_data = (*head)->n;
	*head = (*head)->next;

	free(p);

	return (head_data);
}
