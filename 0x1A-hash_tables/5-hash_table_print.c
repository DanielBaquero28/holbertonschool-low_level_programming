#include "hash_tables.h"

/**
 * hash_table_print - Prints the hash table.
 * @ht: Hash Table
 * Return: Nothing.
**/

void hash_table_print(const hash_table_t *ht)
{

	unsigned long int i, j;
	hash_node_t *help;

	if (!ht)
		return;

	printf("{");
	j = 0;
	for (i = 0; i < ht->size; ++i)
	{
		for (help = ht->array[i]; help != NULL; help = help->next)
		{
			if (j == 1)
				printf(", ");
			printf("'%s': '%s'", help->key, help->value);
			j = 1;
		}
	}
	printf("}\n");

}
