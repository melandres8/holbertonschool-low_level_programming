#include "holberton.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: String
 * @accept: String that match with @s
 * Return: String that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i]; i++)
	{
		for (n = 0; accept[n]; n++)
		{
			if (s[i] == accept[n])
			{
				return (s + i);
			}
		}
		if (!s[i])
		{
			break;
		}
	}
	return (s);
}
