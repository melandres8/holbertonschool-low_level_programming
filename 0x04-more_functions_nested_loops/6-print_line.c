#include "holberton.h"
/**
 * print_line - Draws a line
 * Return: nothing
 * @n: is the number
 **/
void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		if (n <= 0)
		{
			_putchar('_');
		}
		_putchar('_');
	}
	_putchar('\n');
}
