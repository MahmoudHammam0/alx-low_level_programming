#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: simple calculator
 * @argc: argument count
 * @argv: array of argument strings
 * Return: Always 0(Success)
 */
int main(int argc, char **argv)
{
	int A = atoi(argv[1]);
	int B = atoi(argv[3]);
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	res = (*get_op_func(argv[2]))(A, B);
	printf("%d\n", res);
	return (0);
}
