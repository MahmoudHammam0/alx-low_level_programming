#include "main.h"
#include <string.h>
/**
 * cap_string - capitalizes all words of a string.
 * @s : pointer to first character of string
 * Return: capitalized character
 */
char *cap_string(char *s)
{
	int i;
	int n = strlen(s);

	for (i = 0; i < n; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[i - 1] == ' ' ||
					s[i - 1] == '\t' ||
					s[i - 1] == '\n' ||
					s[i - 1] == ',' ||
					s[i - 1] == ';' ||
					s[i - 1] == '.' ||
					s[i - 1] == '!' ||
					s[i - 1] == '?' ||
					s[i - 1] == '"' ||
					s[i - 1] == '(' ||
					s[i - 1] == ')' ||
					s[i - 1] == '{' ||
					s[i - 1] == '}')
			{
				s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}
