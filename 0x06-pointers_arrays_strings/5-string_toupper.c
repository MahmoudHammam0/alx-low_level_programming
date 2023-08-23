#include "main.h"
#include <string.h>
/**
 * string_toupper - changes lowercase letters to uppercase.
 * @s: pointer to the first character of string
 * Return: uppercase character
 */
char *string_toupper(char *s)
{
	int i;
	int n = strlen(s);

	for (i = 0; i < n; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
