#include "lists.h"

/**
 * delete_nodeint_at_index- deletes a node at any given position
 * @head:pointer to the first node
 * @index: index of ode to be deleted
 *
 * Return: succes if i or fail if -1
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new_temp = *head;
	listint_t *new_current = NULL;
	unsigned int new_i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(new_temp);
		return (1);
	}

	while (new_i < index - 1)
	{
		if (!new_temp || !(new_temp->next))
			return (-1);
		new_temp = new_temp->next;
		new_i++;
	}

	new_current = new_temp->next;
	new_temp->next = new_current->next;
	free(new_current);

	return (1);
}
