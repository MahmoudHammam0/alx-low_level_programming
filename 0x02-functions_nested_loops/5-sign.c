#include "main.h"
/**
 * print_sign - check the sign of the number
 *@n : number to be checked
 *Return: value of n
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (n);
}
