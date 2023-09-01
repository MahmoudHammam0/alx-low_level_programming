#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point to program
 * @argc: number of argument passed
 * @argv: array of strings first program name then rest of arguments
 * Return: Always 0(Success)
 */
int main(int argc, char *argv[])
{
	int i, sum = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum = sum * atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
