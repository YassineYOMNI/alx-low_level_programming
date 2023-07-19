#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - a function that adds two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that substracts two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that multiplies two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that divides two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a / b);
}

/**
 * op_mod - a function that calculates the module of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the module
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a % b);
}
