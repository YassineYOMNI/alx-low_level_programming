#include "main.h"

/**
 *_strlen - finds the length of a string.
 *@s: string pointer to the string whose length is to be found.
 *
 * Return: returns the length of the string.
 */

int _strlen(char *s)
{
	int p = 0;

	while (*(s + p) != 0)
	{
	p++;
	}
	return (p);
}
