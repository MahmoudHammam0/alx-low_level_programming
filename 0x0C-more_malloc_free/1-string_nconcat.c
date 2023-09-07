#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to be added
 * Return: pointer to memory space contains s1, then n bytes of s2 and null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned long int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		n = strlen(s2);
	s = malloc(sizeof(char) * (strlen(s1) + n + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		s[i + j] = s2[j];
	}
	s[i + j] = '\0';
	return (s);
}
