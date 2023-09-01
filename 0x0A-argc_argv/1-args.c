#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point to program
 * @argc: number of argument passed
 * @argv: array of strings first program name then rest of arguments
 * Return: Always 0(Success)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
