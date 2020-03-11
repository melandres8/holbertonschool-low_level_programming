#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter
 * @array: Pointer to an array of int elements
 * @size: Size of an array
 * @action: Function to pointer
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t count;

	for (count = 0; count < size; count++)
	{
		(*action)(array[count]);
	}
}
