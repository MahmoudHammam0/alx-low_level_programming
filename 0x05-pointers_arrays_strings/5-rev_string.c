#include "main.h"
/**
 * rev_string - prints a string, in reverse, followed by a new line.
 * @s : string to be reverse printed.
 * Return: Nothing
 */
void rev_string(char *s)
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
