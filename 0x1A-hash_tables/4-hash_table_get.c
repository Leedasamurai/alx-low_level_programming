#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - Fetch a value associated with a key.
 * @ht: hash table.
 * @key: The key.
 *
 * Return: The value of  key, or NULL if no key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
