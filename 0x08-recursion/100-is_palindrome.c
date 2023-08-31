#include "main.h"
/**
 * _strlen_recursion - return length of a string.
 * @s: pointer to the first element of string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (sizeof(*s) + _strlen_recursion(s + 1));
	return (0);
}
/**
 * checker2- check if string is a palindrome.
 * @s: pointer to the first element of string
 * @x: number of element from the left
 * @y: number of element from the right
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */
int checker2(char *s, int x, int y)
{
	if (s[x] == s[y])
		if (x > (y / 2))
			return (1);
		else
			return (checker2(s, (x + 1), (y - 1)));
	else
		return (0);
}
/**
 * is_palindrome - check if a string is palindrome
 * @s: pointer to the first element of string
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	return (checker2(s, 0, _strlen_recursion(s - 1)));
}
