#include "holberton.h"

/**
 * array_range - Create an array of integers
 * @min: Minimum value
 * @max: Maximum value
 * Return: The pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr, i, total;

	if (min > max)
	{
		return (NULL);
	}

	total = (max - min) + 1;

	ptr = malloc(sizeof(int) * (max - min) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < total; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
