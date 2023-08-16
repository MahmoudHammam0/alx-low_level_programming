#include <stdio.h>
/**
 * main - Entry point
 * Description: print first 98 fibonacci number
 * Return: Always 0(Success)
 */
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	int x;
	unsigned long int res;

	for (x = 1; x <= 99; x++)
	{
		printf("%lu", a);
		if (x == 99)
			break;
		putchar(',');
		putchar(' ');
		res = a + b;
		a = b;
		b = res;
	}
	putchar('\n');
	return (0);
}
