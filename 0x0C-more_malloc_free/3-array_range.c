#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *result;
	int i;

	/* if min is greater than max, return NULL */
	if (min > max)
		return (NULL);

	/* allocate memory for array */
	result = malloc(sizeof(int) * (max - min + 1));
	if (result == NULL)
		return (NULL);

	/* fill array with values from min to max */
	for (i = 0; i <= max - min; i++)
		result[i] = min + i;

	return (result);
}
