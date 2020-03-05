#include "holberton.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to a char
 * @b: Char variable
 * @n: Num of bytes
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

/**
 * _calloc - Allocates memory using malloc.
 * @nmemb: Array 
 * @size: Bytes
 * Return: Pointer to allocate memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	_memset(ptr, 0, (size * nmemb));
	return (ptr);
}