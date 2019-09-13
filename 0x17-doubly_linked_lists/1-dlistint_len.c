#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in the list
 * @h: Head node of the list.
 * Return: Number of elements of the list.
**/

size_t dlistint_len(const dlistint_t *h)
{

	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
