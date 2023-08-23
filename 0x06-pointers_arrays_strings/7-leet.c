#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @s : pointer to first character
 * Return: character encoded
 */
char *leet(char *s)
{
	char *c = s;
	int i;
	char x[] = {'a', 'e', 'o', 'l', 't'};
	char y[] = {4, 3, 0, 1, 7};

	while (*s > '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == x[i] || *s == x[i] - 32)
			{
				*s = y[i] + '0';
			}
		}
		s++;
	}
	return (c);
}
