#include "main.h"
/**
 * times_table - print the 9 times table
 *Return: nothing
 */
void times_table(void)
{
	int a = 0;

	while (a <= 9)
	{
		int b = 0;

		while (b <= 9)
		{
			int x = (a * b);

			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (x >= 10)
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
