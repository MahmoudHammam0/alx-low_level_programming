#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a,b: integers to be swaped
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int m = *a;

	*a = *b;
	*b = m;
}
