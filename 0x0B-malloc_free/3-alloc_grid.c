#include "holberton.h"

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: Of a grid
 * @height: Of a grid
 * Return: A pointer
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(p) * height);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);

		if (p[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(p[i]);
			}
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			*(p[i] + j) = 0;
		}
	}
	return (p);
}
