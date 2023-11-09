#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - number of elements in a list
 * @h: pointer to head of list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

