#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @src : string to be copied
 * @dest : buffer to copy to
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *i = src;

	while (*src >= '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest = i;
	while (*dest >= '\0')
	{
		return (dest);
		dest++;
	}
	return (dest);
}
