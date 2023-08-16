#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (a > b && c > b)
	{
		if (c > a)
		{
			largest = c;
		}
		else
		{
			largest = a;
		}
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else if (b > a && c > a)
	{
		if (c > b)
		{
			largest = c;
		}
		else
		{
			largest = b;
		}
	}
	else if (c > a && a > b)
	{
		largest = c;
	}
	else if (c > a && b > a)
	{
		if (c > b)
		{
			largest = c;
		}
		else
		{
			largest = b;
		}
	}
	else if (a > b && b == c)
	{
		largest = a;
	}
	else if (a > c && c == b)
	{
		largest = a;
	}
	else if (b > a && a == c)
	{
		largest = b;
	}
	else if (b > c && c == a)
	{
		largest = b;
	}
	else if (c > a && a == b)
	{
		largest = c;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
