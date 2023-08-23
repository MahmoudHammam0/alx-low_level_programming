#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings it will use at most n bytes from src.
 * @dest : the string to append src to.
 * @src : the appended string.
 * @n : number of bytes appended from src.
 * Return: pointer to the the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int m = strlen(dest);

	for (i = 0; i < n; i++)
	{
		dest[m + i] = src[i];
		if (*(src + i) == '\0')
			break;
	}
	return (dest);
}
