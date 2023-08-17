#include "main.h"
/**
 * more_numbers - print numbers from 0 to 14 ten times
 * Return: Nothing
 */
void more_numbers(void)
{
	int a;
	int x;

	for (x = 1; x <= 10; x++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
