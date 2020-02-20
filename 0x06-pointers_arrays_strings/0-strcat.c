#include "holberton.h"

/**
 * _strcat - Concatenate two string
 * @dest: Pointer to a char
 * @src: Pointer to a char
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, c = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[c] != '\0')
	{
		dest[i + c] = src[c];
		c++;
	}
	src = '\0';
	return (dest);
}
