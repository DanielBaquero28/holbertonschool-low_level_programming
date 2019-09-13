#include "lists.h"

/**
 * print_dlistint - Prints all the elements of the list.
 * @h: Head of the list.
 * Return: Number of nodes
**/

size_t print_dlistint(const dlistint_t *h)
{

	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (i);
}
