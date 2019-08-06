#include "lists.h"

/**
 * get_nodeint_at_index - Returns an specific node.
 * @head: Pointer pointing to the new first node.
 * @index: Index of the node we are looking for.
 * Return: Address of the new element or NULL.
**/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *current;

current = head;
for (i = 0; i < index; i++)
{
current = current->next;
}
if (i != index)
{
return (NULL);
}
else
{
return (current);
}
}
