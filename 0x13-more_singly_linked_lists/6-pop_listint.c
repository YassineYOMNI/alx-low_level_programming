#include "lists.h"

/**
 * pop_listint - dell head in node
 *
 * @head:ptr to the fist  nod in list
 *
 * Return: the head and node in data (n)
 */
int pop_listint(listint_t **head)
{
	int a;
	listint_t *w, *e;

	if (*head == NULL)
		return (0);

	w = *head;

	e = w->next;

	a = w->n;

	free(w);

	*head = e;

	return (a);
}
