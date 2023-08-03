#include "main.h"

/**
 * binary_to_uint - a function tha converts
 * a binary number to an unsigned int
 * @b: pointer to a string
 *
 * Return: the converted number, 0 otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int b_ten = 0;
	int i = 0;

	if (!b)
	return (0);

	for (; b[i]; i++)
	{
	if (b[i] != '0' && b[i] != '1')
	{
	return (0);
	}
	b_ten = 2 * b_ten + (b[i] - '0');
	}
	return (b_ten);
}
