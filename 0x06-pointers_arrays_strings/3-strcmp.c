#include "holberton.h"

/**
 * _strcmp - Compare two strings
 * @s1: First string
 * @s2: Secund string
 * Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
	}
	return (s1[i] - s2[i]);
}
