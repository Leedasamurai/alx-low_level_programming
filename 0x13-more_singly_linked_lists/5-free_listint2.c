#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: A pointer to a pointer to the head of the listint_t list.
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
