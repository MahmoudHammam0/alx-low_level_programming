#include "main.h"
/**
 * check - check the given string for other characters than 0,1
 * @s: given string
 * Return: 0(Success)
 */
int check(const char *s)
{
	int i;

	if (s == NULL)
		return (1);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '1')
			return (1);
	}
	return (0);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string of binary number to be converted to decimal
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i, c, x, sum = 0, p = 1;
	unsigned int num;

	if (b == NULL)
		return (0);
	c = check(b);
	if (c == 1)
		return (0);
	num = atoi(b);
	for (i = 0; num != 0; i++)
	{
		x = num % 10;
		num = num / 10;
		sum = sum + x * p;
		p *= 2;
	}
	return (sum);
}
