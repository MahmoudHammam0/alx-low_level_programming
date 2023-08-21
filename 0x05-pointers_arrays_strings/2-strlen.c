#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: string to print its length
 * Return: length of string
 */
int _strlen(char *s)
{
	int a = sizeof(*s) - 1;

	while (*s > '\0')
	{
		a++;
		s++;
	}
	return (a);
}
