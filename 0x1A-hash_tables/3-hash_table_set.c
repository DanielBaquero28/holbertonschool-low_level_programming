#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - Adds or updates a new element at @ht.
 * @ht: Hash Table given.
 * @key: Key to be set.
 * @value: Value to be set to @key.
 * Return: 1 if succeded else 0.
**/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	hash_node_t *new_node;
	unsigned long int hash_index;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(new_node);
		return (0);
	}
	if (!key || !value)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	hash_index = key_index((unsigned char *)key, ht->size);
	if (ht->array[hash_index] != NULL)
		new_node->next = ht->array[hash_index];

	ht->array[hash_index] = new_node;

	return (1);

}
