#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: grid pointer
 * @height: height
 */

void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height == 0)
		return;

	a = 0;
	while (a < height)
	{
		free(grid[a]);
		a++;
	}
	free(grid);
}
