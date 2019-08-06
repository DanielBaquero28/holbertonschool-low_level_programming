#include "lists.h"

/**
 * sum_listint - Adds all the value in each node of the list.
 * @head: Pointer pointing to the new first node.
 * Return: Sum of the elements.
**/

int sum_listint(listint_t *head)
{
listint_t *current;
int sum = 0;

if (head == NULL)
return (0);
current = head;
while (current != NULL)
{
sum += current->n;
current = current->next;
}
return (sum);
}
