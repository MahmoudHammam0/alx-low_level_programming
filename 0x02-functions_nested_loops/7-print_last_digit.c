#include "main.h"
/**
 * print_last_digit - print the last digit in multi digit number
 * @n : number to be checked
 * Return: value of n
 */
int print_last_digit(int n)
{
	n = (n % 10);
	if (n > 0)
	{
		_putchar('0' + n);
		return (n);
	}
	else if (n < 0)
	{
		n = (n * (-1));
		_putchar('0' + n);
		return (n);
	}
	else
	{
		_putchar('0');
		return (n);
	}
}
