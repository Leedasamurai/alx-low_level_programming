#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - Gives index of key in hash table array.
 * @key:  key string.
 * @size: size of the array of the hash table.
 *
 * Return: The index at which key should be stored in.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_vl = hash_djb2(key);

	unsigned long int index = hash_vl % size;

	return (index);
}
