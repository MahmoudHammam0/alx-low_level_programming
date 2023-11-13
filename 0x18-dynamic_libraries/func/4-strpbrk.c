#include <stdio.h>
/**
 * _strpbrk - locates the first occurrence of any bytes in string accept
 * @s: string to be checked
 * @accept: string of characters to match with s
 * Return: pointer to the byte in s that matches in accept or NULL if none
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				char *x = &s[i];

				return (x);
			}
		}
	}
	return (NULL);
}
