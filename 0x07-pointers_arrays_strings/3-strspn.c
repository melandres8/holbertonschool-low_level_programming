#include "holberton.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: String
 * @accept: Prefix
 * Return: An int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n;

	for (i = 0; s[i]; i++)
	{
		for (n = 0; accept[n]; n++)
		{
			if (s[i] == accept[n])
			{
				break;
			}
		}
		if (!accept[n])
		{
			break;
		}
	}
	return (i);
}
