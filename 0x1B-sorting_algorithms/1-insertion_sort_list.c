#include "sort.h"

/**
 * sortedInsert - Inserts a new node in a sorted way.
 * @list: List of the integers.
 * @new_node: New node inserted.
 * Return: Nothing
 */

void sortedInsert(listint_t **list, listint_t *new_node)
{

	listint_t *help;

	if (!*list)
		*list = new_node;

	else if ((*list)->n >= new_node->n)
	{
		new_node->next = *list;
		new_node->next->prev = new_node;
		*list = new_node;
	}
	else
	{
		help = *list;
		while (help->next && help->next->n < new_node->n)
			help = help->next;

		new_node->next = help->next;
		if (help->next)
			new_node->next->prev = new_node;

		help->next = new_node;
		new_node->prev = help;
	}

}

/**
 * insertion_sort_list - Sorts @list in ascending order.
 * @list: List of integers.
 * Return: Nothing
 */

void insertion_sort_list(listint_t **list)
{

	listint_t *help = NULL;
	listint_t *help2 = NULL;
	listint_t *next = NULL;

	help = *list;
	while (help)
	{
		next = help->next;
		help->prev = NULL;
		help->next = NULL;
		sortedInsert(&help2, help);
		help = next;
		print_list(*list);
	}
	*list = help2;
}
