#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created.
 * @grid: function to be freed.
 * @height: value of rows.
 *
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
	{
		return;
	}
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
