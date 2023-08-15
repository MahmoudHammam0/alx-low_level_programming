#include "main.h"
/**
 * print_times_table - print times table of any given number
 * @z: input number to function printz
 * Description: print times table of number n
 * Return: nothing (Void)
 */
int printz(int z);
void print_times_table(int n)
{
	int a = 0;

	if (n > 15 || n < 0)
	{
		return;
	}
	while (a <= n)
	{
		int b = 0;

		while (b <= n)
		{
			int x = (a * b);

			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (x <= 10 && b != 0)
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
				_putchar((x % 10) % 10 + '0');
				_putchar((x % 10) + '0');
			}
			else if (x < 10 && b != 0)
			{
				_putchar(' ');
				_putchar((x % 10) + '0');
			}
			else
			{
				_putchar((x % 10) + '0');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
/**
 * printz - print type int from _putchar
 * @z: input number to function printz
 * Return: Always 0(Success)
 */
int printz(int z)
{
	if (z != 0)
	{
		printz(z / 10);
		_putchar((z % 10) + '0');
	}
	return (0);
}
