#include "lists.h"

/**
 * print_list - a function that prints all
 * the elements of list_t list
 * @h: the linked list
 *
 * Return: elements of the list
 */

size_t print_list(const list_t *h)
{
	size_t nbr = 0;

	while (h != NULL)
	{
	if (h->str == NULL)
	printf("[%d] %s\n", 0, "(nil)");
	else
	printf("[%d] %s\n", h->len, h->str);
	h = h->next;
	nbr++;
	}
	return (nbr);
}
