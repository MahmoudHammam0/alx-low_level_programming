#include "search_algos.h"

int recursive_binary(int *array, int low, int high, int value)
{
	int mid = (high + low) / 2, i;

	if (high < low)
		return (-1);
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
	{
		if (mid == low || array[mid - 1] != value)
			return (mid);
		else
			return recursive_binary(array, low, mid, value);
	}
	else if (array[mid] < value)
		return recursive_binary(array, mid + 1, high, value);
	else
		return recursive_binary(array, low, mid - 1, value);
}

int advanced_binary(int *array, size_t size, int value)
{
	int low = 0, high = size - 1;

	if (array == NULL || size == 0)
		return (-1);
	return (recursive_binary(array, low, high, value));
}
