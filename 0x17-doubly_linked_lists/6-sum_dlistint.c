#include "lists.h"
#include <errno.h>

/**
 * sum_dlistint - Sums the whole list.
 * @head: Head node of the list.
 * Return: The sum of all of the elements.
**/

int sum_dlistint(dlistint_t *head)
{

	unsigned int i;
	int sum;

	for (i = 0; head; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
