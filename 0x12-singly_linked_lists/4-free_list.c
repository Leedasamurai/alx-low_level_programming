#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - function that frees list
 *
 * @head: poiter that pointes to lis
 *
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *tmp = head;

		head = head->next;

		free(tmp->str);
		free(tmp);
	}
}
