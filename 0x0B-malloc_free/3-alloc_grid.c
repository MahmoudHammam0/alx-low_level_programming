#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - create dynamically allocated 2D array
 * @height: number of rows
 * @width: number of columns
 * Return: returns a pointer to a 2D array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **s;
	int x, i, j;

	if (height <= 0 || width <= 0)
		return (NULL);
	s = malloc(sizeof(int *) * height);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		s[x] = malloc(sizeof(int) * width);
		if (s[x] == NULL)
		{
			free(s);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	return (s);
}
