#include <stdio.h>
/**
 * _strchr - locates a character in a string.
 * @s: string to search in it for character
 * @c: character that need to be located
 * Return: pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			char *ss = &s[i];

			return (ss);
		}
	}
	if (s[i] == c)
		return (s + i);
	return (NULL);
}
