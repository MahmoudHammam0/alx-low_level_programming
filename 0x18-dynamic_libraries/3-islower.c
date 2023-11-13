#include "main.h"
/**
 * _islower - check if the character is uppercase or lowercase
 * Description: 'print 1 if it is uppercase and 0 if lowercase character'
 * @c : character to be checked
 * Return: value of c
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	else
	{
		return (0);
	}
	return (c);
}
