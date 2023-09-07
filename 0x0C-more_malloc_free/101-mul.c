#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * is_digit - checks if the string consists only of digits or not
 * @s: string to be checked
 * Return: 0(Success) or 1 otherwise.
 */
int is_digit(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * _strlen - determine the length of a string
 * @s: string to calculate its length
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * Error - print Error in case of failure
 */
void Error(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two arguments
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int l1, l2, l, i, c, d1, d2, *res, x = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		Error();
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	l = l1 + l2 + 1;
	res = malloc(sizeof(int) * l);
	if (!res)
		return (1);
	for (i = 0; i <= l1 + l2; i++)
		res[i] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		d1 = s1[l1] - '0';
		c = 0;
		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			d2 = s2[l2] - '0';
			c += res[l1 + l2 + 1] + (d1 * d2);
			res[l1 + l2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			res[l1 + l2 + 1] += c;
	}
	for (i = 0; i < l - 1; i++)
	{
		if (res[i])
			x = 1;
		if (x)
			_putchar(res[i] + '0');
	}
	if (!x)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
