#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - entry point
 * Description: returns the sum of all the data(n) of a list
 * @head: pointer to the head node
 * Return: the sum of all the data(n) of a list, 0 if list empty
 */

int sum_listint(listint_t *head)
{
	listint_t *p;
	int sum = 0;

	p = head;

	if (head == NULL)
		return (0);

	while (p != NULL)
	{
		sum += p->n;
		p = p->next;
	}

	return (sum);
}
