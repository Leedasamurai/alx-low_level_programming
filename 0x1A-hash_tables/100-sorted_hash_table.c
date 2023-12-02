#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * shash_table_create - Creates a balanced hash table
 * @size: size of the array
 *
 * Return: A pointer to the newly sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - Adds an element to hash table
 * @ht: hash table to update the key and or value
 * @key: The key
 * @value: The value of the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *current;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	insert_sorted(ht, new_node);

	return (1);
}

/**
 * shash_table_get - fetch value associated with a key
 * @ht: The hash table to look into
 * @key: The key
 *
 * Return: value associated with element or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints hash table
 * @ht: The sorted hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;

	printf("{");
	current = ht->shead;
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->snext;
		if (current != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Print hash table in reverse order
 * @ht: hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;

	printf("{");
	current = ht->stail;
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->sprev;
		if (current != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes hash table
 * @ht: hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *current, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);
	free_sorted(ht);
	free(ht);
}

/**
 * insert_sorted - Inserts a node into sorted linked list of a hash table
 * @ht: hash table
 * @new_node: The node to insert
 */
void insert_sorted(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *current;

	if (ht == NULL || new_node == NULL)
		return;

	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
		new_node->sprev = NULL;
		new_node->snext = NULL;
	}
	else if (strcmp(new_node->key, ht->shead->key) < 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		current = ht->shead;
		while (current->snext != NULL && strcmp(new_node->key, current->snext->key) > 0)
			current = current->snext;

		new_node->sprev = current;
		new_node->snext = current->snext;

		if (current->snext == NULL)
			ht->stail = new_node;
		else
			current->snext->sprev = new_node;

		current->snext = new_node;
	}
}

/**
 * free_sorted - Frees the linked list of hash table
 * @ht: hash table
 */
void free_sorted(shash_table_t *ht)
{
	shash_node_t *current, *temp;

	if (ht == NULL)
		return;

	current = ht->shead;
	while (current != NULL)
	{
		temp = current;
		current = current->snext;
		free(temp->key);
		free(temp->value);
		free(temp);
	}

	ht->shead = NULL;
	ht->stail = NULL;
}
