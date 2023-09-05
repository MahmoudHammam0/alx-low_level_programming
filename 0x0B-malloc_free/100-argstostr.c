#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: count of arguments
 * @av: pointer to an array of pointers
 * Return: pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i = 0, j = 0, x = 0, c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (c = 0, i = 0; i < ac; i++, c++)
		c += strlen(av[i]);
	s = malloc(sizeof(char) * (c + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, x++)
		{
			s[x] = av[i][j];
		}
		s[x] = '\n';
		x++;
	}
	s[x] = '\0';
	return (s);
}
