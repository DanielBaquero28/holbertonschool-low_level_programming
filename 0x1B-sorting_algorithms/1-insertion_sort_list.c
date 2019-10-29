#include "sort.h"

/**
 * insertion_sort_list - Sorts @list in ascending order.
 * @list: List of integers.
 * Return: Nothing
 */

void insertion_sort_list(listint_t **list)
{

	listint_t *help = NULL;
	listint_t *help2 = NULL;

	if (!list || !*list)
		return;

	help = *list;
	while (help != NULL)
	{
		while (help->next != NULL && (help->n > help->next->n))
		{
			help2 = help->next;
			help->next = help2->next;
			help2->prev = help->prev;

		if (help->prev != NULL)
			help->prev->next = help2;
		if (help2->next != NULL)
			help2->next->prev = help;

		help->prev = help2;
		help2->next = help;

		if (help2->prev != NULL)
			help = help2->prev;
		else
			*list = help2;
		print_list(*list);
		}
		help = help->next;
	}
}
