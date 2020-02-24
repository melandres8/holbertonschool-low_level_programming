#include "holberton.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s:
 * @b:
 * @n:
 * Return: A char value
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	count = 0;
	while (count < n)
	{
		s[count] = b;
		count++;
	}
	return (s);
}
