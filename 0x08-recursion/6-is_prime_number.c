#include "main.h"
/**
 * checker - check if a number is prime or not
 * @x: number to check against
 * @n: number to be checked if prime or not
 * Return: int checked and incremented
 */
int checker(int x, int n)
{
	if (n < 2 || n % x == 0)
		return (0);
	else if (x > (n / 2))
		return (1);
	else
		return (checker(x + 1, n));
}

/**
 * is_prime_number - checks if number is prime or not
 * @n: number to be checked
 * Return: 1 or 0 depending on whether n is prime or not
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (checker(2, n));
}
