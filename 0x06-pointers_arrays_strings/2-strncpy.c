#include "holberton.h"

/**
 * _strncpy - Copy an string and print it
 * @dest: Variable destination
 * @src: Variable that contain a original string
 * @n: Random number
 * Return: Dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int counter = 0;

	while (src[counter] != '\0')
	{
		if (counter < n)
		{
			dest[counter] = src[counter];
		}
		counter++;
	}
	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}
	return (dest);
}
