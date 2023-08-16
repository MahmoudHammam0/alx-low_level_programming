#include <stdio.h>
/**
 * main - Entry point
 * Description: print fibbonacci series
 * Return: Always 0(Success)
 */
int main(void)
{
	int i = 1;
	int j = 2;
	int x;
	int result;

	for (x = 1; x <= 9; x++)
	{
	printf("%d, \n", i);
	result = i + j;
	i = j;
	j = result;
	}
	return (0);
}
