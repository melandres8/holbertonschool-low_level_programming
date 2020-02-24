#include "holberton.h"

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to a char
 * @c: The value
 * Return: A char variable
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	return (s);
}
