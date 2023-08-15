#include "main.h"
/**
 * print_alphabet_x10 - print alphabet in lowercase ten times
 */
void print_alphabet_x10(void)
{
	int x = 1;

	while (x <= 10)
	{
		char a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		x++;
	}
}
