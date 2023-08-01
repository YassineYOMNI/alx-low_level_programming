#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely.
 * @h: Pointer to the first node in the linked list.
 *
 * Return: Number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int difference;
	listint_t *current;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
			current = (*h)->next;
			free(*h);
			*h = current;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}
