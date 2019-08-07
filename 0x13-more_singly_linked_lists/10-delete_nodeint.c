#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given position.
 * @head: Pointer pointing to the new first node.
 * @index: Index of the node we are looking for.
 * Return: If succeded (1) else (0).
**/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *node;
unsigned int i;

temp = *head;

if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(temp);
}
else
{
i = 0;
while (i < index - 1)
{
temp = temp->next;
if (temp == NULL)
return (-1);
i++;
}
node = temp;
node = node->next;
temp->next = node->next;
free(node);
}
return (1);
}
