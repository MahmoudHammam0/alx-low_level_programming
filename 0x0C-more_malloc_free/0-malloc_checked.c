#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: number to blocks to be allocated
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(sizeof(int) * b);
	if (s == NULL)
		exit(98);
	return (s);
}
