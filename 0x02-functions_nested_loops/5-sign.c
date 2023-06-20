#include "main.h"

/**
* print_sign - prints the sign of a number
 *
 * @m: number to be checked
 *
 * Return: 1 if n is greater than zero, 0 if n is zero,
 *			-1 if n is less than zero
*/
int	print_sign(int m)
{
	_putchar((m > 0) ? '+' : (m < 0) ? '-' : '0');
	return ((m > 0) ? 1 : (m < 0) ? -1 : 0);
}
