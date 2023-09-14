#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_int - print integer for print all function
 * @args: arguments list
 * Return: Nothing
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_char - print character for print all function
 * @args: arguments list
 * Return: Nothing
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_float - print integer for print all function
 * @args: arguments list
 * Return: Nothing
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_str - print string for print all function
 * @args: arguments list
 * Return: Nothing
 */
void print_str(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		s = "(nil)";
	}
	printf("%s", s);
}
/**
 * print_all - prints anything
 * @format: string contain each format character
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	fmt c[] = {
	{'i', print_int},
	{'c', print_char},
	{'f', print_float},
	{'s', print_str},
	{'\0', NULL}
	};
	va_list args;
	int i = 0, j;
	char *v = "";

	va_start(args, format);
	while (format && format[i] != '\0')
	{
		j = 0;
		while (c[j].x != '\0')
		{
			if (format[i] == c[j].x)
			{
				printf("%s", v);
				c[j].ptr(args);
				v = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
