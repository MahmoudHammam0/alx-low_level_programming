#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string to be printed
 * Return: Nothing
 */
void puts2(char *str)
{
	while (*str > '\0')
	{
		_putchar(*str++);
		if (*str == '\0')
			break;
		str++;
	}
	_putchar('\n');
}
