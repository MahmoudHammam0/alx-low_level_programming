#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonals of a matrix of integers.
 * @a: pointer to first element a[0][0]
 * @size: size of matrix
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int y = 0;
	int v = 0;
	int *c = a;
	int **x = &a;

	while (i < size)
	{
		y = y + **x;
		i++;
		a = a + size + 1;
	}
	printf("%d, ", y);
	a = c;
	while (j < size)
	{
		a = a + (size - 1);
		v = v + **x;
		j++;
	}
	printf("%d\n", v);
}
