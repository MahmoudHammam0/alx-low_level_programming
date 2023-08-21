#include "main.h"
/**
 * puts2 - prints every other character of a string, starting with the first character
 * @str: string to be printed
 * Return: Nothing
 */
void puts2(char *str)
{
	while (*str > '\0')
	{
		_putchar(*str++);
		str++;
	}
	_putchar('\n');
}
