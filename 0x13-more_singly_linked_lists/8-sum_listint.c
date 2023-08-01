#include "lists.h"

/**
 * sum_listint - a func display return the sim of all data (n) in list
 *
 * @head: ptr to the first nodein list
 *
 * Return:sum of all
 */
int sum_listint(listint_t *head)
{
	int i;

	i = 0;

	while (head != NULL)
	{
		i += head->n;

		head = head->next;
	}
	return (i);
}
