#include "main.h"
/**
 * print_times_table - print times table of any number
 * @z: input number to function printz
 * Return: nothing
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
				_putchar(' ');
			}
			if (x >= 100)
			{
				printz(x);
			}
			else if (x >= 10)
			{
				_putchar((x / 10) + '0');
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
 * printz - print int from _putchar
 * @z: input number to function printz
 * Return: int from putchar
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
