#include "holberton.h"
/**
 * print_square - Making a square
 * @size: Contains the size of square
 **/
void print_square(int size)
{
	int n1, n2;

	for (n1 = 0; n1 < size; n1++)
	{
		for (n2 = 0; n2 < size; n2++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
