#include "holberton.h"

/**
 * print_array - Print n elements of an array
 * @a: Pointer to an int
 * @n: Numbers
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int counter;

	for (counter = 0; counter < n; counter++)
	{
		printf("%d", a[counter]);
		if (counter != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
