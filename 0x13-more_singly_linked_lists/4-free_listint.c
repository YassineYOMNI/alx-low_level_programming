#include "lists.h"

/**
 * free_listint - free list
 *
 * @head: ptr to first node in the list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *m;

	while (head)
	{
		m = head;
		head = head->next;
		free(m);
	}
}
