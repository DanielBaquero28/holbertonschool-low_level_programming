#include "lists.h"

/**
 * free_listint2 - Frees head and *head of the list listint_t.
 * @head: Head of all the nodes.
 * Return: Nothing
**/

void free_listint2(listint_t **head)
{
listint_t *temp, *current;

if (head == NULL)
return;
if (*head == NULL)
return;

current = *head;
while (current != NULL && head != NULL)
{
temp = current;
current = current->next;
free(temp);
}
*head = NULL;
}
