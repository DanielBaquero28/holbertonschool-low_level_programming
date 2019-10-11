#include "hash_tables.h"
#include <string.h>

/**
 * shash_table_create - Creates new hash table and initializes.
 * @size: Size of the hash table.
 * Return: Returns NULL if malloc failed or the hash table if succeded.
 */

shash_table_t *shash_table_create(unsigned long int size)
{

	unsigned long int i;
	shash_table_t *new_table;

	new_table = malloc(sizeof(shash_table_t));
	if (!new_table)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(shash_node_t) * size); /* Cambie shash_table_t **/
	if (!new_table->array)
		return (NULL);
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	new_table->shead = NULL;
	new_table->stail = NULL;

	return (new_table);
}

/**
 * shash_table_set - Adds an element to the hash table.
 * @ht: Hash Table
 * @key: Key for the @value.
 * @value: Value for the @key.
 * Return: 1 if succeded or 0 if failed.
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{

	shash_node_t *help;
	shash_node_t *help2;
	unsigned long int index;

	if (!ht || !key || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	help = ht->array[index];

	while (help)
	{
		if (strcmp(help->key, key) == 0)
		{
			free(help->value);
			help->value = strdup(value);
			return (1);
		}
		help = help->next;
	}

	help2 = malloc(sizeof(shash_node_t));
	if (!help2)
		return (0);

	help2->key = strdup(key);
	help2->value = strdup(value);
	help2->next = ht->array[index];
	ht->array[index] = help2;

	return (1);
}

/**
 * shash_table_get - Retrieves the value of @key.
 * @ht: Hash Table.
 * @key: Key from which we'll retrieve the value.
 * Return: Returns value retrieved from @key.
 **/

char *shash_table_get(const shash_table_t *ht, const char *key)
{

	shash_node_t *help;
	unsigned long int index;

	if (!ht)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	help = ht->array[index];

	if (!help)
		return (NULL);
	while (help != NULL)
	{
		if (strcmp(help->key, key) == 0)
			return (help->value);
		help = help->next;
	}

	return (NULL);

}

/**
 * shash_table_print - Prints the sorted linked list.
 * @ht: Hash Table.
 * Return: Nothing.
**/

void shash_table_print(const shash_table_t *ht)
{

	unsigned long int i;
	shash_node_t *help;

	if (!ht)
		return;

	help = ht->shead;

	printf("{");
	while (help != NULL)
	{
		if (i == 1)
			printf(", ");
		printf("'%s': '%s'", help->key, help->value);
		i = 1;
		help = help->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints sorted hash table from stail.
 * @ht: Hash Table
 * Return: Nothing
 **/

void shash_table_print_rev(const shash_table_t *ht)
{

	unsigned long int i;
	shash_node_t *help;

	if (!ht)
		return;

	help = ht->stail;

	putchar('{');
	while (help)
	{
		if (i == 1)
			printf(", ");
		printf("'%s': '%s'", help->key, help->value);
		i = 1;
		help = help->sprev;
	}
	printf("}\n");

}
/**
 * shash_table_delete - Deletes the sorted hash table.
 * @ht: Hash Table.
 * Return: Nothing.
 */

void shash_table_delete(shash_table_t *ht)
{

	shash_node_t *help;
	shash_node_t *help2;
	unsigned long int i;

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
