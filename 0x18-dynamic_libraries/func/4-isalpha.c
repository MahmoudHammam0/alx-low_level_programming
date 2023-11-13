#include "main.h"
/**
 * _isalpha - checks if its letter of alphabet or other character
 * @c : character to be checked
 * Return: value of c
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
