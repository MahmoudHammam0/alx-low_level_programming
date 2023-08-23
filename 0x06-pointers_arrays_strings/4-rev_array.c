#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array to be reversed
 * @n: number of elements of array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int x;
	int m = n / 2;

	for (i = 0; i < m; i++)
	{
		x = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = x;
	}
}
