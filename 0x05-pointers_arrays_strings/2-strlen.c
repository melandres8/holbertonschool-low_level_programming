#include "holberton.h"

/**
 * _strlen - Calculate the value of a string
 * @s: Pointer to a char
 * Return: the value
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
