#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the 2 dimensional grid
 *@grid: double pointer
 *@height: variable for height
 * Return: frees grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
