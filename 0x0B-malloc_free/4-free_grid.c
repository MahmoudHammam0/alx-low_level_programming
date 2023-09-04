#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2D grid created by alloc_grid function
 * @grid: pointer to first pointer of the grid
 * @height: number of rows
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
