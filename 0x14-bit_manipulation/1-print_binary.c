#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: number to print its binary representation
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	long int num;
	int i, j = 0;

	if (n == 1)
	{
		_putchar('1');
		return;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (num = 28; num >= 0; num--)
	{
		i = n >> num;
		i = i & 1;
		if (i == 1)
			j = 1;
		if (j == 1)
			_putchar(i + '0');
	}
}
