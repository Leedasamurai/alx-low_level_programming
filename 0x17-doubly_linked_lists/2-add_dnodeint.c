#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - new node at the beginning of list
 * @head: pointer to a pointer to the head of list
 * @n: data stored in new node
 *
 * Return: address of the new list, or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;
	return (new_node);
}

