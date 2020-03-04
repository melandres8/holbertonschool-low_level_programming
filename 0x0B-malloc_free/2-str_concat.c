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
 * str_concat - Concatenate two strings
 * @s1: First string
 * @s2: Secund string
 * Return: A char.
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, count = 0;
	char *new;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);

	new = malloc(sizeof(char) * (len1 + len2 + 1));

	if (new == NULL)
	{
		return (NULL);
	}

	while (*s1)
	{
		new[count] = *s1;
		count++;
		s1++;
	}
	while (*s2)
	{
		new[count] = *s2;
		count++;
		s2++;
	}
	return (new);
}
