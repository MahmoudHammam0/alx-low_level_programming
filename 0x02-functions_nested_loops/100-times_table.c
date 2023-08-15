#include "main.h"
/**
 * print_times_table - prints the times table for a given number
 * @n: the number to print its times table
 * Return: Nothing (void)
 */
void print_times_table(int n)
{
	int a;
	int b;
	int x;

	if (!(n > 15 || n < 0))
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				x = (a * b);
				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (x < 10 && b != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((x % 10) + '0');
				}
				else if (x >= 10 && x < 100)
				{
					_putchar(' ');
					_putchar((x / 10) + '0');
					_putchar((x % 10) + '0');
				}
				else if (x >= 100 && b != 0)
				{
					_putchar((x / 100) + '0');
					_putchar((x / 10) % 10 + '0');
					_putchar((x % 10) + '0');
				}
				else
					_putchar((x % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
