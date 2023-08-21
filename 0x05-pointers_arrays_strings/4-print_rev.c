#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s : string to be reverse printed.
 * Return: Nothing
 */
void print_rev(char *s)
{
	char *m = s;

	while (*s > '\0')
	{
		s++;
	}
	s--;
	while (s >= m)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
