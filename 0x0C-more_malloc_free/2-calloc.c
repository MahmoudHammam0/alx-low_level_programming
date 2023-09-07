#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of members of the array
 * @size: size of each member of the array
 * Return: pointer to allocated memory space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		p[i] = 0;
	}
	return (p);
}
