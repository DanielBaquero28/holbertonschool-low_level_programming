#include "sort.h"

/**
 * linked_swap - Swaps two nodes from a list.
 * @sort1: Variable that helps when swapping.
 * @sort2: Variable that helps when swapping.
 * @sort_id: Identifier that sorts the sublist depending on the case.
 * Return: Nothing
 */

void linked_swap(listint_t **sort1, listint_t **sort2, int sort_id)
{

	listint_t *help = NULL;
	listint_t *help2 = NULL;

	help = *sort1;
	help2 = *sort2;

	help->next = help2->next;
	help2->prev = help->prev;
	if (help->prev != NULL)
		help->prev->next = help2; /* Creating links */

	if (help2->next != NULL)
		help2->next->prev = help;

	help->prev = help2;
	help2->next = help;

	if (sort_id == 0)
		*sort1 = help2;
	else if (sort_id == 1)
		*sort2 = help;
	else
		return;

}

/**
 * sort_big - Sorts the bigger integers to the end.
 * @sort: Pointer to subset of the bigger integers.
 * @tail: Last element of the @sort.
 * @list: List of integers.
 * Return: Nothing
 */

void sort_big(listint_t **sort, listint_t **tail, listint_t **list)
{

	listint_t *help;

	help = *sort;
	while (help != *tail && help->next != *tail)
	{
		if (help->next->n < help->n)
		{
			linked_swap(&help, &(help->next), 0);
			if (!help->prev)
				*list = help;
			print_list(*list);
		}
		help = help->next;
	}
	*tail = help;
	*sort = help;

}

/**
 * sort_small - Sorts the smaller integers to the beginning.
 * @sort: Pointer to the subset of small numbers.
 * @tail: Last element of @sort.
 * @list: List of integers.
 * Return: Nothing
 */

void sort_small(listint_t **sort, listint_t **tail, listint_t **list)
{

	listint_t *help;

	help = *sort;
	while (help != *tail && help->prev != *tail)
	{
		if (help->prev->n > help->n)
		{
			linked_swap(&(help->prev), &help, 1); /* */
			if (!help->prev->prev)
				*list = help->prev;
			print_list(*list);
		}
		help = help->prev;
	}
	*tail = help;
	*sort = help;

}

/**
 * cocktail_sort_list - Sorts @list using the cocktail sort shaker algorithm.
 * @list: List of integers that are going to be sorted.
 * Return: Nothing.
 **/

void cocktail_sort_list(listint_t **list)
{
	listint_t *sort, *tail, *tail2;

	if (!list || !*list)
		return;

	tail = NULL;
	tail2 = NULL;
	sort = *list;

	do {
		sort_big(&sort, &tail, list);
		sort_small(&sort, &tail2, list);
	} while (tail != tail2);

}
