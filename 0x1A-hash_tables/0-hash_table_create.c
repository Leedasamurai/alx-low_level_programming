#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the ary
 *
 * Return: A newly created hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *nw_table = NULL;
	unsigned long int i;

	nw_table = malloc(sizeof(hash_table_t));

	if (nw_table == NULL)
		return (NULL);

	nw_table->array = malloc(sizeof(hash_node_t *) * size);

	if (nw_table->array == NULL)
	{
		free(nw_table);
		return (NULL);
	}

	nw_table->size = size;

	for (i = 0; i < size; i++)
		nw_table->array[i] = NULL;

	return (nw_table);
}
