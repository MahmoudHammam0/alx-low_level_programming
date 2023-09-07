#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum number
 * @max: maximum number
 * Return: pointer to created array
 */
int *array_range(int min, int max)
{
	int *p;
	int n = min;
	int i, count = 0;

	if (min > max)
		return (NULL);
	for (i = 0; i <= max; i++)
		count++;
	p = malloc(sizeof(int) * count);
	if (p == NULL)
		return (NULL);
	for (i = 0; n <= max; i++, n++)
	{
		p[i] = n;
	}
	return (p);
}
