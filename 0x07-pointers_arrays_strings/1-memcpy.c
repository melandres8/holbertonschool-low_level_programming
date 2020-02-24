#include "holberton.h"

/**
 * _memcpy - Copies memory area
 * @dest: Destination variable
 * @src: Source variable
 * @n: Number of bytes
 * Return: A char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	count = 0;
	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}

	return (dest);
}
