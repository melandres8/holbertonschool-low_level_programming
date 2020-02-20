#include "holberton.h"

/**
 * _strncat - Concatenates two string
 * @dest: Pointer to a char
 * @src: Pointer to a char
 * @n: A number
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, c = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[c] != '\0')
	{
		if (c < n)
		{
			dest[i + c] = src[c];
		}
		c++;
	}
	src = '\0';
	return (dest);
}
