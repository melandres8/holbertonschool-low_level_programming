#include "holberton.h"
/**
 * print_triangle - Printing a triangle with c
 * @size: Size of a triangle
 **/
void print_triangle(int size)
{
	int n1, n2;

	for (n1 = 0; n1 < size; n1++)
	{
		for (n2 = 0; n2 < size; n2++)
		{
			if (n2 + 1 < (size - n1))
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
