#include <stdio.h>
/**
 * main - Entry point
 * Description: print fibbonacci series
 * Return: Always 0(Success)
 */
int main(void)
{
	unsigned long i = 1;
	unsigned long j = 2;
	int x;
	unsigned long result;

	for (x = 1; x <= 50; x++)
	{
		printf("%lu", i);
		if (x == 50)
			break;
		putchar(',');
		putchar(' ');
		result = i + j;
		i = j;
		j = result;
	}
	putchar('\n');
	return (0);
}
