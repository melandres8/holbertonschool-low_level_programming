#include "holberton.h"

/**
 * _strstr - Locates a substring.
 * @haystack: String
 * @needle: Substring
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i, n, a;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (a = i, n = 0; needle[n] != '\0'; a++, n++)
		{
			if (haystack[a] != needle[n] || haystack[a] == '\0')
			{
				break;
			}
		}
		if (needle[n] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
