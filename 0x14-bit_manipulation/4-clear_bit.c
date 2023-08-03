#include "main.h"

/**
 * clear_bit - a function that sets the value
 * of a bit to 0 at a given index
 * @n: integer to check
 * @index: index of the bit
 *
 * Return: 1 if it worked, -1 if not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);
	*n = (*n & ~(1 << index));
	return (1);
}
