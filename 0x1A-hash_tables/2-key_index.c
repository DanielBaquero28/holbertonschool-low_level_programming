#include "hash_tables.h"

/**
 * key_index - Gives the index of @key.
 * @key: Key that we're finding the index.
 * @size: Size of the hash table.
 * Return: Returns the index of @key.
**/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	int c;
	unsigned long int hash;
	unsigned long int index;

	(void)size;

	hash = 5381;
	while((c = *key++))
	{
		hash = ((hash << 5) + hash) + c;
		index = (index + key[c]) % size;
		c++;
	}
	return (hash);
}
