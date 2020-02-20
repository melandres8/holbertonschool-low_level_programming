#include "holberton.h"

/**
 * reverse_array - Reverse an array of ints
 * @a: Pointer to a int
 * @n: Size of an array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		n--;
	}
}
