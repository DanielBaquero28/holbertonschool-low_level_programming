#include "lists.h"

/**
 * listint_len - Prints number of elements of a list listint_t.
 * @h: First element of the list.
 * Return: Number of bytes. (Count)
**/

size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
