#include <stdio.h>
/**
 * main - Entry point
 * Desctription: print all the sum of natural number below 1024
 * Return: Always 0(Success)
 */
int main(void)
{
	int a = 1024;
	int n = 0;

	while (a >= 1)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			n = n + a;
		}
		a--;
	}
	printf("The total value of n : %d \n", n);
	return (0);
}
