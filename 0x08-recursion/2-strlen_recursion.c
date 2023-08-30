#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer to first element of the string
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (sizeof(*s) + _strlen_recursion(s + 1));
	}
}
