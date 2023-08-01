#include "lists.h"

/**
 * get_nodeint_at_index -get node at ptr index a linked list
 *
 * @head: ptr to first node in list
 * @index : node access
 *
 * Return: index or NULL if node doesn t exist
 */
listint_t *get_nodeint_at_index(listint_t  *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a < index && head != NULL; a++)

		head = head->next;

	return (head);
}
