#include "search_algos.h"

int interpolation_search(int *array, size_t size, int value)
{
	int low, high;
	size_t pos;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;
	while (low < high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		if (pos > size - 1)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}
	return (-1);
}
