#include "lists.h"

/**
 * sum_dlistint - sum of all data (n) of list
 * @head: pointer to the head of list
 *
 * Return: sum of data in the list or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}

