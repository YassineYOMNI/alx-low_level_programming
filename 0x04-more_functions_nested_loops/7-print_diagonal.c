#include <stdio.h>
#include "main.h"

/**
* print_diagonal - prints a diagonal
* @n: parameter
*
* Return: returns nothing
*/

void print_diagonal(int n)
{
	int l, space;

	if (n > 0)
	{
	for (l = 0; l < n; l++)
	{
	for (space = 0; space < l; space++)
	{
	putchar(' ');
	}

	putchar('\\');

	if (l == (n - 1))
	{
	continue;
	}
	putchar('\n');
	}
	}
	putchar('\n');
}
