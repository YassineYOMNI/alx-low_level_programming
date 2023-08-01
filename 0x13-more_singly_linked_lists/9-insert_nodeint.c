#include "lists.h"

/**
 * insert_nodeint_at_index - a func displayn new node end position
 *
 * @head: ptr to the first node
 * @idx: is a index list new node
 * @n:element to add new node
 *
 * Return: NULL if all fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *s, *q;
	unsigned int far;

	q = *head;

	s = malloc(sizeof(listint_t));
	if ((*head == NULL && idx != 0) || s == NULL)
		return (NULL);

	s->n = n;

	for (far = 0; head != NULL && far < idx - 1; far++)
	{
		q = q->next;
		if (q == NULL)
			return (NULL);
	}

	if (idx == 0)
	{

		s->next = *head;

		*head = s;
	}
	else if (q->next)
	{
		s->next = NULL;
		q->next = s;
	}

	return (s);
}
