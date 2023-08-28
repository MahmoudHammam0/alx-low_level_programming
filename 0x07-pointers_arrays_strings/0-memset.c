#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area with the constant byte b
 * @s: pointer to memory area
 * @n: number of bytes to be filled
 * @b: constant byte used to fill the memory area n times
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
