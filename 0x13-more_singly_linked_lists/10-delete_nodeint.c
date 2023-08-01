#include "lists.h"

/**
 * delete_nodeint_at_index - a function that delets the node
 * at index of a listint_t linked list
 * @head: the head of the list
 * @index: the index of the node that should be dleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *c, *p = *head;
	unsigned int i = 0;

	if (index != 0)
	{
	for (; i < (index - 1); i++)
	{
	if (p == NULL)
	return (-1);

	p = p->next;
	}
	}
	if (p == NULL || (p->next == NULL && index != 0))
	{
	return (-1);
	}
	c = p->next;
	if (index != 0)
	{
	p->next = c->next;
	free(c);
	}
	else
	{
	free(p);
	*head = c;
	}
	return (1);
}
