#include "search_algos.h"
#include <math.h>

int min(int a, int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

int jump_search(int *array, size_t size, int value)
{
	int prev, step, i, len = size;

	if (array == NULL)
		return (-1);
	prev = 0;
	step = sqrt(size);
	while (array[step] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (step >= len)
			break;
	}
	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	printf("Value found between indexes [%d] and [%d]\n", prev, step);
	if (array[prev] == value)
		return (prev);
	for (i = prev; i <= step && i < len; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
