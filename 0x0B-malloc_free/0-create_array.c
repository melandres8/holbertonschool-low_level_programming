#include "holberton.h"

/**
 * create_array - Create an array and inicialized with a char.
 * @size: Size of an array
 * @c: Character
 * Return: A pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *) malloc(size * sizeof(c));
	if (size > 0)
	{
		if (size == 0)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				ptr[i] = c;
			}
			return (ptr);
		}
	}
	return (0);
}
