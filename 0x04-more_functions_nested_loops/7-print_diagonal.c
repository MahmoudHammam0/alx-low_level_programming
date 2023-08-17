#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('');
		}
	}
	_putchar('\n');
}
