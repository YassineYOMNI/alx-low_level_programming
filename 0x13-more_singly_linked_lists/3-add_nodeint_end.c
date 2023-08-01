#include "lists.h"

/**
 *add_nodeint_end - a function display a new node at the end of the node
 *
 * @n: int to add new node
 * @head: ptr to the fist node one the list
 *
 * Return: addres of the new element or return NULL if get fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i;
	listint_t *u;

	i = malloc(sizeof(listint_t));
	if (i == NULL)
		return (NULL);

	i->next = NULL;
	i->n = n;

	u = *head;

	if (u == NULL)
		*head = i;
	else
	{

	while (u->next != NULL)
		u = u->next;

	u->next = i;
	}

	return (*head);
}
