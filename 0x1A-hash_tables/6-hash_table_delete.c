#include "hash_tables.h"

/**
 * hash_table_delete - Deletes the hash table.
 * @ht: Hash Table.
 * Return: Nothing.
**/

void hash_table_delete(hash_table_t *ht)
{

	unsigned int i;
	hash_node_t *help;
	hash_node_t *help2;

	for (i = 0; i < ht->size; ++i)
	{
		help = ht->array[i];
		while (help != NULL)
		{
			help2 = help;
			help = help->next;
			free(help2->key);
			free(help2->value);
			free(help2);
		}
	}
	free(ht->array);
	free(ht);
}
