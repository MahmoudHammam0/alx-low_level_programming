#include <stdio.h>
/**
 * main - Entry point
 * Description: print fibbonacci series
 * Return: Always 0(Success)
 */
int main(void)
{
	long int i = 1;
	long int j = 2;
	int x;
	long int result;

	for (x = 1; x <= 50; x++)
	{
	printf("%lu, ", i);
	if (x == 50)
		break;
	result = i + j;
	i = j;
	j = result;
	}
	return (0);
}
