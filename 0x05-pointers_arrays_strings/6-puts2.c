#include "holberton.h"

/**
 * puts2 - Puts only the multiplos of 2
 * @str: Numbers from 0 to 10
 * Return: Nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
