#include "lists.h"
#include <stddef.h>

/**
 * get_dnodeint_at_index - nth node of list
 * @head: pointer to the head of list
 * @index: index of the node from 0
 *
 * Return: nth node, or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}
	return (NULL);
}

