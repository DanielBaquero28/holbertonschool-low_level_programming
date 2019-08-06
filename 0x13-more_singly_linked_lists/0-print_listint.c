#include "lists.h"

/**
 * print_listint - Prints elements of a list listint_t.
 * @h: First element of the list.
 * Return: Number of bytes. (Count)
**/

size_t print_listint(const listint_t *h)
{
const listint_t *current = h;
size_t count = 0;
if (h == NULL)
return (0);
while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
count++;
}
return (count);
}
