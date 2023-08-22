#include "main.h"
#include <string.h>
/**
 * rev_string - prints a string, in reverse, followed by a new line.
 * @s : string to be reverse printed.
 * Return: Nothing
 */
void rev_string(char *s)
{
	int a;
	char c;
	int n;

	n = strlen(s);
	for (a = 0; a < (n / 2); a++)
	{
		c = s[a];
		s[a] = s[n - 1 - a];
		s[n - 1 - a] = c;
	}
}
