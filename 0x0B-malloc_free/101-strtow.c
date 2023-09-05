#include <stdio.h>
#include <stdlib.h>
/**
 * wordcount - count number of words in the string
 * @s: string to be counted
 * Return: integer number of words
 */
int wordcount(char *s)
{
	int i, count = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				count++;
		}
		else if (i == 0)
			count++;
	}
	count++;
	return (count);
}
/**
 * strtow - splits a string into words.
 * @str: string to be splitted into words
 * Return: a pointer to an array of strings(words)
 */
char **strtow(char *str)
{
	char **s;
	int i = 0, j, word = 0, n = 0, c, x;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wordcount(str);
	if (n == 1)
		return (NULL);
	s = (char **)malloc(sizeof(char *) * n);
	if (s == NULL)
		return (NULL);
	s[n - 1] = NULL;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			s[word] = (char *)malloc(sizeof(char) * j);
			j--;
			if (s[word] == NULL)
			{
				for (c = 0; c < word; c++)
					free(s[c]);
				free(s[n - 1]);
				free(s);
				return (NULL);
			}
			for (x = 0; x < j; x++)
				s[word][x] = str[i + x];
			s[word][x] = '\0';
			word++;
			i = i + j;
		}
		else
			i++;
	}
	return (s);
}
