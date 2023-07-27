#include "lists.h"

/**
 * list_len - a function that returns the number
 * pf elements in a linked list_t list
 * @h: the linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t nbr = 0;

	while (h != NULL)
	{
	h = h->next;
	nbr++;
	}
	return (nbr);
}
