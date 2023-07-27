#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning
 * of a list_t list
 * @head: linked list head
 * @str: string elemnent of linked list
 *
 * Return: the address of the new element, or NULL
 * if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int ch = 0;
	list_t *n;
	char *sp;

	n = malloc(sizeof(list_t));
	if (n == NULL)
	return (NULL);

	sp = strdup(str);
	if (sp == NULL)
	{
	free(n);
	return (NULL);
	}
	for (; str[ch];)
	ch++;
	n->str = sp;
	n->len = ch;
	n->next = *head;
	*head = n;

	return (n);
}
