#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: pointer to first element (character) of string
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	/*Base case (exit conditiom)*/
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	/*print dereference of pointer*/
	_putchar(*s);
	/*move to next element in string*/
	s++;
	/*recall function recursively*/
	_puts_recursion(s);
}
