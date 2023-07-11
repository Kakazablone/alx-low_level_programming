#include "main.h"
#include <stdlib.h>

/**
  *free_grid - frees a 2 dimensional grid previously created by
  *your alloc_grid function
  *
  *@grid: Double pointer to a 2d array
  *@height: height of 2d array
  *
  *Return: Nothing
  */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
