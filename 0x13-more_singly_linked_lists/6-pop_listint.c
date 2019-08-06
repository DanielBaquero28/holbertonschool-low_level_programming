#include "lists.h"

/**
 * pop_listint - Removes first item of the list.
 * @head: Pointer pointing to the new first node.
 * Return: Address of the new element or NULL.
**/

int pop_listint(listint_t **head)
{
int retval;
listint_t *current;

if (*head == NULL)
return (0);
current = (*head)->next;
retval = (*head)->n;
free(*head);
*head = current;
return (retval);
}
