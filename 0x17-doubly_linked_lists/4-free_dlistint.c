#include "lists.h"
#include <errno.h>

/**
 * free_dlistint - Frees the whole list.
 * @head: Head node of the list.
 * Return: Nothing
**/

void free_dlistint(dlistint_t *head)
{

	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
