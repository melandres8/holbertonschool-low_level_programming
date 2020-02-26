#include "holberton.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Array pointer
 * @size: Array size
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	/* A two-dimensional array is, in essence, a list of one-dimensional arrays */
	int total_size, counter, sum1, sum2;

	total_size = size * size;
	sum1 = 0;
	sum2 = 0;

	for (counter = 0 ; counter < total_size;
	     counter = counter + (size + 1))
	{
		sum1 = sum1 + a[counter];
	}
	for (counter = size - 1 ; counter < (total_size - 1);
	     counter = counter + (size - 1))
	{
		sum2 = sum2 + a[counter];
	}
	printf("%d, %d\n", sum1, sum2);
}
