#include "holberton.h"

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to a char
 * @c: The value
 * Return: A char variable
 */
char *_strchr(char *s, char c)
{
	int i, n;

	i = 0;
	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	n++;
	while (i <= n)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
