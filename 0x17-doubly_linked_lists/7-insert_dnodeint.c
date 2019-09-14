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
{
	dlistint_t *new_node, *temp, *help;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (*h == NULL)
		return (NULL);
	help = *h;
	for (i = 0; help->next; i++)
	{
		if (i == idx)
			break;
		help = help->next;
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (i + 1 == idx)
	{
		help->next = new_node;
		new_node->prev = help;
		new_node->next = NULL;
		return (new_node);
	}
	if (idx == 0)
	{
		(*h)->prev = new_node;
		new_node->next = (*h);
		*h = new_node;
		return (*h);
	}
	if (i != idx)
		return (NULL);
	temp = help->prev;
	temp->next = new_node;
	help->prev = new_node;
	new_node->prev = help;
	new_node->next = help;
	return (new_node);
}
