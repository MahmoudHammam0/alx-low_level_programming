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
	int i;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	else
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
