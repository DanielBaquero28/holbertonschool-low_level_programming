#include "lists.h"
#include <errno.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given postion.
 * @h: Head node of the list. (Double pointer)
 * @idx: Index of the given postion of the node.
 * @n: Data in the node.
 * Return: Address of the new node of NULL if it failed.
**/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{	dlistint_t *new_node = NULL, *temp = NULL;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (*h == NULL)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	temp = *h;
	for (i = 0; temp->next; i++)
		temp = temp->next;
	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	else if (1 + i == idx)
	{
		new_node = add_dnodeint_end(h, n);
		return (new_node);
	}
	else if (idx > i)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	while (i != idx - 1)
	{
		temp = temp->prev;
		i--;
	}
	new_node->next = temp->next;
	temp->next->prev = new_node;
	temp->next = new_node;
	new_node->prev = temp;
	return (new_node);
}
