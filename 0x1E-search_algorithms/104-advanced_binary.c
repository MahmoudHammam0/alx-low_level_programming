#include "search_algos.h"

int recursive_binary(int *array, int low, int high, int value)
{
	int mid = (low + high) / 2, i;

	if (low > high || array == NULL)
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
		if (array[mid - 1] == value)
			return recursive_binary(array, low, mid, value);
		else if (array[mid + 1] == value)
			return (mid + 1);
		else
			return (mid);
	}
	else if (array[mid] > value)
		return recursive_binary(array, low, mid - 1, value);
	else
		return recursive_binary(array, mid + 1, high, value);
}

int advanced_binary(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, index;

	if (array == NULL)
		return (-1);
	index = recursive_binary(array, low, high, value);
	return (index);
}
