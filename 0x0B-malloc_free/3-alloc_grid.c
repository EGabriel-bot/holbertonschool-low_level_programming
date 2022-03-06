#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - allocates into a grid
 *@width: variable for the "width" of the array
 *@height: variable for the "height" of the array
 * Return: a pointer to a 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **ptr2;
	int i, j;

	ptr2 = malloc(height * sizeof(int *));
	if (ptr2 == NULL)
	{
		return (NULL);
	}
	else if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr2[i] = malloc(width * sizeof(int));
		if (ptr2[i] == NULL)
		{
			while (i >= 0)
			{
				free(ptr2[i]);
				i--;
			}
			free(ptr2);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ptr2[i][j] = 0;
		}
	}
	return (ptr2);
}
