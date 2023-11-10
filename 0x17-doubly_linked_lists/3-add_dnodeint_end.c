#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - new node at the end of list
 * @head: pointer to a pointer to the head of list
 * @n: data stored in the new node
 *
 * Return: address new element, or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;

		new_node->prev = temp;
		temp->next = new_node;
	}
	return (new_node);
}
