#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: value of the columns
 * @height: value of rows
 *
 * Return: Alawys success
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **grid;
	int af = 0;
	int k = 0;

	if (width <= 0 && height <= 0)
		return (NULL);
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	while (i < height)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
			if (grid[i] == NULL)
			{
				af = 1;
				break;
			}
			while (j < width)
			{
				grid[i][j] = 0;
				j++;
			}
			i++;
	}
	if (af)
	{
		while (k < i)
		{
			free(grid[k]);
			k++;
		}
		free(grid);
		return (NULL);
	}
	return (grid);
}
