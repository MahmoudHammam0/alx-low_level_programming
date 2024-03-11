#include "search_algos.h"

/**
 * binary_search - searches for a value using the Binary search algorithm
 * @array: array to be searched
 * @size: size of the array
 * @value: value to search for in the array
 * Return: index of the value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, i;
	int mid;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;
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
