#include "holberton.h"

/**
 * print_rev - String in reverse
 * @s: Value of a string
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (s[i] != '\0')
	{
		_putchar(s[i--]);
	}
	_putchar('\n');
}
