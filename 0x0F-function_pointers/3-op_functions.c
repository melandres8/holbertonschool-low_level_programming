#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Function that add two different values of int.
 * @a: First integer value
 * @b: Secund integer value
 * Return: The add between two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function that subs two different values of int.
 * @a: First integer value
 * @b: Secund integer value
 * Return: The subs between two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function that multiplicate two different values of int.
 * @a: First integer value
 * @b: Secund integer value
 * Return: The mul between two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function that divide two different values of int.
 * @a: First integer value
 * @b: Secund integer value
 * Return: The div between two integers
 */
int op_div(int a, int b)
{
	if (b <= 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Function that module two different values of int.
 * @a: First integer value
 * @b: Secund integer value
 * Return: The mod between two integers
 */
int op_mod(int a, int b)
{
	if (b <= 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
