#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - calculate the sum of all its parameters
 * @n: number of arguments
 * Return: returns the sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
}
