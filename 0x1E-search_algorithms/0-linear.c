#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers.
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array.
 * @value: value to search for
 * Return: Index where value is located or -1 if not
 */
int linear_search(int *array, size_t size, int value)
{
	int count;

	if (array == NULL)
		return (-1);

	for (count = 0; count < (int)size; count++)
	{
		printf("Value checked array[%d] = [%d]\n", count, array[count]);
		if (array[count] == value)
			return (count);
	}
	return (-1);
}
