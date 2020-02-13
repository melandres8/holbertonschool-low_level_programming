#include "holberton.h"
/**
 * print_diagonal - Print a diagonal lines
 * @n: Contains the values
 **/
void print_diagonal(int n)
{
	int n1, n2;

	for (n1 = 0; n1 < n; n1++)
	{
		for (n2 = 0; n2 < n1; n2++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
