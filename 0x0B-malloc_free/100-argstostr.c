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
	char **s;
	int x, i;
	unsigned long int j;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	s = malloc(sizeof(char *) * ac);
	if (s == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		s[x] = malloc(sizeof(char) * strlen(av[x]));
		if (s[x] == NULL)
		{
			return (NULL);
		}
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			s[i][j] = av[i][j];
			if (av[i][j] == '\0')
			{
				_putchar('\n');
			}
		}
	}
	return (*s);
}
