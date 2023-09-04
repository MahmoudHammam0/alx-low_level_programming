#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - make new string which is a duplicate of a string
 * @str: string to be duplicated
 * Return: returns a pointer to a new string which is a duplicate of the string
 */
char *_strdup(char *str)
{
	char *s;
	int i;
	int x = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}
	s = malloc(sizeof(char) * (x + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i <= x; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
