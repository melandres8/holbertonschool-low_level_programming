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

/**
 * _realloc - Reallocate memory.
 * @ptr: Pointer
 * @old_size: First size
 * @new_size: Update size
 * Return: A pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *dest;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		dest = malloc(new_size);
		return (dest);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	dest = malloc(new_size);
	if (dest == NULL)
	{
		return (NULL);
	}
	_memcpy(dest, ptr, old_size);
	free(ptr);
	return (dest);
}
