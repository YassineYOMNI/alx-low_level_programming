#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *			and exits with status 98 if malloc fails
 * @b: size of memory to allocate
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
