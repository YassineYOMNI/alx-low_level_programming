#include "lists.h"

/**
 * reverse_listint - a function that reverses
 * a listint_t linked list
 * @head: the head of the list
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *c, *p;

	if (head == NULL || *head == NULL)
	return (NULL);

	p = NULL;

	while ((*head)->next != NULL)
	{
	c = (*head)->next;
	(*head)->next = p;
	p = *head;
	*head = c;
	}
	(*head)->next = p;

	return (*head);
}
