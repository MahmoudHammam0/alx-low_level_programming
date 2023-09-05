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

	if (ac == 0 || av == NULL)
		return (NULL);
	s = malloc(sizeof(char *) * ac);
	if (s == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		s[x] = malloc(sizeof(char) * (strlen(av[x] - 1)));
		if (s[x] == NULL)
			return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		strcpy(s[i], av[i]);
		_putchar('\n');
	}
	return (*s);
}
