#include <stdio.h>
/**
 * _strstr - finds the first occurrence of the substring needle in the string haystack
 * @haystack: string to be checked
 * @needle: string required to be found in haystack
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j] && haystack[i + 1] == needle[j + 1])
			{
				char *x = &haystack[i];

				return (x);
			}
		}
	}
	return (NULL);
}
