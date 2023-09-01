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
	int count = 0, res = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	res = atoi(argv[1]);
	if (res < 0)
	{
		printf("0\n");
		return (0);
	}
	while (res / 25)
	{
		res -= 25;
		count++;
	}
	while (res / 10)
	{
		res -= 10;
		count++;
	}
	while (res / 5)
	{
		res -= 5;
		count++;
	}
	while (res / 2)
	{
		res -= 2;
		count++;
	}
	count += res;
	printf("%d\n", count);
	return (0);
}
