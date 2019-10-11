#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - Retrieves value associated with @key.
 * @ht: Hash table from where @key will be retrieved.
 * @key: Key from which the value will be retrieved.
 * Return: Value associated with key.
**/

char *hash_table_get(const hash_table_t *ht, const char *key)
{

	hash_node_t *help;
	unsigned long int index;

	if (!ht)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	help = ht->array[index];
	if (!help)
		return (0);

	while (help != NULL)
	{
		if (strcmp(help->key, key) == 0)
			return (help->value);
		help = help->next;
	}

	return (NULL);
}
