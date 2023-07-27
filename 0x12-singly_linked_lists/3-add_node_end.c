#include "lists.h"

/**
 * add_node_end - a function that adds a new
 * node at the end of a list_t list
 * @head: linked list head
 * @str: string element of linked list
 *
 * Return: the address of the new element,
 * or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int ch = 0;
	list_t *n, *c;

	c = *head;
	while (c && c->next != NULL)
	c = c->next;

	for (; str[ch] != '\0'; ch++)
	;

	n = malloc(sizeof(list_t));
	if (n == NULL)
	{
	free(n);
	return (NULL);
	}
	n->str = strdup(str);
	if (n->str == NULL)
	{
	free(n);
	return (NULL);
	}
	n->len = ch;
	n->next = NULL;
	if (c)
	c->next = n;
	else
	*head = n;
	return (n);
}
