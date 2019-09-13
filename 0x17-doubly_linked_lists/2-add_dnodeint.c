#include "lists.h"
#include <errno.h>

/**
 * add_dnodeint - Adds a node at the beginning of the list.
 * @head: Head node of the list. (Double pointer)
 * @n: Data in the node.
 * Return: Address of the new node of NULL if it failed.
**/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		perror("Error: Malloc failed.\n");
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head)
	{
		(*head)->prev = new_node;
		new_node->next = (*head);
	}
	(*head) = new_node;
	return ((*head));
}
