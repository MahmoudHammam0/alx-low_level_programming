#include "search_algos.h"

/**
 * recursive_binary - searches for a value in a sorted array of integers.
 * @array: array to be searched
 * @low: start index
 * @high: end index
 * @value: value to be searched
 * Return: index of value
 */
int recursive_binary(int *array, int low, int high, int value)
{
	int mid = low + (high - low) / 2, i;

	if (low > high)
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
	}
	if (array[mid] >= value)
		return (recursive_binary(array, low, mid, value));
	return (recursive_binary(array, mid + 1, high, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of integers.
 * @array: array to be searched
 * @size: size of the array
 * @value: value to search for in the array
 * Return: index of value or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	int low = 0, high = size - 1;

	if (array == NULL || size == 0)
		return (-1);
	return (recursive_binary(array, low, high, value));
}
