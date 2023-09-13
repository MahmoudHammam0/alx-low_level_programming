#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - add two integers
 * @a: integer 1
 * @b: integer 2
 * Return: sum of two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract two integers
 * @a: integer 1
 * @b: integer 2
 * Return: subtraction of two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two integers
 * @a: integer 1
 * @b: integer 2
 * Return: multiplication of two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two integers
 * @a: integer 1
 * @b: integer 2
 * Return: division of two integers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - modulo two integers
 * @a: integer 1
 * @b: integer 2
 * Return: reminder of division of two integers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
