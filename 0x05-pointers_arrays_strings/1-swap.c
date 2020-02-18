#include "holberton.h"

/**
 * swap_int - Swap of values
 * @a: Pointer to an int
 * @b: Pointer to an int
 * Return: Nothing
 */
void swap_int(int *a, int *b)	/*Swap *a and *b*/
{
	int var;

	var = *a;
	*a = *b;
	*b = var;
}
