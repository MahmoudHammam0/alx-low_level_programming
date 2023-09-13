#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: program that prints the opcodes of main function.
 * @argc: number of arguments
 * @argv: array of arguments strings
 * Return: Always 0(Success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (i < atoi(argv[1]))
	{
		printf("%02hhx", ((char *)main)[i]);
		if (i == (atoi(argv[1]) - 1))
		{
			printf("\n");
		}
		else
			printf(" ");
		i++;
	}
	return (0);
}
