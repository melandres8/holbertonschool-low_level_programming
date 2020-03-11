#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer.
 * @array: Pointer array
 * @size: Size of an array
 * @cmp: Function pointer
 * Return: It depends
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}

		for (count = 0; count < size; count++)
		{
			if ((*cmp)(array[count]))
			{
				return (count);
			}
		}
	}
	return (-1);
}
