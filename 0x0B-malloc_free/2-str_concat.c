#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return:pointer to allocated memory space contains s1, s2 and null character
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned long int i;
	unsigned long int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j <= strlen(s2); j++)
	{
		s[i + j] = s2[j];
	}
	return (s);
}
