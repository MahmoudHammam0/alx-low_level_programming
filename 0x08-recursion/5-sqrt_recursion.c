#include "main.h"
/**
 * checker - check for square root
 * @x: number to be checked for square root of n
 * @n: given number to get its square root
 * Return: int checked and incremented
 */
int checker(int x, int n)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	return (checker((x + 1), n));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: given number to get its square root
 * Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (checker(1, n));
}
