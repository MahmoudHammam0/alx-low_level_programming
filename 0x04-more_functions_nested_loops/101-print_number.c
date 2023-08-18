#include "main.h"
/**
 * print_number - function that prints an integer.
 * @n: is the number to be printed
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int x;
	unsigned int y;

	if (n < 0)
	{
		x = -n;
		_putchar('-');
	}
	else
	{
		x = n;
	}

	y = 1000000000;
	do {
		if (y <= x || y == 1)
			_putchar(((x / y) % 10) + '0');
		y = y / 10;
	} while (y != 0);
}
