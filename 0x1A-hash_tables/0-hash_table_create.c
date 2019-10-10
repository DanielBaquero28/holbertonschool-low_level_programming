#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: Size of the associative array. (Hash Table)
 * Return: The hash table created.
**/

hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *new_table;

	new_table = malloc(sizeof(hash_table_t) * size);

	return (new_table);
}
