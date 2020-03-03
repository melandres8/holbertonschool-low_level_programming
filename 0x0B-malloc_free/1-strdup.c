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

/**
 * _strdup - Duplicate a String.
 * @str: String.
 * Return: A char.
 */
char *_strdup(char *str)
{
	int size, i;
	char *dest;

	if (str == NULL)
	{
		return (NULL);
	}

	size = _strlen(str);	/* Get the size of str */
	dest = malloc(sizeof(char) * (size + 1));

	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		dest[i] = str[i];
	}
	dest[i] = '\0';
	return (dest);
}
