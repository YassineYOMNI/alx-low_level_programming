#include "lists.h"

/**
 * add_nodeint - a function that get a new node at the fist list
 *
 * @head: ptr to fist node
 * @n: int n to add a new node
 *
 * Return: address of new digit or NULL if get fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	x = malloc(sizeof(listint_t));
	if (x == NULL)
		return (NULL);
	x->next = *head;
	x->n = n;
	*head = x;
	return (x);
}
