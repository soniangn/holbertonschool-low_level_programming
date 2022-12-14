#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * **alloc_grid - entry point
 * @width: width of the grid
 * @height: height of the grid
 * Description: see below
 *	Return: a pointer to a 2D array of integers.
 *			Return NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int h = 0;
	int w = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (; h < height; h++)
	{
		grid[h] = malloc(width * sizeof(int));

		if (grid[h] == NULL)
		{
			for (; h >= 0; h--)
				free(grid[h]);
			free(grid);
			return (NULL);
		}

		for (; w < width; w++)
		{
			grid[h][w] = 0;
		}
	}

	return (grid);
}
