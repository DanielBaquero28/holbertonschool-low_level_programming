#include "lists.h"
#include <errno.h>

/**
 * get_dnodeint_at_index - Returns the nth node of the list.
 * @head: Head of the list.
 * @index: Number of the node to be returned.
 * Return: The given node
**/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	unsigned int i;

	for (i = 0; head; i++)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
	}
	return (NULL);
}
