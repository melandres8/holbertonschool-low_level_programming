#include "holberton.h"

/**
 * _puts - Write a string with a new line at the end
 * @str: Value of a string
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
