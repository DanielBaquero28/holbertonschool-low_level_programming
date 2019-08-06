#include "lists.h"

/**
 * add_nodeint - Adds a node before the first position (new head).
 * @head: Pointer pointing to the new first node.
 * @n: Constant number.
* Return: Address of the new element or NULL.
**/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ptr;
ptr = malloc(sizeof(listint_t));
if (ptr == NULL)
return (NULL);
ptr->n = n;
ptr->next = *head;
*head = ptr;
return (ptr);
}
