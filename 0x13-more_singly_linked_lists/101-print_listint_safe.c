#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *new_tmp_n = NULL;
	const listint_t *new_l_n = NULL;
	size_t new_counter = 0;
	size_t new_new_n;

	new_tmp_n = head;
	while (new_tmp_n)
	{
		printf("[%p] %d\n", (void *)new_tmp_n, new_tmp_n->n);
		new_counter++;
		new_tmp_n = new_tmp_n->next;
		new_l_n = head;
		new_new_n = 0;
		while (new_new_n < new_counter)
		{
			if (new_tmp_n == new_l_n)
			{
				printf("-> [%p] %d\n", (void *)new_tmp_n, new_tmp_n->n);
				return (new_counter);
			}
			new_l_n = new_l_n->next;
			new_new_n++;
		}
		if (!head)
			exit(98);
	}
	return (new_counter);
}
