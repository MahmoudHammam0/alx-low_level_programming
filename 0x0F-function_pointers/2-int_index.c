#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searches for an integer element in an array of integers
 * @size: number of elements in the array
 * @cmp: function pointer to function to be executed
 * @array: array of integers
 * Return: returns the index of element for which the cmp does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, x;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		x = (*cmp)(array[i]);
		if (x > 0)
			break;
	}
	if (i == size)
		return (-1);
	return (i);
}
