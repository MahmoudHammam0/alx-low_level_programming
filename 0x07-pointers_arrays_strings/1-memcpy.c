#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: number of bytes to be copied
 * Return: pointer to memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *dd = dest;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dd);
}
