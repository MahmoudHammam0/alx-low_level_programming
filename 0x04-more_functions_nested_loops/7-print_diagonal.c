#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int a = 1;
	int b = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (b = 1; b <= n; b++)
	{
		for (a = 1; a < b; a++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
