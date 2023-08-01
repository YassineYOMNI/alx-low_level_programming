#include "lists.h"

/**
 * listint_len - fuction that return the digit of elements.
 *
 * @h: is a ptr to first node.
 * Return: digit of elements
 *
*/
size_t listint_len(const listint_t *h)
{
	size_t n;

	n = 0;

	while (h != NULL)
	{
		if (h->n != '\0')/*count of elements*/
		n++;

		h = h->next;/*go to the next node*/
	}

	return (n);
}
