#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*free_grid - free the memory allocated by alloc_grid function
*@grid: grid to free
*@height: free each lign for each height
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
