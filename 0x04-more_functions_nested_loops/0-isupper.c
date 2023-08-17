#include "main.h"
/**
 * _isupper - check for uppercase characters and print 1 or 0 otherwise
 * @c: input to the function to be checked
 * Return: Always 0(Success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
