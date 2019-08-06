#include "lists.h"

/**
 * free_listint - Frees the whole list.
 * @head: Pointer pointing to the new first node.
 * Return: Address of the new element or NULL.
**/

void free_listint(listint_t *head)
{
listint_t *temp;
while (head != NULL)
temp = head;
head = head->next;
free(temp);
}
