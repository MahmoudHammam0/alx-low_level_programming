#include "main.h"
#include <string.h>
/**
 * _strcmp - compares two strings.
 * @s1: first string
 * @s2: second string
 * Return: less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int a;
	int n = strlen(s1);
	int m = strlen(s2);

	if (n > m)
	{
		a = 15;
	}
	else if (n == m)
	{
		a = 0;
	}
	else if (n < m)
	{
		a = -15;
	}
	return (a);
}
