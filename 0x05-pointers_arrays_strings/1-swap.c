#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: integer to be swaped with b
 * @b: integer to be swaped with a
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int m = *a;

	*a = *b;
	*b = m;
}
