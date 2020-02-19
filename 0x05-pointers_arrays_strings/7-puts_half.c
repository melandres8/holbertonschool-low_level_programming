#include "holberton.h"

/**
 * puts_half - Print the middle of the string
 * @str: Contain the string
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, c, size;

	for (i = 0; str[i] != '\0'; i++)
	{}
	
	if (i % 2 == 0)
	{
		size = i / 2;
	}
	else
	{
		size = (i - 1) / 2;
	}

	for (c = i - size; c < i; c++)
	{	
		_putchar(str[c]);
	}
	_putchar('\n');
}
