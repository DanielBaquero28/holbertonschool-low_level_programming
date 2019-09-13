#include "lists.h"
#include <errno.h>

/**
 * delete_dnodeint_at_index - Removes a node at a given position.
 * @head: Head of the list. (Double Pointer)
 * @index: Index of the given position where the node is removed.
 * Return: 1 if succeded or -1 if failed.
**/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{	unsigned int i;
	dlistint_t *help, *help2, *temp;

	if (*head == NULL)
		return (-1);
	help = *head;
	for (i = 0; help->next; i++)
	{
		if (i == index)
			break;
		help = help->next;
	}
	if (i + 1 == index)
	{
		temp = help->prev;
		temp->next = help->next;
		free(help);
		return (1);
	}
	if (i != index)
		return (-1);
	if (index == 0)
	{
		if (help->next == NULL)
		{
			*head = NULL;
			free(*head);
			free(help);
			return (1);
		}
		temp = help->next;
		temp->prev = NULL;
		*head = temp;
		free(help);
		return (1);
	}
	temp = help->prev;
	help2 = temp->next;
	help2->prev = temp;
	temp->next = help2;
	free(help);
	return (1);
}
