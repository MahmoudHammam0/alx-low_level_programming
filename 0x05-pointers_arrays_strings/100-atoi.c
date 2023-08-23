#include "main.h"
/**
 * _atoi -  convert a string to an integer.
 * @s : string to be converted
 * Return: integer value of string
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int x = 0;
	int res = 0;

	for (; *s != '\0'; s++)
	{
		if (*s == '-')
		{
			sign = sign * -1;
		}
		else if (*s >= 48 && *s <= 57)
		{
			break;
		}
	}
	while (*s >= 48 && *s <= 57)
	{
		x = x * 10;
		x = x + *s - 48;
		s++;
	}
	if (sign == -1)
	{
		res = x * -1;
	}
	else
	{
		res = x;
	}
	return (res);
}
