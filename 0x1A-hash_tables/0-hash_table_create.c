#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: Size of the associative array. (Hash Table)
 * Return: The hash table created.
**/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_table;

	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
	{
		free(new_table);
		return (NULL);
	}

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_table_t *) * size);
	if (!new_table->array)
	{
		free(new_table->array);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new_table->array[i] = 0;

	return (new_table);
}
