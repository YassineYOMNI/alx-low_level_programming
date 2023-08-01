#include "lists.h"

/**
 * free_listint2 - is a function display the frees in  list and set head NULL
 *
 * @head: ptr to the node
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *t;
	listint_t *x;

	if (head != NULL)
	{
		t = *head;

	while ((x = t) != NULL)
	{
		t = t->next;

		free(x);
	}

	*head = NULL;
	}
}
