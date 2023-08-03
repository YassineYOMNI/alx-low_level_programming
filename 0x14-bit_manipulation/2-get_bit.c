#include "main.h"

/**
 * get_bit - a function that returns the value
 * of a bit at a given index
 * @n: integer to check
 * @index: index of the bit
 *
 * Return: the value of the bit at index, -1 if
 * an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index < 64)
	{
	bit = (n >> index) & 1;
	return (bit);
	}
	return (-1);
}
