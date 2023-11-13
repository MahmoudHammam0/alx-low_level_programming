#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings.
 * @dest : the string to append src to
 * @src : the appended string
 * Return: pointer to the the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int m = strlen(dest);
	int n = strlen(src);

	for (i = 0; i <= n; i++)
	{
		dest[m + i] = src[i];
	}
	return (dest);
}
