#include "holberton.h"

/**
 * malloc_checked -	Allocate memory using malloc.
 * @b: Bytes value.
 * Return: A pointer to allocate malloc.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
