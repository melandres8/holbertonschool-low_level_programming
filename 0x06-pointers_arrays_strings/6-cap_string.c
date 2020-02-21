#include "holberton.h"

/**
 * cap_string - Capitalize an string
 * @s: String
 * Return: A char
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[0] -= 32;
		}
		else if ((s[i] == ' ') && s[i + 1] >= 'a' && s[i + 1] <= 'z')
		{
			s[i + 1] -= 32;
		}
		else if ((s[i] == '\t') && s[i + 1] >= 'a' && s[i + 1] <= 'z')
		{
			s[i + 1] -= 32;
		}
		else if ((s[i] == '\n') && s[i + 1] >= 'a' && s[i + 1] <= 'z')
		{
			s[i + 1] -= 32;
		}
		else if ((s[i] == '.') && s[i + 1] >= 'a' && s[i + 1] <= 'z')
		{
			s[i + 1] -= 32;
		}
		i++;
	}
	return (s);
}
