#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - calculate the lenght of the linked list
 *
 * @h: pointer to the head of the linker
 *
 * Return: the number of element in linked list_t
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
