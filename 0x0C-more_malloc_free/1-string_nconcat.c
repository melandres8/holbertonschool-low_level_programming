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
 * string_nconcat - Concatenate two string.
 * @s1: String 1
 * @s2: String 2
 * @n: Number of bytes
 * Return: New
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	unsigned int count = 0;
	char *new;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = s2 = "";
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n < len2)
	{
		len2 = n;
	}
	new = malloc(sizeof(char) * (len1 + len2));

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
	new[len1 + len2] = '\0';
	return (new);
}
