#include "main.h"
/**
 * print_line - print line in the terminal window
 * @n: number of times character _ is printed
 * Return: Nothing
 */
void print_line(int n)
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
			_putchar('_');
		}
	}
	_putchar('\n');
}
