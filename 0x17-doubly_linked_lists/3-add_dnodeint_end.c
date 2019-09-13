#include "lists.h"
#include <errno.h>

/**
 * add_dnodeint_end - Adds a node at the end of the list.
 * @head: Head node of the list. (Double pointer)
 * @n: Data in the node.
 * Return: Address of the new node of NULL if it failed.
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new_node;
	dlistint_t *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		perror("Error: Malloc failed\n");
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (!*head)
		return ((*head) = new_node);

	temp = (*head);
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}
