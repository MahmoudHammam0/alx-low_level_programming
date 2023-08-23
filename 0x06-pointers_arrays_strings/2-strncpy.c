#include "main.h"
/**
 * _strncpy - copies a string.
 * @dest: string to copy into
 * @src : string to be copied
 * @n : number of bytes ccopied
 * Return: pointer to resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		if (*(src + i) == '\0')
			break;
	}
	return (dest);
}
