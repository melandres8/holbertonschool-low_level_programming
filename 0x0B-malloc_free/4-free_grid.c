#include "holberton.h"

/**
 * free_grid - Frees a 2 dimensional grid.
 * @grid: The grid pointer.
 * @height: Of a grid.
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
