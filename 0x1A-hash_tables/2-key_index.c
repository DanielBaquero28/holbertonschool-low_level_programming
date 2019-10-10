#include "hash_tables.h"

/**
 * key_index - Gives the index of @key.
 * @key: Key that we're finding the index.
 * @size: Size of the hash table.
 * Return: Returns the index of @key.
**/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	return (hash_djb2(key) % size);
}
