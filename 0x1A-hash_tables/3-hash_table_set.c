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
	hash_node_t *help;
	unsigned long int hash_index;

	if (!key || !value || !ht || !*key)
		return (0);

	hash_index = key_index((const unsigned char *)key, ht->size);
	help = ht->array[hash_index];
	while (help != NULL)
	{
		if (strcmp(help->key, key) == 0)
		{
			free(help->value);
			help->value = strdup(value);
			return (1);

		}
		help = help->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->next = NULL;
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (ht->array[hash_index] != NULL)
		new_node->next = ht->array[0];

	ht->array[hash_index] = new_node;
	return (1);
}
