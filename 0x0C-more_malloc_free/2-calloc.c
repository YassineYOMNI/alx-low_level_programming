#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;
	unsigned int i;

	/* if nmemb or size is 0, return NULL */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* allocate memory for array */
	result = malloc(nmemb * size);
	if (result == NULL)
		return (NULL);

	/* initialize array to 0 */
	for (i = 0; i < nmemb * size; i++)
		result[i] = 0;

	return (result);
}
