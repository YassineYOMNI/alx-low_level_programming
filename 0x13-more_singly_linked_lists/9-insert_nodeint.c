#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts
 * a new node at a given position
 * @head: the head of the list
 * @idx: the index of the list where the new node should be added
 * @n: integer
 *
 * Return: the address of the new node, NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newn, *c = *head;
	unsigned int i = 0;

	newn = malloc(sizeof(listint_t));
	if (newn == NULL)
	return (0);
	else
	newn->n = n;
	if (idx == 0)
	{
	newn->next = c;
	*head = newn;
	return (newn);
	}

	for (; i < (idx - 1); i++)
	{
	if (c == NULL || c->next == NULL)
	return (NULL);

	c = c->next;
	}
	newn->next = c->next;
	c->next = newn;

	return (newn);
}
