#include "main.h"
/**
 * str_cmp - compare two strings
 * @s1: pointer to first element of string1
 * @s2: pointer to first element of string2
 * @x: number of element
 * @y: number of element
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */
int str_cmp(char *s1, char *s2, int x, int y)
{
	if (s1[x] == '\0' && s2[y] == '\0')
	{
		return (1);
	}
	if (s1[x] == s2[y])
	{
		return (str_cmp(s1, s2, x + 1, y + 1));
	}
	if (s1[x] == '\0' && s2[y] == '*')
	{
		return (str_cmp(s1, s2, x, y + 1));
	}
	if (s2[y] == '*')
	{
		return (str_cmp(s1, s2, x + 1, y) || str_cmp(s1, s2, x, y + 1));
	}
	return (0);
}
/**
 * wildcmp - check if strings could be considered identical
 * @s1: pointer to first element of string1
 * @s2: pointer to first element of string2
 * Return: returns 1 if the strings are identical, otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	return (str_cmp(s1, s2, 0, 0));
}
