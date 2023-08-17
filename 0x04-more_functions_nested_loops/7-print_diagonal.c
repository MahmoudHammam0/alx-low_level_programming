#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int a = 0;
	int b = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (b = 0; b < n; b++)
	{
		for (a = a - b; a < n; a++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
