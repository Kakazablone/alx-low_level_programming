#include "main.h"
#include <stdlib.h>

/**
  *alloc_grid - returns a pointer to a 2D array of integers
  *
  *@width: matrix width
  *@height: matrix height
  *
  *Return: pointer to the 2d array
  */

int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		grid[x] = (int *)malloc(sizeof(int) * width);
		if (grid[x] == NULL)
		{
			free(grid);
			for (y = 0; y <= x; y++)
			{
				free(grid[y]);
			}
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			grid[x][y] = 0;
		}
	}
	return (grid);
}
