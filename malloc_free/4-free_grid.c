#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_grid  - entry point
 * @grid: 2D grid
 * @height: height of the grid
 * Description: frees a 2D grid previously created
 *	Return: 0
 */

void free_grid(int **grid, int height)
{
	int h = 0;
	int w = 0;

	for (; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
	return (NULL);
}
