#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index of list
 * @head: pointer to a pointer to head of list.
 * @index: index of node that should be deleted it starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current, *temp;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL)
	{
		if (count == index)
		{
			temp = current->prev;
			temp->next = current->next;
			if (current->next != NULL)
				current->next->prev = temp;
			free(current);
			return (1);
		}
		current = current->next;
		count++;
	}
	return (-1);
}

