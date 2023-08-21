#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array of integers.
 * @n : number of elements to be printed
 * @a : pointer to first element
 */
void print_array(int *a, int n)
{
	int s = 0;

	while (s < n)
	{
		printf("%d", *(a + s));
		if (s == (n - 1))
			break;
		printf(", ");
		s++;
	}
	printf("\n");
}
