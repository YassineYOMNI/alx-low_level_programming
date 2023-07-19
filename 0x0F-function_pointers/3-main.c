#include "3-calc.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that gives the result of the operation
 * @argv: number of arguments
 * @argc: array of arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	char *operation;

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}
	a = atoi(argv[1]);
	operation = argv[2];
	b = atoi(argv[3]);
	if (get_op_func(operation) == NULL || operation[1] != '\0')
	{
	printf("Error\n");
	exit(99);
	}
	printf("%d\n", get_op_func(operation)(a, b));
	return (0);
}
