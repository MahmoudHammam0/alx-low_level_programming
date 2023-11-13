#include "main.h"
/**
 * _isdigit - check if input if digit and print 1 if it is 0 otherwise
 * @c: input to the function to be checked
 * Return: Always 0(Success)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
