#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string to be half printed
 * Return: Nothing
 */
void puts_half(char *str)
{
	int n;

	if (strlen(str) % 2 != 0)
	{
		n = (strlen(str) + 1) / 2;
	}
	else
	{
		n = strlen(str) / 2;
	}
	str = str + n;
	while (*str > '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
