#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9
 * Return: Nothing
 */
void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
