#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create array of characters
 * @size: size of the array
 * @c: specific char to intialize the array
 * Return: pointer to first element
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
