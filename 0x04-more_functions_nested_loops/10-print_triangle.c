#include "main.h"
/**
 * print_triangle -  prints a triangle
 * @size: size of triangle
 * Return: Nothing
 */
void print_triangle(int size)
{
	int x;
	int y;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (x = 1; x <= size; ++x)
	{
		for (y = (size-1); y >= x ; --y)
		{
			_putchar(' ');
		}
		for (c = size - y; c <= size; ++c)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
