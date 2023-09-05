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
	int i;

	if (ac == 0 || av == NULL)
		return (NULL);
	s = malloc(sizeof(char *) * ac);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		s[i] = malloc(sizeof(char) * strlen(av[i]));
		if (s[i] == NULL)
			return (NULL);
		strcpy(s[i], av[i]);
	}
	return (*s);
}
