#include "search_algos.h"

int min(int a, int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

int exponential_search(int *array, size_t size, int value)
{
	int len = size;
	int low, mid, high, i = 1;

	if (array == NULL)
		return (-1);
	if (array[0] == value)
		return (0);
	while (i < len && array[i] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i *= 2;
	}
	low = i / 2;
	high = min(size - 1, i);
	mid = (low + high) / 2;
	printf("Value found between indexes [%d] and [%d]\n", low, high);
	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		i = low;
		while (i < high)
		{
			printf("%d", array[i]);
			i++;
			if (i <= high)
				printf(", ");
		}
		printf("%d\n", array[i]);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
